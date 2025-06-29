/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "fortran.y"

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

#line 98 "fortran.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "fortran.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_STRING_LITERAL = 4,             /* STRING_LITERAL  */
  YYSYMBOL_NUMBER = 5,                     /* NUMBER  */
  YYSYMBOL_PROGRAM = 6,                    /* PROGRAM  */
  YYSYMBOL_END = 7,                        /* END  */
  YYSYMBOL_IF = 8,                         /* IF  */
  YYSYMBOL_THEN = 9,                       /* THEN  */
  YYSYMBOL_ENDIF = 10,                     /* ENDIF  */
  YYSYMBOL_ELSE = 11,                      /* ELSE  */
  YYSYMBOL_WRITE = 12,                     /* WRITE  */
  YYSYMBOL_ASSIGN = 13,                    /* ASSIGN  */
  YYSYMBOL_SEMICOLON = 14,                 /* SEMICOLON  */
  YYSYMBOL_LPAREN = 15,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 16,                    /* RPAREN  */
  YYSYMBOL_FUNCTION = 17,                  /* FUNCTION  */
  YYSYMBOL_ENDFUNCTION = 18,               /* ENDFUNCTION  */
  YYSYMBOL_DO = 19,                        /* DO  */
  YYSYMBOL_ENDDO = 20,                     /* ENDDO  */
  YYSYMBOL_CALL = 21,                      /* CALL  */
  YYSYMBOL_FOR = 22,                       /* FOR  */
  YYSYMBOL_TO = 23,                        /* TO  */
  YYSYMBOL_STEP = 24,                      /* STEP  */
  YYSYMBOL_ENDFOR = 25,                    /* ENDFOR  */
  YYSYMBOL_RETURN = 26,                    /* RETURN  */
  YYSYMBOL_COMMA = 27,                     /* COMMA  */
  YYSYMBOL_PLUS = 28,                      /* PLUS  */
  YYSYMBOL_MINUS = 29,                     /* MINUS  */
  YYSYMBOL_MULT = 30,                      /* MULT  */
  YYSYMBOL_INTEGER = 31,                   /* INTEGER  */
  YYSYMBOL_REAL = 32,                      /* REAL  */
  YYSYMBOL_CHARACTER = 33,                 /* CHARACTER  */
  YYSYMBOL_DOUBLECOLON = 34,               /* DOUBLECOLON  */
  YYSYMBOL_LEN = 35,                       /* LEN  */
  YYSYMBOL_ASTERISK = 36,                  /* ASTERISK  */
  YYSYMBOL_EQ = 37,                        /* EQ  */
  YYSYMBOL_GT = 38,                        /* GT  */
  YYSYMBOL_LT = 39,                        /* LT  */
  YYSYMBOL_GE = 40,                        /* GE  */
  YYSYMBOL_LE = 41,                        /* LE  */
  YYSYMBOL_NEQ = 42,                       /* NEQ  */
  YYSYMBOL_COMMENT = 43,                   /* COMMENT  */
  YYSYMBOL_WHITESPACE = 44,                /* WHITESPACE  */
  YYSYMBOL_YYACCEPT = 45,                  /* $accept  */
  YYSYMBOL_program = 46,                   /* program  */
  YYSYMBOL_statements = 47,                /* statements  */
  YYSYMBOL_statement = 48,                 /* statement  */
  YYSYMBOL_variable_declaration = 49,      /* variable_declaration  */
  YYSYMBOL_id_list = 50,                   /* id_list  */
  YYSYMBOL_param_list = 51,                /* param_list  */
  YYSYMBOL_opt_param_list = 52,            /* opt_param_list  */
  YYSYMBOL_param_call_list = 53,           /* param_call_list  */
  YYSYMBOL_expr_list = 54,                 /* expr_list  */
  YYSYMBOL_if_statement = 55,              /* if_statement  */
  YYSYMBOL_write_statement = 56,           /* write_statement  */
  YYSYMBOL_function_decl = 57,             /* function_decl  */
  YYSYMBOL_call_statement = 58,            /* call_statement  */
  YYSYMBOL_for_loop = 59,                  /* for_loop  */
  YYSYMBOL_do_loop = 60,                   /* do_loop  */
  YYSYMBOL_return_statement = 61,          /* return_statement  */
  YYSYMBOL_value = 62,                     /* value  */
  YYSYMBOL_expression = 63                 /* expression  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   300

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  57
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  136

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   299


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    55,    55,    65,    66,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    89,   103,   104,   105,   106,   107,
     111,   117,   126,   127,   135,   141,   148,   149,   157,   159,
     168,   175,   186,   192,   201,   212,   218,   224,   235,   247,
     253,   260,   274,   283,   284,   285,   290,   295,   300,   305,
     310,   319,   320,   321,   327,   333,   339,   346
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ID", "STRING_LITERAL",
  "NUMBER", "PROGRAM", "END", "IF", "THEN", "ENDIF", "ELSE", "WRITE",
  "ASSIGN", "SEMICOLON", "LPAREN", "RPAREN", "FUNCTION", "ENDFUNCTION",
  "DO", "ENDDO", "CALL", "FOR", "TO", "STEP", "ENDFOR", "RETURN", "COMMA",
  "PLUS", "MINUS", "MULT", "INTEGER", "REAL", "CHARACTER", "DOUBLECOLON",
  "LEN", "ASTERISK", "EQ", "GT", "LT", "GE", "LE", "NEQ", "COMMENT",
  "WHITESPACE", "$accept", "program", "statements", "statement",
  "variable_declaration", "id_list", "param_list", "opt_param_list",
  "param_call_list", "expr_list", "if_statement", "write_statement",
  "function_decl", "call_statement", "for_loop", "do_loop",
  "return_statement", "value", "expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-45)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      10,    16,    17,   -45,   -45,    61,    25,    35,     2,    15,
      42,    28,    62,    63,    86,    36,    37,    -7,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,    86,    74,
     -45,   -45,   232,    86,    64,    68,    99,   247,    33,    71,
      70,   -45,   247,    80,   100,   100,    -3,   100,    14,   -45,
     -45,     2,     2,     2,     2,     2,     2,    -6,    80,    34,
     -45,     2,   -45,   126,   -45,   119,     2,   123,    86,    86,
      86,   -45,    79,    79,    98,   120,    79,   -45,     3,   253,
     258,   258,   258,   258,   258,   122,    86,   -45,   -45,    24,
     153,    59,   -45,   127,    45,    80,   241,   -45,    47,   107,
     107,   -45,   137,   110,   144,   -45,   -45,   -45,    80,   -45,
     147,   -45,     2,   -45,   139,    86,     2,   -45,   -45,   100,
     135,   180,   -45,   247,   -45,    80,   247,    79,   121,   -45,
     207,   234,   100,   -45,   -45,    79
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     3,     1,     0,     0,     0,     0,     0,
       0,     3,     0,     0,     0,     0,     0,     0,    14,     4,
      12,     5,     6,     7,     9,    10,     8,    11,     0,     0,
      43,    44,     0,     0,     0,    43,     0,     3,     0,     0,
      43,    51,    52,    42,     0,     0,     0,     0,     0,     2,
       3,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       3,     0,    39,     0,    35,     0,     0,     0,     0,     0,
       0,    20,    15,    16,     0,     0,    19,    13,     0,    45,
      47,    48,    49,    50,    46,    32,     0,    22,    25,     0,
       0,     0,    40,     0,     0,    26,     0,    57,     0,    53,
      54,    55,     0,     0,     0,    30,     3,    33,    29,    24,
       0,    34,     0,    36,     0,     0,     0,    56,    21,     0,
       0,     0,    23,     3,    37,    27,     3,    18,     0,    31,
       0,     0,     0,    41,    38,    17
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -45,   -45,   -11,   -45,   -45,   -44,   -45,   -45,    87,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,     1,   -10
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     5,    19,    20,    72,    89,    60,    94,    57,
      21,    22,    23,    24,    25,    26,    27,    42,    95
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      36,    73,    74,    76,    43,    30,     6,    31,    46,    32,
      85,     8,    37,   105,   106,     9,     1,     4,    48,     3,
      10,    86,    11,    58,    12,    13,    63,    47,    77,    14,
      33,    35,    75,    31,    15,    16,    17,    87,    28,    78,
     109,    29,    68,    69,    70,    34,    18,    64,    65,    90,
      88,   110,    79,    80,    81,    82,    83,    84,    99,   100,
     101,   114,    91,   117,     6,    38,    39,    96,     7,     8,
      44,    45,   115,     9,   115,   127,   108,    49,    10,    59,
      11,    61,    12,    13,    66,    67,   112,    14,   135,    40,
      41,    31,    15,    16,    17,   121,    51,    52,    53,    54,
      55,    56,     6,    71,    18,   125,   102,     8,    68,    69,
      70,     9,   130,   123,   103,   131,    10,   126,    11,    62,
      12,    13,    40,    41,    31,    14,    40,    41,    31,     6,
      15,    16,    17,   104,     8,    93,   107,    70,     9,    97,
     118,   113,    18,    10,   119,    11,    92,    12,    13,   120,
     122,   128,    14,   124,    98,   132,     6,    15,    16,    17,
       0,     8,     0,     0,     0,     9,     0,     0,     0,    18,
      10,   111,    11,     0,    12,    13,     0,     0,     0,    14,
       0,     0,     0,     6,    15,    16,    17,     0,     8,     0,
     129,     0,     9,     0,     0,     0,    18,    10,     0,    11,
       0,    12,    13,     0,     0,     0,    14,     0,     0,     0,
       6,    15,    16,    17,     0,     8,     0,     0,     0,     9,
       0,     0,     0,    18,    10,     0,    11,   133,    12,    13,
       0,     0,     0,    14,     0,     0,     0,     6,    15,    16,
      17,    50,     8,     0,     0,     0,     9,     0,     0,     0,
      18,    10,     0,    11,     0,    12,    13,     0,     0,   134,
      14,     0,     0,     0,   116,    15,    16,    17,     0,    51,
      52,    53,    54,    55,    56,     0,     0,    18,    51,    52,
      53,    54,    55,    56,    51,    52,    53,    54,    55,    56,
      -1,    52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,
      -1
};

static const yytype_int16 yycheck[] =
{
      11,    45,     5,    47,    14,     3,     3,     5,    15,     8,
      16,     8,    11,    10,    11,    12,     6,     0,    28,     3,
      17,    27,    19,    33,    21,    22,    37,    34,    14,    26,
      15,     3,    35,     5,    31,    32,    33,     3,    13,    50,
      16,     6,    28,    29,    30,     3,    43,    14,    15,    60,
      16,    27,    51,    52,    53,    54,    55,    56,    68,    69,
      70,    16,    61,    16,     3,     3,     3,    66,     7,     8,
      34,    34,    27,    12,    27,   119,    86,     3,    17,    15,
      19,    13,    21,    22,    13,    15,    27,    26,   132,     3,
       4,     5,    31,    32,    33,   106,    37,    38,    39,    40,
      41,    42,     3,     3,    43,   115,    27,     8,    28,    29,
      30,    12,   123,   112,    16,   126,    17,   116,    19,    20,
      21,    22,     3,     4,     5,    26,     3,     4,     5,     3,
      31,    32,    33,    13,     8,    16,    14,    30,    12,    16,
       3,    14,    43,    17,    34,    19,    20,    21,    22,     5,
       3,    16,    26,    14,    67,    34,     3,    31,    32,    33,
      -1,     8,    -1,    -1,    -1,    12,    -1,    -1,    -1,    43,
      17,    18,    19,    -1,    21,    22,    -1,    -1,    -1,    26,
      -1,    -1,    -1,     3,    31,    32,    33,    -1,     8,    -1,
      10,    -1,    12,    -1,    -1,    -1,    43,    17,    -1,    19,
      -1,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,    -1,
       3,    31,    32,    33,    -1,     8,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    43,    17,    -1,    19,    20,    21,    22,
      -1,    -1,    -1,    26,    -1,    -1,    -1,     3,    31,    32,
      33,     9,     8,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      43,    17,    -1,    19,    -1,    21,    22,    -1,    -1,    25,
      26,    -1,    -1,    -1,    23,    31,    32,    33,    -1,    37,
      38,    39,    40,    41,    42,    -1,    -1,    43,    37,    38,
      39,    40,    41,    42,    37,    38,    39,    40,    41,    42,
      37,    38,    39,    40,    41,    42,    38,    39,    40,    41,
      42
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     6,    46,     3,     0,    47,     3,     7,     8,    12,
      17,    19,    21,    22,    26,    31,    32,    33,    43,    48,
      49,    55,    56,    57,    58,    59,    60,    61,    13,     6,
       3,     5,    62,    15,     3,     3,    47,    62,     3,     3,
       3,     4,    62,    63,    34,    34,    15,    34,    63,     3,
       9,    37,    38,    39,    40,    41,    42,    54,    63,    15,
      52,    13,    20,    47,    14,    15,    13,    15,    28,    29,
      30,     3,    50,    50,     5,    35,    50,    14,    47,    62,
      62,    62,    62,    62,    62,    16,    27,     3,    16,    51,
      47,    62,    20,    16,    53,    63,    62,    16,    53,    63,
      63,    63,    27,    16,    13,    10,    11,    14,    63,    16,
      27,    18,    27,    14,    16,    27,    23,    16,     3,    34,
       5,    47,     3,    62,    14,    63,    62,    50,    16,    10,
      47,    47,    34,    20,    25,    50
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    47,    47,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    49,    49,    49,    49,    49,
      50,    50,    51,    51,    52,    52,    53,    53,    54,    54,
      55,    55,    56,    56,    57,    58,    58,    58,    59,    60,
      60,    60,    61,    62,    62,    62,    62,    62,    62,    62,
      62,    63,    63,    63,    63,    63,    63,    63
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     6,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     3,     3,     8,     6,     3,
       1,     3,     1,     3,     3,     2,     1,     3,     1,     3,
       5,     7,     4,     5,     5,     3,     5,     6,     8,     3,
       4,     8,     2,     1,     1,     3,     3,     3,     3,     3,
       3,     1,     1,     3,     3,     3,     4,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: PROGRAM ID statements END PROGRAM ID  */
