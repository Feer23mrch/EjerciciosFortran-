%{
#include "fortran.tab.h"
#include <string.h>
%}

%%

"!"[^\n]*    { yylval.sval = strdup(yytext); return COMMENT; }  /* Comentarios estilo Fortran */

">="                          { return GE; }
"<="                          { return LE; }
"!="                          { return NEQ; }
"=="                          { return EQ;}
">"                           { return GT;}
"<"                           { return LT;}
"="                           { return ASSIGN;  }

"PROGRAM"                     { return PROGRAM; }
"END"                         { return END; }
"IF"                          { return IF; }
"THEN"                        { return THEN; }
"ENDIF"                       { return ENDIF; }
"ELSE"                        { return ELSE;} 
"WRITE"                       { return WRITE;}
"FUNCTION"                    { return FUNCTION; }
"ENDFUNCTION"                 { return ENDFUNCTION; }
"DO"                          { return DO; } 
"ENDDO"                       { return ENDDO;}
"CALL"                        { return CALL;}
"FOR"                         { return FOR;}
"TO"                          { return TO;}
"STEP"                        { return STEP; }
"ENDFOR"                      { return ENDFOR; }
"RETURN"                      { return RETURN; }
"INTEGER"                     { return INTEGER; }
"REAL"                        { return REAL; }
"CHARACTER"                   { return CHARACTER; }
LEN[ \t]*=                    { return LEN; } 
"::"                          { return DOUBLECOLON; }
";"                           { return SEMICOLON; }
"("                           { return LPAREN; }
")"                           { return RPAREN; }
","                           { return COMMA; }
"/"                           { return DIV; }
"**"                          { return POW; }
"*"                           { return MULT; }
"+"                           { return PLUS; }
"-"                           { return MINUS; }

[Rr][Ee][Aa][Dd]     { return READ; }



[0-9]+                         { yylval.sval = strdup(yytext); return NUMBER; }
\'[^\']*\'                     { yylval.sval = strdup(yytext); return STRING_LITERAL; }
[A-Za-z_][A-Za-z0-9_]*         { yylval.sval = strdup(yytext); return ID; }

[ \t\r\n]+                     ; /* Ignorar espacios */

.                              {
                                 fprintf(stderr, "Carácter inesperado: '%c'\n", yytext[0]);
                                 return 0;
                              }

%%

int yywrap() {
    return 1;
}
