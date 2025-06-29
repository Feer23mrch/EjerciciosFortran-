%{
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <iostream>
using namespace std;

extern int yylex();
extern int yyparse();
extern FILE *yyin;

void yyerror(const char *s);

string indent(const string& s) {
    string indented;
    size_t pos = 0, next;
    while ((next = s.find('\n', pos)) != string::npos) {
        indented += "    " + s.substr(pos, next - pos + 1);
        pos = next + 1;
    }
    if (pos < s.size())
        indented += "    " + s.substr(pos) + "\n";
    return indented;
}
%}

%union {
    char* sval;
}

%token <sval> ID STRING_LITERAL NUMBER
%token PROGRAM END IF THEN ENDIF ELSE WRITE ASSIGN SEMICOLON LPAREN RPAREN
%token FUNCTION ENDFUNCTION DO ENDDO CALL
%token FOR TO STEP ENDFOR
%token RETURN COMMA PLUS MINUS MULT
%token INTEGER REAL CHARACTER DOUBLECOLON LEN ASTERISK
%token EQ 
%token GT LT GE LE NEQ
%token <sval> COMMENT
%token WHITESPACE

%left PLUS MINUS
%left MULT
%nonassoc EQ
%nonassoc GT LT GE LE NEQ

%type <sval> program statements statement if_statement write_statement
%type <sval> function_decl return_statement do_loop call_statement for_loop
%type <sval> value expression param_list param_call_list id_list opt_param_list expr_list variable_declaration

%%

program:
      PROGRAM ID statements END PROGRAM ID
    {
        string output = "def main():\n" + indent($3) + 
                        "\n\nif __name__ == \"__main__\":\n    main()\n\n" +
                        "# PROGRAMA FUNCIONANDO... cls\n";
        cout << output;
    }
;

statements:
      /* vacío */                  { $$ = strdup(""); }
    | statements statement         {
        string combined = string($1) + string($2);
        free($1); free($2);
        $$ = strdup(combined.c_str());
    }
;

statement:
      if_statement
    | write_statement
    | function_decl
    | do_loop
    | call_statement
    | for_loop
    | return_statement
    | variable_declaration
    | ID ASSIGN expression SEMICOLON
      {
          string name = $1;
          string val = $3;
          free($1); free($3);
          $$ = strdup((name + " = " + val + "\n").c_str());
      }
    | COMMENT
    {
        string s = string($1);
        free($1);
        if (!s.empty() && s[0] == '!')
            s[0] = '#';
        else
            s = "# " + s;
        s += "\n";
        $$ = strdup(s.c_str());
    }
;

variable_declaration:
      INTEGER DOUBLECOLON id_list         { $$ = strdup($3); free($3); }
    | REAL DOUBLECOLON id_list            { $$ = strdup($3); free($3); }
    | CHARACTER LPAREN LEN ASSIGN NUMBER RPAREN DOUBLECOLON id_list { $$ = strdup($8); free($8); }
    | CHARACTER LPAREN NUMBER RPAREN DOUBLECOLON id_list            { $$ = strdup($6); free($6); }
    | CHARACTER DOUBLECOLON id_list       { $$ = strdup($3); free($3); }
;

id_list:
    ID
        {
            string s = string($1) + " = 0\n";
            free($1);
            $$ = strdup(s.c_str());
        }
    | id_list COMMA ID
        {
            string s = string($1) + string($3) + " = 0\n";
            free($1); free($3);
            $$ = strdup(s.c_str());
        }
;

param_list:
    ID                     { $$ = strdup($1); free($1); }
    | param_list COMMA ID {
        string res = string($1) + ", " + $3;
        free($1); free($3);
        $$ = strdup(res.c_str());
    }
;

opt_param_list:
    LPAREN param_list RPAREN
        {
            string p = $2;
            free($2);
            $$ = strdup(p.c_str());
        }
    | LPAREN RPAREN
        {
            $$ = strdup("");  // sin parámetros
        }
;

param_call_list:
    expression                           { $$ = strdup($1); free($1); }
    | param_call_list COMMA expression  {
        string res = string($1) + ", " + $3;
        free($1); free($3);
        $$ = strdup(res.c_str());
    }
;

expr_list:
    expression
        { $$ = strdup($1); free($1); }
    | expr_list COMMA expression
        {
            string combined = string($1) + ", " + $3;
            free($1); free($3);
            $$ = strdup(combined.c_str());
        }
;

if_statement:
    IF value THEN statements ENDIF
    {
        string cond = $2;
        string body = indent($4);
        free($2); free($4);
        $$ = strdup(("if " + cond + ":\n" + body).c_str());
    }
    | IF value THEN statements ELSE statements ENDIF
    {
        string cond = $2;
        string then_body = indent($4);
        string else_body = indent($6);
        free($2); free($4); free($6);
        $$ = strdup(("if " + cond + ":\n" + then_body + "else:\n" + else_body).c_str());
    }