#line 56 "fortran.y"
    {
        string output = "def main():\n" + indent((yyvsp[-3].sval)) + 
                        "\n\nif __name__ == \"__main__\":\n    main()\n\n" +
                        "# PROGRAMA FUNCIONANDO... cls\n";
        cout << output;
    }
#line 1268 "fortran.tab.c"
    break;

  case 3: /* statements: %empty  */
#line 65 "fortran.y"
                                    { (yyval.sval) = strdup(""); }
#line 1274 "fortran.tab.c"
    break;

  case 4: /* statements: statements statement  */
#line 66 "fortran.y"
                                   {
        string combined = string((yyvsp[-1].sval)) + string((yyvsp[0].sval));
        free((yyvsp[-1].sval)); free((yyvsp[0].sval));
        (yyval.sval) = strdup(combined.c_str());
    }
#line 1284 "fortran.tab.c"
    break;

  case 13: /* statement: ID ASSIGN expression SEMICOLON  */
#line 83 "fortran.y"
      {
          string name = (yyvsp[-3].sval);
          string val = (yyvsp[-1].sval);
          free((yyvsp[-3].sval)); free((yyvsp[-1].sval));
          (yyval.sval) = strdup((name + " = " + val + "\n").c_str());
      }
#line 1295 "fortran.tab.c"
    break;

  case 14: /* statement: COMMENT  */
