/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_FORTRAN_TAB_H_INCLUDED
# define YY_YY_FORTRAN_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ID = 258,                      /* ID  */
    STRING_LITERAL = 259,          /* STRING_LITERAL  */
    NUMBER = 260,                  /* NUMBER  */
    PROGRAM = 261,                 /* PROGRAM  */
    END = 262,                     /* END  */
    IF = 263,                      /* IF  */
    THEN = 264,                    /* THEN  */
    ENDIF = 265,                   /* ENDIF  */
    ELSE = 266,                    /* ELSE  */
    WRITE = 267,                   /* WRITE  */
    ASSIGN = 268,                  /* ASSIGN  */
    SEMICOLON = 269,               /* SEMICOLON  */
    LPAREN = 270,                  /* LPAREN  */
    RPAREN = 271,                  /* RPAREN  */
    FUNCTION = 272,                /* FUNCTION  */
    ENDFUNCTION = 273,             /* ENDFUNCTION  */
    DO = 274,                      /* DO  */
    ENDDO = 275,                   /* ENDDO  */
    CALL = 276,                    /* CALL  */
    READ = 277,                    /* READ  */
    FOR = 278,                     /* FOR  */
    TO = 279,                      /* TO  */
    STEP = 280,                    /* STEP  */
    ENDFOR = 281,                  /* ENDFOR  */
    RETURN = 282,                  /* RETURN  */
    COMMA = 283,                   /* COMMA  */
    PLUS = 284,                    /* PLUS  */
    MINUS = 285,                   /* MINUS  */
    MULT = 286,                    /* MULT  */
    INTEGER = 287,                 /* INTEGER  */
    REAL = 288,                    /* REAL  */
    CHARACTER = 289,               /* CHARACTER  */
    DOUBLECOLON = 290,             /* DOUBLECOLON  */
    LEN = 291,                     /* LEN  */
    ASTERISK = 292,                /* ASTERISK  */
    EQ = 293,                      /* EQ  */
    GT = 294,                      /* GT  */
    LT = 295,                      /* LT  */
    GE = 296,                      /* GE  */
    LE = 297,                      /* LE  */
    NEQ = 298,                     /* NEQ  */
    COMMENT = 299,                 /* COMMENT  */
    WHITESPACE = 300,              /* WHITESPACE  */
    DIV = 301,                     /* DIV  */
    POW = 302                      /* POW  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 32 "fortran.y"

    char* sval;

#line 115 "fortran.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_FORTRAN_TAB_H_INCLUDED  */