;

write_statement:
      WRITE LPAREN expr_list RPAREN
    {
        string s = $3;
        free($3);
        $$ = strdup(("print(" + s + ")\n").c_str());
    }
    | WRITE LPAREN expr_list RPAREN SEMICOLON
    {
        string s = $3;
        free($3);
        $$ = strdup(("print(" + s + ")\n").c_str());
    }
;

function_decl:
    FUNCTION ID opt_param_list statements ENDFUNCTION
    {
        string fname = $2;
        string params = $3;
        string body = indent($4);
        free($2); free($3); free($4);
        $$ = strdup(("def " + fname + "(" + params + "):\n" + body + "\n").c_str());
    }
;

call_statement:
    CALL ID SEMICOLON
    {
        string fname = $2;
        free($2);
        $$ = strdup((fname + "()\n").c_str());
    }
  | CALL ID LPAREN RPAREN SEMICOLON
    {
        string fname = $2;
        free($2);
        $$ = strdup((fname + "()\n").c_str());
    }
  | CALL ID LPAREN param_call_list RPAREN SEMICOLON
    {
        string fname = $2;
        string args = $4;
        free($2); free($4);
        $$ = strdup((fname + "(" + args + ")\n").c_str());
    }
;


for_loop:
    FOR ID ASSIGN value TO value statements ENDFOR
    {
        string var = $2;
        string start = $4;
        string end = $6;
        string body = indent($7);
        free($2); free($4); free($6); free($7);
        $$ = strdup(("for " + var + " in range(" + start + ", " + end + " + 1):\n" + body).c_str());
    }
;

do_loop:
      DO statements ENDDO
    {
        string body = indent($2);
        free($2);
        $$ = strdup(("while True:\n" + body).c_str());
    }
  | DO value statements ENDDO
    {
        string cond = $2;
        string body = indent($3);
        free($2); free($3);
        $$ = strdup(("while " + cond + ":\n" + body).c_str());
    }
  | DO ID ASSIGN value COMMA value statements ENDDO
    {
        string var = $2;
        string start = $4;
        string end = $6;
        string body = indent($7);
        free($2); free($4); free($6); free($7);
        $$ = strdup(("for " + var + " in range(" + start + ", " + end + " + 1):\n" + body).c_str());
    }
;



return_statement:
    RETURN expression
    {
        string val = $2;
        free($2);
        $$ = strdup(("return " + val + "\n").c_str());
    }
;

value:
    ID              { $$ = strdup($1); free($1); }
  | NUMBER          { $$ = strdup($1); free($1); }
  | value EQ value  {
        string res = string($1) + " == " + string($3);
        free($1); free($3);
        $$ = strdup(res.c_str());
    }
  | value NEQ value {
        string res = string($1) + " != " + string($3);
        free($1); free($3);
        $$ = strdup(res.c_str());
    }
  | value GT value {
        string res = string($1) + " > " + string($3);
        free($1); free($3);
        $$ = strdup(res.c_str());
    }
  | value LT value {
        string res = string($1) + " < " + string($3);
        free($1); free($3);
        $$ = strdup(res.c_str());
    }
  | value GE value {
        string res = string($1) + " >= " + string($3);
        free($1); free($3);
        $$ = strdup(res.c_str());
    }
  | value LE value {
        string res = string($1) + " <= " + string($3);
        free($1); free($3);
        $$ = strdup(res.c_str());
    }
;


expression:
      STRING_LITERAL     { $$ = strdup($1); free($1); }
    | value              { $$ = strdup($1); free($1); }
    | expression PLUS expression
        {
            string res = string($1) + " + " + string($3);
            free($1); free($3);
            $$ = strdup(res.c_str());
        }
    | expression MINUS expression
        {
            string res = string($1) + " - " + string($3);
            free($1); free($3);
            $$ = strdup(res.c_str());
        }
    | expression MULT expression
        {
            string res = string($1) + " * " + string($3);
            free($1); free($3);
            $$ = strdup(res.c_str());
        }
    | ID LPAREN param_call_list RPAREN
        {
            string fname = $1;
            string args = $3;
            free($1); free($3);
            $$ = strdup((fname + "(" + args + ")").c_str());
        }
    | ID LPAREN RPAREN
        {
            string fname = $1;
            free($1);
            $$ = strdup((fname + "()").c_str());
        }
;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}

int main() {
    yyin = fopen("datos.txt", "r");
    if (!yyin) {
        perror("datos.txt");
        return 1;
    }
    return yyparse();
}