#line 90 "fortran.y"
    {
        string s = string((yyvsp[0].sval));
        free((yyvsp[0].sval));
        if (!s.empty() && s[0] == '!')
            s[0] = '#';
        else
            s = "# " + s;
        s += "\n";
        (yyval.sval) = strdup(s.c_str());
    }
#line 1310 "fortran.tab.c"
    break;

  case 15: /* variable_declaration: INTEGER DOUBLECOLON id_list  */
#line 103 "fortran.y"
                                          { (yyval.sval) = strdup((yyvsp[0].sval)); free((yyvsp[0].sval)); }
#line 1316 "fortran.tab.c"
    break;

  case 16: /* variable_declaration: REAL DOUBLECOLON id_list  */
#line 104 "fortran.y"
                                          { (yyval.sval) = strdup((yyvsp[0].sval)); free((yyvsp[0].sval)); }
#line 1322 "fortran.tab.c"
    break;

  case 17: /* variable_declaration: CHARACTER LPAREN LEN ASSIGN NUMBER RPAREN DOUBLECOLON id_list  */
#line 105 "fortran.y"
                                                                    { (yyval.sval) = strdup((yyvsp[0].sval)); free((yyvsp[0].sval)); }
#line 1328 "fortran.tab.c"
    break;

  case 18: /* variable_declaration: CHARACTER LPAREN NUMBER RPAREN DOUBLECOLON id_list  */
#line 106 "fortran.y"
                                                                    { (yyval.sval) = strdup((yyvsp[0].sval)); free((yyvsp[0].sval)); }
#line 1334 "fortran.tab.c"
    break;

  case 19: /* variable_declaration: CHARACTER DOUBLECOLON id_list  */
#line 107 "fortran.y"
                                          { (yyval.sval) = strdup((yyvsp[0].sval)); free((yyvsp[0].sval)); }
#line 1340 "fortran.tab.c"
    break;

  case 20: /* id_list: ID  */
#line 112 "fortran.y"
        {
            string s = string((yyvsp[0].sval)) + " = 0\n";
            free((yyvsp[0].sval));
            (yyval.sval) = strdup(s.c_str());
        }
#line 1350 "fortran.tab.c"
    break;

  case 21: /* id_list: id_list COMMA ID  */
#line 118 "fortran.y"
        {
            string s = string((yyvsp[-2].sval)) + string((yyvsp[0].sval)) + " = 0\n";
            free((yyvsp[-2].sval)); free((yyvsp[0].sval));
            (yyval.sval) = strdup(s.c_str());
        }
#line 1360 "fortran.tab.c"
    break;

  case 22: /* param_list: ID  */
#line 126 "fortran.y"
                           { (yyval.sval) = strdup((yyvsp[0].sval)); free((yyvsp[0].sval)); }
#line 1366 "fortran.tab.c"
    break;

  case 23: /* param_list: param_list COMMA ID  */
#line 127 "fortran.y"
                          {
        string res = string((yyvsp[-2].sval)) + ", " + (yyvsp[0].sval);
        free((yyvsp[-2].sval)); free((yyvsp[0].sval));
        (yyval.sval) = strdup(res.c_str());
    }
#line 1376 "fortran.tab.c"
    break;

  case 24: /* opt_param_list: LPAREN param_list RPAREN  */
#line 136 "fortran.y"
        {
            string p = (yyvsp[-1].sval);
            free((yyvsp[-1].sval));
            (yyval.sval) = strdup(p.c_str());
        }
#line 1386 "fortran.tab.c"
    break;

  case 25: /* opt_param_list: LPAREN RPAREN  */
#line 142 "fortran.y"
        {
            (yyval.sval) = strdup("");  // sin parámetros
        }
#line 1394 "fortran.tab.c"
    break;

  case 26: /* param_call_list: expression  */
#line 148 "fortran.y"
                                         { (yyval.sval) = strdup((yyvsp[0].sval)); free((yyvsp[0].sval)); }
#line 1400 "fortran.tab.c"
    break;

  case 27: /* param_call_list: param_call_list COMMA expression  */
#line 149 "fortran.y"
                                        {
        string res = string((yyvsp[-2].sval)) + ", " + (yyvsp[0].sval);
        free((yyvsp[-2].sval)); free((yyvsp[0].sval));
        (yyval.sval) = strdup(res.c_str());
    }
#line 1410 "fortran.tab.c"
    break;

  case 28: /* expr_list: expression  */
#line 158 "fortran.y"
        { (yyval.sval) = strdup((yyvsp[0].sval)); free((yyvsp[0].sval)); }
#line 1416 "fortran.tab.c"
    break;

  case 29: /* expr_list: expr_list COMMA expression  */
#line 160 "fortran.y"
        {
            string combined = string((yyvsp[-2].sval)) + ", " + (yyvsp[0].sval);
            free((yyvsp[-2].sval)); free((yyvsp[0].sval));
            (yyval.sval) = strdup(combined.c_str());
        }
#line 1426 "fortran.tab.c"
    break;

  case 30: /* if_statement: IF value THEN statements ENDIF  */
#line 169 "fortran.y"
    {
        string cond = (yyvsp[-3].sval);
        string body = indent((yyvsp[-1].sval));
        free((yyvsp[-3].sval)); free((yyvsp[-1].sval));
        (yyval.sval) = strdup(("if " + cond + ":\n" + body).c_str());
    }
#line 1437 "fortran.tab.c"
    break;

  case 31: /* if_statement: IF value THEN statements ELSE statements ENDIF  */
#line 176 "fortran.y"
    {
        string cond = (yyvsp[-5].sval);
        string then_body = indent((yyvsp[-3].sval));
        string else_body = indent((yyvsp[-1].sval));
        free((yyvsp[-5].sval)); free((yyvsp[-3].sval)); free((yyvsp[-1].sval));
        (yyval.sval) = strdup(("if " + cond + ":\n" + then_body + "else:\n" + else_body).c_str());
    }
#line 1449 "fortran.tab.c"
    break;

  case 32: /* write_statement: WRITE LPAREN expr_list RPAREN  */
#line 187 "fortran.y"
    {
        string s = (yyvsp[-1].sval);
        free((yyvsp[-1].sval));
        (yyval.sval) = strdup(("print(" + s + ")\n").c_str());
    }
#line 1459 "fortran.tab.c"
    break;

  case 33: /* write_statement: WRITE LPAREN expr_list RPAREN SEMICOLON  */
#line 193 "fortran.y"
    {
        string s = (yyvsp[-2].sval);
        free((yyvsp[-2].sval));
        (yyval.sval) = strdup(("print(" + s + ")\n").c_str());
    }
#line 1469 "fortran.tab.c"
    break;

  case 34: /* function_decl: FUNCTION ID opt_param_list statements ENDFUNCTION  */
#line 202 "fortran.y"
    {
        string fname = (yyvsp[-3].sval);
        string params = (yyvsp[-2].sval);
        string body = indent((yyvsp[-1].sval));
        free((yyvsp[-3].sval)); free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
        (yyval.sval) = strdup(("def " + fname + "(" + params + "):\n" + body + "\n").c_str());
    }
#line 1481 "fortran.tab.c"
    break;

  case 35: /* call_statement: CALL ID SEMICOLON  */
#line 213 "fortran.y"
    {
        string fname = (yyvsp[-1].sval);
        free((yyvsp[-1].sval));
        (yyval.sval) = strdup((fname + "()\n").c_str());
    }
#line 1491 "fortran.tab.c"
    break;

  case 36: /* call_statement: CALL ID LPAREN RPAREN SEMICOLON  */
#line 219 "fortran.y"
    {
        string fname = (yyvsp[-3].sval);
        free((yyvsp[-3].sval));
        (yyval.sval) = strdup((fname + "()\n").c_str());
    }
#line 1501 "fortran.tab.c"
    break;

  case 37: /* call_statement: CALL ID LPAREN param_call_list RPAREN SEMICOLON  */
#line 225 "fortran.y"
    {
        string fname = (yyvsp[-4].sval);
        string args = (yyvsp[-2].sval);
        free((yyvsp[-4].sval)); free((yyvsp[-2].sval));
        (yyval.sval) = strdup((fname + "(" + args + ")\n").c_str());
    }
#line 1512 "fortran.tab.c"
    break;

  case 38: /* for_loop: FOR ID ASSIGN value TO value statements ENDFOR  */
#line 236 "fortran.y"
    {
        string var = (yyvsp[-6].sval);
        string start = (yyvsp[-4].sval);
        string end = (yyvsp[-2].sval);
        string body = indent((yyvsp[-1].sval));
        free((yyvsp[-6].sval)); free((yyvsp[-4].sval)); free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
        (yyval.sval) = strdup(("for " + var + " in range(" + start + ", " + end + " + 1):\n" + body).c_str());
    }
#line 1525 "fortran.tab.c"
    break;

  case 39: /* do_loop: DO statements ENDDO  */
#line 248 "fortran.y"
    {
        string body = indent((yyvsp[-1].sval));
        free((yyvsp[-1].sval));
        (yyval.sval) = strdup(("while True:\n" + body).c_str());
    }
#line 1535 "fortran.tab.c"
    break;

  case 40: /* do_loop: DO value statements ENDDO  */
#line 254 "fortran.y"
    {
        string cond = (yyvsp[-2].sval);
        string body = indent((yyvsp[-1].sval));
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
        (yyval.sval) = strdup(("while " + cond + ":\n" + body).c_str());
    }
#line 1546 "fortran.tab.c"
    break;

  case 41: /* do_loop: DO ID ASSIGN value COMMA value statements ENDDO  */
#line 261 "fortran.y"
    {
        string var = (yyvsp[-6].sval);
        string start = (yyvsp[-4].sval);
        string end = (yyvsp[-2].sval);
        string body = indent((yyvsp[-1].sval));
        free((yyvsp[-6].sval)); free((yyvsp[-4].sval)); free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
        (yyval.sval) = strdup(("for " + var + " in range(" + start + ", " + end + " + 1):\n" + body).c_str());
    }
#line 1559 "fortran.tab.c"
    break;

  case 42: /* return_statement: RETURN expression  */
#line 275 "fortran.y"
    {
        string val = (yyvsp[0].sval);
        free((yyvsp[0].sval));
        (yyval.sval) = strdup(("return " + val + "\n").c_str());
    }
#line 1569 "fortran.tab.c"
    break;

  case 43: /* value: ID  */
#line 283 "fortran.y"
                    { (yyval.sval) = strdup((yyvsp[0].sval)); free((yyvsp[0].sval)); }
#line 1575 "fortran.tab.c"
    break;

  case 44: /* value: NUMBER  */
#line 284 "fortran.y"
                    { (yyval.sval) = strdup((yyvsp[0].sval)); free((yyvsp[0].sval)); }
#line 1581 "fortran.tab.c"
    break;

  case 45: /* value: value EQ value  */
#line 285 "fortran.y"
                    {
        string res = string((yyvsp[-2].sval)) + " == " + string((yyvsp[0].sval));
        free((yyvsp[-2].sval)); free((yyvsp[0].sval));
        (yyval.sval) = strdup(res.c_str());
    }
#line 1591 "fortran.tab.c"
    break;

  case 46: /* value: value NEQ value  */
#line 290 "fortran.y"
                    {
        string res = string((yyvsp[-2].sval)) + " != " + string((yyvsp[0].sval));
        free((yyvsp[-2].sval)); free((yyvsp[0].sval));
        (yyval.sval) = strdup(res.c_str());
    }
#line 1601 "fortran.tab.c"
    break;

  case 47: /* value: value GT value  */
#line 295 "fortran.y"
                   {
        string res = string((yyvsp[-2].sval)) + " > " + string((yyvsp[0].sval));
        free((yyvsp[-2].sval)); free((yyvsp[0].sval));
        (yyval.sval) = strdup(res.c_str());
    }
#line 1611 "fortran.tab.c"
    break;

  case 48: /* value: value LT value  */
#line 300 "fortran.y"
                   {
        string res = string((yyvsp[-2].sval)) + " < " + string((yyvsp[0].sval));
        free((yyvsp[-2].sval)); free((yyvsp[0].sval));
        (yyval.sval) = strdup(res.c_str());
    }
#line 1621 "fortran.tab.c"
    break;

  case 49: /* value: value GE value  */
#line 305 "fortran.y"
                   {
        string res = string((yyvsp[-2].sval)) + " >= " + string((yyvsp[0].sval));
        free((yyvsp[-2].sval)); free((yyvsp[0].sval));
        (yyval.sval) = strdup(res.c_str());
    }
#line 1631 "fortran.tab.c"
    break;

  case 50: /* value: value LE value  */
#line 310 "fortran.y"
                   {
        string res = string((yyvsp[-2].sval)) + " <= " + string((yyvsp[0].sval));
        free((yyvsp[-2].sval)); free((yyvsp[0].sval));
        (yyval.sval) = strdup(res.c_str());
    }
#line 1641 "fortran.tab.c"
    break;

  case 51: /* expression: STRING_LITERAL  */
#line 319 "fortran.y"
                         { (yyval.sval) = strdup((yyvsp[0].sval)); free((yyvsp[0].sval)); }
#line 1647 "fortran.tab.c"
    break;

  case 52: /* expression: value  */
#line 320 "fortran.y"
                         { (yyval.sval) = strdup((yyvsp[0].sval)); free((yyvsp[0].sval)); }
#line 1653 "fortran.tab.c"
    break;

  case 53: /* expression: expression PLUS expression  */
#line 322 "fortran.y"
        {
            string res = string((yyvsp[-2].sval)) + " + " + string((yyvsp[0].sval));
            free((yyvsp[-2].sval)); free((yyvsp[0].sval));
            (yyval.sval) = strdup(res.c_str());
        }
#line 1663 "fortran.tab.c"
    break;

  case 54: /* expression: expression MINUS expression  */
#line 328 "fortran.y"
        {
            string res = string((yyvsp[-2].sval)) + " - " + string((yyvsp[0].sval));
            free((yyvsp[-2].sval)); free((yyvsp[0].sval));
            (yyval.sval) = strdup(res.c_str());
        }
#line 1673 "fortran.tab.c"
    break;

  case 55: /* expression: expression MULT expression  */
#line 334 "fortran.y"
        {
            string res = string((yyvsp[-2].sval)) + " * " + string((yyvsp[0].sval));
            free((yyvsp[-2].sval)); free((yyvsp[0].sval));
            (yyval.sval) = strdup(res.c_str());
        }
#line 1683 "fortran.tab.c"
    break;

  case 56: /* expression: ID LPAREN param_call_list RPAREN  */
#line 340 "fortran.y"
        {
            string fname = (yyvsp[-3].sval);
            string args = (yyvsp[-1].sval);
            free((yyvsp[-3].sval)); free((yyvsp[-1].sval));
            (yyval.sval) = strdup((fname + "(" + args + ")").c_str());
        }
#line 1694 "fortran.tab.c"
    break;

  case 57: /* expression: ID LPAREN RPAREN  */
#line 347 "fortran.y"
        {
            string fname = (yyvsp[-2].sval);
            free((yyvsp[-2].sval));
            (yyval.sval) = strdup((fname + "()").c_str());
        }
#line 1704 "fortran.tab.c"
    break;


#line 1708 "fortran.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 354 "fortran.y"


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
