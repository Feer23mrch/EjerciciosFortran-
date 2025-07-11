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

string last_prompt = "";
bool pending_prompt = false;


#line 102 "fortran.tab.c"

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
  YYSYMBOL_READ = 22,                      /* READ  */
  YYSYMBOL_FOR = 23,                       /* FOR  */
  YYSYMBOL_TO = 24,                        /* TO  */
  YYSYMBOL_STEP = 25,                      /* STEP  */
  YYSYMBOL_ENDFOR = 26,                    /* ENDFOR  */
  YYSYMBOL_RETURN = 27,                    /* RETURN  */
  YYSYMBOL_COMMA = 28,                     /* COMMA  */
  YYSYMBOL_PLUS = 29,                      /* PLUS  */
  YYSYMBOL_MINUS = 30,                     /* MINUS  */
  YYSYMBOL_MULT = 31,                      /* MULT  */
  YYSYMBOL_INTEGER = 32,                   /* INTEGER  */
  YYSYMBOL_REAL = 33,                      /* REAL  */
  YYSYMBOL_CHARACTER = 34,                 /* CHARACTER  */
  YYSYMBOL_DOUBLECOLON = 35,               /* DOUBLECOLON  */
  YYSYMBOL_LEN = 36,                       /* LEN  */
  YYSYMBOL_ASTERISK = 37,                  /* ASTERISK  */
  YYSYMBOL_EQ = 38,                        /* EQ  */
  YYSYMBOL_GT = 39,                        /* GT  */
  YYSYMBOL_LT = 40,                        /* LT  */
  YYSYMBOL_GE = 41,                        /* GE  */
  YYSYMBOL_LE = 42,                        /* LE  */
  YYSYMBOL_NEQ = 43,                       /* NEQ  */
  YYSYMBOL_COMMENT = 44,                   /* COMMENT  */
  YYSYMBOL_WHITESPACE = 45,                /* WHITESPACE  */
  YYSYMBOL_DIV = 46,                       /* DIV  */
  YYSYMBOL_POW = 47,                       /* POW  */
  YYSYMBOL_YYACCEPT = 48,                  /* $accept  */
  YYSYMBOL_program = 49,                   /* program  */
  YYSYMBOL_statements = 50,                /* statements  */
  YYSYMBOL_statement = 51,                 /* statement  */
  YYSYMBOL_raw_block = 52,                 /* raw_block  */
  YYSYMBOL_variable_declaration = 53,      /* variable_declaration  */
  YYSYMBOL_id_list = 54,                   /* id_list  */
  YYSYMBOL_param_list = 55,                /* param_list  */
  YYSYMBOL_opt_param_list = 56,            /* opt_param_list  */
  YYSYMBOL_param_call_list = 57,           /* param_call_list  */
  YYSYMBOL_expr_list = 58,                 /* expr_list  */
  YYSYMBOL_if_statement = 59,              /* if_statement  */
  YYSYMBOL_write_statement = 60,           /* write_statement  */
  YYSYMBOL_function_decl = 61,             /* function_decl  */
  YYSYMBOL_call_statement = 62,            /* call_statement  */
  YYSYMBOL_for_loop = 63,                  /* for_loop  */
  YYSYMBOL_do_loop = 64,                   /* do_loop  */
  YYSYMBOL_return_statement = 65,          /* return_statement  */
  YYSYMBOL_expression = 66                 /* expression  */
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
#define YYLAST   462

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  160

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   302


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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    63,    63,    81,    82,    92,   105,   109,   121,   133,
     145,   157,   169,   181,   194,   211,   236,   245,   253,   261,
     271,   272,   273,   274,   275,   279,   281,   286,   287,   295,
     301,   308,   309,   317,   319,   328,   335,   346,   360,   373,
     389,   400,   406,   412,   422,   434,   440,   447,   456,   465,
     474,   475,   476,   478,   483,   488,   493,   498,   503,   509,
     514,   519,   524,   529,   535,   541,   547
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
  "DO", "ENDDO", "CALL", "READ", "FOR", "TO", "STEP", "ENDFOR", "RETURN",
  "COMMA", "PLUS", "MINUS", "MULT", "INTEGER", "REAL", "CHARACTER",
  "DOUBLECOLON", "LEN", "ASTERISK", "EQ", "GT", "LT", "GE", "LE", "NEQ",
  "COMMENT", "WHITESPACE", "DIV", "POW", "$accept", "program",
  "statements", "statement", "raw_block", "variable_declaration",
  "id_list", "param_list", "opt_param_list", "param_call_list",
  "expr_list", "if_statement", "write_statement", "function_decl",
  "call_statement", "for_loop", "do_loop", "return_statement",
  "expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-46)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       1,    12,    21,   -46,   -46,   119,    32,    42,    92,    47,
      60,    13,    64,    63,    79,    92,    78,    82,     5,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,    92,
      90,   103,   -46,   -46,    92,   296,   100,   104,    -2,   147,
      27,   -46,   392,    97,    77,   107,   392,   120,   120,     7,
     120,   315,   -46,    68,   353,   -46,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,   108,   -14,   392,
       3,   -46,    92,   -46,   115,   -46,   -46,   175,   -46,    83,
     101,    92,   -46,   106,   106,   116,   122,   106,   -46,   -46,
      48,   392,   -46,    58,   405,   405,   415,   347,   366,   366,
     366,   366,   366,   415,   415,   -46,   125,    92,   -46,   -46,
      73,   203,    -5,    92,   -46,   129,    93,   113,   373,   142,
     112,   143,   -46,    92,   -46,   -46,   -46,   392,   -46,   146,
     -46,   -46,    92,   334,   -46,   140,   141,    92,   -46,   120,
     144,   392,   231,   -46,   392,   -46,   -46,   153,   392,   106,
     123,   -46,   259,   148,   287,   120,   -46,   -46,   -46,   106
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     3,     1,     0,     0,     0,     0,     0,
       0,     3,     0,     0,     0,     0,     0,     0,     0,    14,
       4,    12,     5,     6,     7,     9,    10,     8,    11,     0,
       0,    51,    50,    52,     0,     0,     0,     0,    51,     0,
       0,    19,     3,     0,     0,     0,    49,     0,     0,     0,
       0,     0,     2,     0,     0,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,     0,    33,
       0,     3,     0,    45,     0,    48,    17,     0,    41,     0,
       0,     0,    25,    20,    21,     0,     0,    24,    13,    65,
       0,    31,    66,     0,    59,    60,    61,    53,    55,    56,
      57,    58,    54,    62,    63,    37,    38,     0,    27,    30,
       0,     0,     0,     0,    46,     0,     0,     0,     0,     0,
       0,     0,    64,     0,    35,     3,    39,    34,    29,     0,
      40,    18,     0,     0,    42,     0,     0,     0,    26,     0,
       0,    32,     0,    28,     3,    16,    43,     0,     3,    23,
       0,    36,     0,     0,     0,     0,    47,    15,    44,    22
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -46,   -46,   -11,   -46,   -46,   -46,   -45,   -46,   -46,    86,
     -46,   -46,   -46,   -46,   -46,   -46,    -1,   -46,    -7
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     5,    20,    40,    21,    83,   110,    71,    90,
      68,    22,    23,    24,    25,    26,    27,    28,    91
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      39,    35,   106,    84,    42,    87,   108,     1,    46,   131,
      41,    72,    85,    53,   107,     3,    38,    32,    33,   109,
      49,     4,    51,   132,    56,    57,    58,    54,    34,    69,
      74,    77,    11,    59,    60,    61,    62,    63,    64,    76,
      50,    65,    66,    86,    93,    29,    11,    75,    30,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     111,     6,    36,    37,   122,   112,     8,    43,   124,   125,
       9,    31,    32,    33,   118,    10,   123,    11,    44,    12,
      13,    14,    45,    34,    89,    15,    31,    32,    33,   128,
      16,    17,    18,    52,   149,    31,    32,    33,    34,   115,
     127,   129,    19,    31,    67,    33,   133,    34,    80,   135,
     159,    78,    79,    47,   142,    34,   141,    48,    53,    70,
      81,   123,     6,    82,   105,   144,     7,     8,   113,   117,
     148,     9,   120,   152,   119,   121,    10,   154,    11,   126,
      12,    13,    14,   134,   136,   138,    15,   139,   140,   143,
       6,    16,    17,    18,   146,     8,   153,   147,   155,     9,
     150,     0,   157,    19,    10,   116,    11,    73,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,     6,    16,
      17,    18,     0,     8,     0,     0,     0,     9,     0,     0,
       0,    19,    10,     0,    11,   114,    12,    13,    14,     0,
       0,     0,    15,     0,     0,     0,     6,    16,    17,    18,
       0,     8,     0,     0,     0,     9,     0,     0,     0,    19,
      10,   130,    11,     0,    12,    13,    14,     0,     0,     0,
      15,     0,     0,     0,     6,    16,    17,    18,     0,     8,
       0,   151,     0,     9,     0,     0,     0,    19,    10,     0,
      11,     0,    12,    13,    14,     0,     0,     0,    15,     0,
       0,     0,     6,    16,    17,    18,     0,     8,     0,     0,
       0,     9,     0,     0,     0,    19,    10,     0,    11,   156,
      12,    13,    14,     0,     0,     0,    15,     0,     0,     0,
       6,    16,    17,    18,     0,     8,     0,     0,     0,     9,
       0,     0,     0,    19,    10,    55,    11,     0,    12,    13,
      14,     0,     0,   158,    15,     0,     0,     0,     0,    16,
      17,    18,     0,     0,     0,    56,    57,    58,     0,    88,
       0,    19,     0,     0,    59,    60,    61,    62,    63,    64,
       0,     0,    65,    66,    56,    57,    58,     0,   145,     0,
       0,     0,     0,    59,    60,    61,    62,    63,    64,     0,
       0,    65,    66,    56,    57,    58,     0,     0,     0,    92,
       0,     0,    59,    60,    61,    62,    63,    64,     0,     0,
      65,    66,    56,    57,    58,    -1,    60,    61,    62,    63,
      64,    59,    60,    61,    62,    63,    64,   137,     0,    65,
      66,     0,    56,    57,    58,    -1,    -1,    -1,    -1,    -1,
       0,    59,    60,    61,    62,    63,    64,     0,     0,    65,
      66,    56,    57,    58,     0,     0,     0,     0,     0,     0,
      59,    60,    61,    62,    63,    64,    58,     0,    65,    66,
       0,     0,     0,    59,    60,    61,    62,    63,    64,     0,
       0,    65,    66,    59,    60,    61,    62,    63,    64,     0,
       0,     0,    66
};

static const yytype_int16 yycheck[] =
{
      11,     8,    16,    48,    11,    50,     3,     6,    15,    14,
      11,    13,     5,    15,    28,     3,     3,     4,     5,    16,
      15,     0,    29,    28,    29,    30,    31,    34,    15,    36,
       3,    42,    19,    38,    39,    40,    41,    42,    43,    40,
      35,    46,    47,    36,    55,    13,    19,    20,     6,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      71,     3,    15,     3,    16,    72,     8,     3,    10,    11,
      12,     3,     4,     5,    81,    17,    28,    19,    15,    21,
      22,    23,     3,    15,    16,    27,     3,     4,     5,    16,
      32,    33,    34,     3,   139,     3,     4,     5,    15,    16,
     107,    28,    44,     3,     4,     5,   113,    15,    31,    16,
     155,    14,    15,    35,   125,    15,   123,    35,    15,    15,
      13,    28,     3,     3,    16,   132,     7,     8,    13,    28,
     137,    12,    16,   144,    28,    13,    17,   148,    19,    14,
      21,    22,    23,    14,    31,     3,    27,    35,     5,     3,
       3,    32,    33,    34,    14,     8,     3,    16,    35,    12,
      16,    -1,    14,    44,    17,    79,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    27,    -1,    -1,    -1,     3,    32,
      33,    34,    -1,     8,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    44,    17,    -1,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    27,    -1,    -1,    -1,     3,    32,    33,    34,
      -1,     8,    -1,    -1,    -1,    12,    -1,    -1,    -1,    44,
      17,    18,    19,    -1,    21,    22,    23,    -1,    -1,    -1,
      27,    -1,    -1,    -1,     3,    32,    33,    34,    -1,     8,
      -1,    10,    -1,    12,    -1,    -1,    -1,    44,    17,    -1,
      19,    -1,    21,    22,    23,    -1,    -1,    -1,    27,    -1,
      -1,    -1,     3,    32,    33,    34,    -1,     8,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    44,    17,    -1,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    27,    -1,    -1,    -1,
       3,    32,    33,    34,    -1,     8,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    44,    17,     9,    19,    -1,    21,    22,
      23,    -1,    -1,    26,    27,    -1,    -1,    -1,    -1,    32,
      33,    34,    -1,    -1,    -1,    29,    30,    31,    -1,    14,
      -1,    44,    -1,    -1,    38,    39,    40,    41,    42,    43,
      -1,    -1,    46,    47,    29,    30,    31,    -1,    14,    -1,
      -1,    -1,    -1,    38,    39,    40,    41,    42,    43,    -1,
      -1,    46,    47,    29,    30,    31,    -1,    -1,    -1,    16,
      -1,    -1,    38,    39,    40,    41,    42,    43,    -1,    -1,
      46,    47,    29,    30,    31,    38,    39,    40,    41,    42,
      43,    38,    39,    40,    41,    42,    43,    24,    -1,    46,
      47,    -1,    29,    30,    31,    39,    40,    41,    42,    43,
      -1,    38,    39,    40,    41,    42,    43,    -1,    -1,    46,
      47,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    40,    41,    42,    43,    31,    -1,    46,    47,
      -1,    -1,    -1,    38,    39,    40,    41,    42,    43,    -1,
      -1,    46,    47,    38,    39,    40,    41,    42,    43,    -1,
      -1,    -1,    47
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     6,    49,     3,     0,    50,     3,     7,     8,    12,
      17,    19,    21,    22,    23,    27,    32,    33,    34,    44,
      51,    53,    59,    60,    61,    62,    63,    64,    65,    13,
       6,     3,     4,     5,    15,    66,    15,     3,     3,    50,
      52,    64,    66,     3,    15,     3,    66,    35,    35,    15,
      35,    66,     3,    15,    66,     9,    29,    30,    31,    38,
      39,    40,    41,    42,    43,    46,    47,     4,    58,    66,
      15,    56,    13,    20,     3,    20,    64,    50,    14,    15,
      31,    13,     3,    54,    54,     5,    36,    54,    14,    16,
      57,    66,    16,    50,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    16,    16,    28,     3,    16,
      55,    50,    66,    13,    20,    16,    57,    28,    66,    28,
      16,    13,    16,    28,    10,    11,    14,    66,    16,    28,
      18,    14,    28,    66,    14,    16,    31,    24,     3,    35,
       5,    66,    50,     3,    66,    14,    14,    16,    66,    54,
      16,    10,    50,     3,    50,    35,    20,    14,    26,    54
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    49,    50,    50,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    52,    52,    52,    52,
      53,    53,    53,    53,    53,    54,    54,    55,    55,    56,
      56,    57,    57,    58,    58,    59,    59,    60,    60,    60,
      61,    62,    62,    62,    63,    64,    64,    64,    64,    65,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     6,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     8,     5,     2,     4,     1,
       3,     3,     8,     6,     3,     1,     3,     1,     3,     3,
       2,     1,     3,     1,     3,     5,     7,     4,     4,     5,
       5,     3,     5,     6,     8,     3,     4,     8,     3,     2,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     4,     3,     3
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
#line 64 "fortran.y"
    {
        string body = string((yyvsp[-3].sval));

        if (pending_prompt && !last_prompt.empty()) {
            body += "print(" + last_prompt + ")\n";
            last_prompt = "";
            pending_prompt = false;
        }

        string output = "def main():\n" + indent(body) + 
                        "\n\nif __name__ == \"__main__\":\n    main()\n\n" +
                        "# PROGRAMA FUNCIONANDO... cls\n";
        cout << output;
    }
#line 1326 "fortran.tab.c"
    break;

  case 3: /* statements: %empty  */
#line 81 "fortran.y"
    { (yyval.sval) = strdup(""); }
#line 1332 "fortran.tab.c"
    break;

  case 4: /* statements: statements statement  */
#line 82 "fortran.y"
                           {
        string before = string((yyvsp[-1].sval));
        string current = string((yyvsp[0].sval));
        string combined = before + current;
        free((yyvsp[-1].sval)); free((yyvsp[0].sval));
        (yyval.sval) = strdup(combined.c_str());
    }
#line 1344 "fortran.tab.c"
    break;

  case 5: /* statement: if_statement  */
#line 93 "fortran.y"
      {
          string code = (yyvsp[0].sval);

                string indent_print = indent("print(" + last_prompt + ")\n");
              
              last_prompt = "";
              pending_prompt = false;
          

          free((yyvsp[0].sval));
          (yyval.sval) = strdup(code.c_str());
      }
#line 1361 "fortran.tab.c"
    break;

  case 6: /* statement: write_statement  */
#line 106 "fortran.y"
      {
          (yyval.sval) = (yyvsp[0].sval); 
      }
#line 1369 "fortran.tab.c"
    break;

  case 7: /* statement: function_decl  */
#line 110 "fortran.y"
      {
          string extra = "";
          if (pending_prompt && !last_prompt.empty()) {
              extra = "print(" + last_prompt + ")\n";
              last_prompt = "";
              pending_prompt = false;
          }
          string code = extra + (yyvsp[0].sval);
          free((yyvsp[0].sval));
          (yyval.sval) = strdup(code.c_str());
      }
#line 1385 "fortran.tab.c"
    break;

  case 8: /* statement: do_loop  */
#line 122 "fortran.y"
      {
          string extra = "";
          if (pending_prompt && !last_prompt.empty()) {
              extra = "print(" + last_prompt + ")\n";
              last_prompt = "";
              pending_prompt = false;
          }
          string code = extra + (yyvsp[0].sval);
          free((yyvsp[0].sval));
          (yyval.sval) = strdup(code.c_str());
      }
#line 1401 "fortran.tab.c"
    break;

  case 9: /* statement: call_statement  */
#line 134 "fortran.y"
      {
          string extra = "";
          if (pending_prompt && !last_prompt.empty()) {
              extra = "print(" + last_prompt + ")\n";
              last_prompt = "";
              pending_prompt = false;
          }
          string code = extra + (yyvsp[0].sval);
          free((yyvsp[0].sval));
          (yyval.sval) = strdup(code.c_str());
      }
#line 1417 "fortran.tab.c"
    break;

  case 10: /* statement: for_loop  */
#line 146 "fortran.y"
      {
          string extra = "";
          if (pending_prompt && !last_prompt.empty()) {
              extra = "print(" + last_prompt + ")\n";
              last_prompt = "";
              pending_prompt = false;
          }
          string code = extra + (yyvsp[0].sval);
          free((yyvsp[0].sval));
          (yyval.sval) = strdup(code.c_str());
      }
#line 1433 "fortran.tab.c"
    break;

  case 11: /* statement: return_statement  */
#line 158 "fortran.y"
      {
          string extra = "";
          if (pending_prompt && !last_prompt.empty()) {
              extra = "print(" + last_prompt + ")\n";
              last_prompt = "";
              pending_prompt = false;
          }
          string code = extra + (yyvsp[0].sval);
          free((yyvsp[0].sval));
          (yyval.sval) = strdup(code.c_str());
      }
#line 1449 "fortran.tab.c"
    break;

  case 12: /* statement: variable_declaration  */
#line 170 "fortran.y"
      {
          string extra = "";
          if (pending_prompt && !last_prompt.empty()) {
              extra = "print(" + last_prompt + ")\n";
              last_prompt = "";
              pending_prompt = false;
          }
          string code = extra + (yyvsp[0].sval);
          free((yyvsp[0].sval));
          (yyval.sval) = strdup(code.c_str());
      }
#line 1465 "fortran.tab.c"
    break;

  case 13: /* statement: ID ASSIGN expression SEMICOLON  */
#line 182 "fortran.y"
      {
          string extra = "";
          if (pending_prompt && !last_prompt.empty()) {
              extra = "print(" + last_prompt + ")\n";
              last_prompt = "";
              pending_prompt = false;
          }
          string name = (yyvsp[-3].sval);
          string val = (yyvsp[-1].sval);
          free((yyvsp[-3].sval)); free((yyvsp[-1].sval));
          (yyval.sval) = strdup((extra + name + " = " + val + "\n").c_str());
      }
#line 1482 "fortran.tab.c"
    break;

  case 14: /* statement: COMMENT  */
#line 195 "fortran.y"
    {
        string extra = "";
        if (pending_prompt && !last_prompt.empty()) {
            extra = "print(" + last_prompt + ")\n";
            last_prompt = "";
            pending_prompt = false;
        }
        string s = string((yyvsp[0].sval));
        free((yyvsp[0].sval));
        if (!s.empty() && s[0] == '!')
            s[0] = '#';
        else
            s = "# " + s;
        s += "\n";
        (yyval.sval) = strdup((extra + s).c_str());
    }
#line 1503 "fortran.tab.c"
    break;

  case 15: /* statement: READ LPAREN MULT COMMA MULT RPAREN ID SEMICOLON  */
#line 212 "fortran.y"
    {
        string var = (yyvsp[-1].sval);
        string prompt_text;
        
        if (pending_prompt && !last_prompt.empty()) {
           
            prompt_text = last_prompt;
         
            if (prompt_text.front() == '"' && prompt_text.back() == '"') {
                prompt_text = prompt_text.substr(1, prompt_text.length() - 2);
            }
            last_prompt = "";
            pending_prompt = false;
        } else {

            prompt_text = "Ingrese " + var;
        }
        
        free((yyvsp[-1].sval));
        (yyval.sval) = strdup((var + " = int(input(\"" + prompt_text + ":\"))\n").c_str());
    }
#line 1529 "fortran.tab.c"
    break;

  case 16: /* raw_block: raw_block ID ASSIGN expression SEMICOLON  */
#line 237 "fortran.y"
    {
        string prev = (yyvsp[-4].sval);
        string name = (yyvsp[-3].sval);
        string val = (yyvsp[-1].sval);
        string res = prev + "    " + name + " = " + val + "\n";
        free((yyvsp[-4].sval)); free((yyvsp[-3].sval)); free((yyvsp[-1].sval));
        (yyval.sval) = strdup(res.c_str());
    }
#line 1542 "fortran.tab.c"
    break;

  case 17: /* raw_block: raw_block do_loop  */
#line 246 "fortran.y"
    {
        string prev = (yyvsp[-1].sval);
        string loop = (yyvsp[0].sval);
        string res = prev + indent(loop);
        free((yyvsp[-1].sval)); free((yyvsp[0].sval));
        (yyval.sval) = strdup(res.c_str());
    }
#line 1554 "fortran.tab.c"
    break;

  case 18: /* raw_block: ID ASSIGN expression SEMICOLON  */
#line 254 "fortran.y"
    {
        string name = (yyvsp[-3].sval);
        string val = (yyvsp[-1].sval);
        string res = "    " + name + " = " + val + "\n";
        free((yyvsp[-3].sval)); free((yyvsp[-1].sval));
        (yyval.sval) = strdup(res.c_str());
    }
#line 1566 "fortran.tab.c"
    break;

  case 19: /* raw_block: do_loop  */
#line 262 "fortran.y"
    {
        string loop = (yyvsp[0].sval);
        string res = indent(loop);
        free((yyvsp[0].sval));
        (yyval.sval) = strdup(res.c_str());
    }
#line 1577 "fortran.tab.c"
    break;

  case 20: /* variable_declaration: INTEGER DOUBLECOLON id_list  */
#line 271 "fortran.y"
                                          { (yyval.sval) = strdup((yyvsp[0].sval)); free((yyvsp[0].sval)); }
#line 1583 "fortran.tab.c"
    break;

  case 21: /* variable_declaration: REAL DOUBLECOLON id_list  */
#line 272 "fortran.y"
                                          { (yyval.sval) = strdup((yyvsp[0].sval)); free((yyvsp[0].sval)); }
#line 1589 "fortran.tab.c"
    break;

  case 22: /* variable_declaration: CHARACTER LPAREN LEN ASSIGN NUMBER RPAREN DOUBLECOLON id_list  */
#line 273 "fortran.y"
                                                                    { (yyval.sval) = strdup((yyvsp[0].sval)); free((yyvsp[0].sval)); }
#line 1595 "fortran.tab.c"
    break;

  case 23: /* variable_declaration: CHARACTER LPAREN NUMBER RPAREN DOUBLECOLON id_list  */
#line 274 "fortran.y"
                                                                    { (yyval.sval) = strdup((yyvsp[0].sval)); free((yyvsp[0].sval)); }
#line 1601 "fortran.tab.c"
    break;

  case 24: /* variable_declaration: CHARACTER DOUBLECOLON id_list  */
#line 275 "fortran.y"
                                          { (yyval.sval) = strdup((yyvsp[0].sval)); free((yyvsp[0].sval)); }
#line 1607 "fortran.tab.c"
    break;

  case 25: /* id_list: ID  */
#line 280 "fortran.y"
        { free((yyvsp[0].sval)); (yyval.sval) = strdup(""); }
#line 1613 "fortran.tab.c"
    break;

  case 26: /* id_list: id_list COMMA ID  */
#line 282 "fortran.y"
        { free((yyvsp[-2].sval)); free((yyvsp[0].sval)); (yyval.sval) = strdup(""); }
#line 1619 "fortran.tab.c"
    break;

  case 27: /* param_list: ID  */
#line 286 "fortran.y"
                           { (yyval.sval) = strdup((yyvsp[0].sval)); free((yyvsp[0].sval)); }
#line 1625 "fortran.tab.c"
    break;

  case 28: /* param_list: param_list COMMA ID  */
#line 287 "fortran.y"
                          {
        string res = string((yyvsp[-2].sval)) + ", " + (yyvsp[0].sval);
        free((yyvsp[-2].sval)); free((yyvsp[0].sval));
        (yyval.sval) = strdup(res.c_str());
    }
#line 1635 "fortran.tab.c"
    break;

  case 29: /* opt_param_list: LPAREN param_list RPAREN  */
#line 296 "fortran.y"
        {
            string p = (yyvsp[-1].sval);
            free((yyvsp[-1].sval));
            (yyval.sval) = strdup(p.c_str());
        }
#line 1645 "fortran.tab.c"
    break;

  case 30: /* opt_param_list: LPAREN RPAREN  */
#line 302 "fortran.y"
        {
            (yyval.sval) = strdup("");
        }
#line 1653 "fortran.tab.c"
    break;

  case 31: /* param_call_list: expression  */
#line 308 "fortran.y"
                                         { (yyval.sval) = strdup((yyvsp[0].sval)); free((yyvsp[0].sval)); }
#line 1659 "fortran.tab.c"
    break;

  case 32: /* param_call_list: param_call_list COMMA expression  */
#line 309 "fortran.y"
                                        {
        string res = string((yyvsp[-2].sval)) + ", " + (yyvsp[0].sval);
        free((yyvsp[-2].sval)); free((yyvsp[0].sval));
        (yyval.sval) = strdup(res.c_str());
    }
#line 1669 "fortran.tab.c"
    break;

  case 33: /* expr_list: expression  */
#line 318 "fortran.y"
        { (yyval.sval) = strdup((yyvsp[0].sval)); free((yyvsp[0].sval)); }
#line 1675 "fortran.tab.c"
    break;

  case 34: /* expr_list: expr_list COMMA expression  */
#line 320 "fortran.y"
        {
            string combined = string((yyvsp[-2].sval)) + ", " + (yyvsp[0].sval);
            free((yyvsp[-2].sval)); free((yyvsp[0].sval));
            (yyval.sval) = strdup(combined.c_str());
        }
#line 1685 "fortran.tab.c"
    break;

  case 35: /* if_statement: IF expression THEN statements ENDIF  */
#line 329 "fortran.y"
    {
        string cond = (yyvsp[-3].sval);
        string body = indent((yyvsp[-1].sval));
        free((yyvsp[-3].sval)); free((yyvsp[-1].sval));
        (yyval.sval) = strdup(("if " + cond + ":\n" + body).c_str());
    }
#line 1696 "fortran.tab.c"
    break;

  case 36: /* if_statement: IF expression THEN statements ELSE statements ENDIF  */
#line 336 "fortran.y"
    {
        string cond = (yyvsp[-5].sval);
        string then_body = indent((yyvsp[-3].sval));
        string else_body = indent((yyvsp[-1].sval));
        free((yyvsp[-5].sval)); free((yyvsp[-3].sval)); free((yyvsp[-1].sval));
        (yyval.sval) = strdup(("if " + cond + ":\n" + then_body + "else:\n" + else_body).c_str());
    }
#line 1708 "fortran.tab.c"
    break;

  case 37: /* write_statement: WRITE LPAREN STRING_LITERAL RPAREN  */
#line 347 "fortran.y"
    {
        string extra = "";
        if (pending_prompt && !last_prompt.empty()) {
            extra = "print(" + last_prompt + ")\n";
        }

        string this_print = "print(" + string((yyvsp[-1].sval)) + ")\n";
        last_prompt = ""; 
        pending_prompt = false;

        free((yyvsp[-1].sval));
        (yyval.sval) = strdup((extra + this_print).c_str());
    }
#line 1726 "fortran.tab.c"
    break;

  case 38: /* write_statement: WRITE LPAREN expr_list RPAREN  */
#line 361 "fortran.y"
    {
        string extra = "";
        if (pending_prompt && !last_prompt.empty()) {
            extra = "print(" + last_prompt + ")\n";
            last_prompt = "";
            pending_prompt = false;
        }
        
        string s = (yyvsp[-1].sval);
        free((yyvsp[-1].sval));
        (yyval.sval) = strdup((extra + "print(" + s + ")\n").c_str());
    }
#line 1743 "fortran.tab.c"
    break;

  case 39: /* write_statement: WRITE LPAREN expr_list RPAREN SEMICOLON  */
#line 374 "fortran.y"
    {
        string extra = "";
        if (pending_prompt && !last_prompt.empty()) {
            extra = "print(" + last_prompt + ")\n";
            last_prompt = "";
            pending_prompt = false;
        }
        
        string s = (yyvsp[-2].sval);
        free((yyvsp[-2].sval));
        (yyval.sval) = strdup((extra + "print(" + s + ")\n").c_str());
    }
#line 1760 "fortran.tab.c"
    break;

  case 40: /* function_decl: FUNCTION ID opt_param_list statements ENDFUNCTION  */
#line 390 "fortran.y"
    {
        string fname = (yyvsp[-3].sval);
        string params = (yyvsp[-2].sval);
        string body = indent((yyvsp[-1].sval));
        free((yyvsp[-3].sval)); free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
        (yyval.sval) = strdup(("def " + fname + "(" + params + "):\n" + body + "\n").c_str());
    }
#line 1772 "fortran.tab.c"
    break;

  case 41: /* call_statement: CALL ID SEMICOLON  */
#line 401 "fortran.y"
    {
        string fname = (yyvsp[-1].sval);
        free((yyvsp[-1].sval));
        (yyval.sval) = strdup((fname + "()\n").c_str());
    }
#line 1782 "fortran.tab.c"
    break;

  case 42: /* call_statement: CALL ID LPAREN RPAREN SEMICOLON  */
#line 407 "fortran.y"
    {
        string fname = (yyvsp[-3].sval);
        free((yyvsp[-3].sval));
        (yyval.sval) = strdup((fname + "()\n").c_str());
    }
#line 1792 "fortran.tab.c"
    break;

  case 43: /* call_statement: CALL ID LPAREN param_call_list RPAREN SEMICOLON  */
#line 413 "fortran.y"
    {
        string fname = (yyvsp[-4].sval);
        string args = (yyvsp[-2].sval);
        free((yyvsp[-4].sval)); free((yyvsp[-2].sval));
        (yyval.sval) = strdup((fname + "(" + args + ")\n").c_str());
    }
#line 1803 "fortran.tab.c"
    break;

  case 44: /* for_loop: FOR ID ASSIGN expression TO expression statements ENDFOR  */
#line 423 "fortran.y"
    {
        string var = (yyvsp[-6].sval);
        string start = (yyvsp[-4].sval);
        string end = (yyvsp[-2].sval);
        string body = indent((yyvsp[-1].sval));
        free((yyvsp[-6].sval)); free((yyvsp[-4].sval)); free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
        (yyval.sval) = strdup(("for " + var + " in range(" + start + ", " + end + " + 1):\n" + body).c_str());
    }
#line 1816 "fortran.tab.c"
    break;

  case 45: /* do_loop: DO statements ENDDO  */
#line 435 "fortran.y"
    {
        string body = indent((yyvsp[-1].sval));
        free((yyvsp[-1].sval));
        (yyval.sval) = strdup(("while True:\n" + body).c_str());
    }
#line 1826 "fortran.tab.c"
    break;

  case 46: /* do_loop: DO expression statements ENDDO  */
#line 441 "fortran.y"
    {
        string cond = (yyvsp[-2].sval);
        string body = indent((yyvsp[-1].sval));
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
        (yyval.sval) = strdup(("while " + cond + ":\n" + body).c_str());
    }
#line 1837 "fortran.tab.c"
    break;

  case 47: /* do_loop: DO ID ASSIGN expression COMMA expression statements ENDDO  */
#line 448 "fortran.y"
     {
        string var = (yyvsp[-6].sval);
        string start = (yyvsp[-4].sval);
        string end = (yyvsp[-2].sval);
        string body = indent((yyvsp[-1].sval));
        free((yyvsp[-6].sval)); free((yyvsp[-4].sval)); free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
        (yyval.sval) = strdup(("for " + var + " in range(" + start + ", " + end + "):\n" + body).c_str());
    }
#line 1850 "fortran.tab.c"
    break;

  case 48: /* do_loop: DO raw_block ENDDO  */
#line 457 "fortran.y"
    {
        string body = indent((yyvsp[-1].sval));
        free((yyvsp[-1].sval));
        (yyval.sval) = strdup(("while True:\n" + body).c_str());
    }
#line 1860 "fortran.tab.c"
    break;

  case 49: /* return_statement: RETURN expression  */
#line 466 "fortran.y"
    {
        string val = (yyvsp[0].sval);
        free((yyvsp[0].sval));
        (yyval.sval) = strdup(("return " + val + "\n").c_str());
    }
#line 1870 "fortran.tab.c"
    break;

  case 50: /* expression: STRING_LITERAL  */
#line 474 "fortran.y"
                         { (yyval.sval) = strdup((yyvsp[0].sval)); free((yyvsp[0].sval)); }
#line 1876 "fortran.tab.c"
    break;

  case 51: /* expression: ID  */
#line 475 "fortran.y"
                         { (yyval.sval) = strdup((yyvsp[0].sval)); free((yyvsp[0].sval)); }
#line 1882 "fortran.tab.c"
    break;

  case 52: /* expression: NUMBER  */
#line 476 "fortran.y"
                         { (yyval.sval) = strdup((yyvsp[0].sval)); free((yyvsp[0].sval)); }
#line 1888 "fortran.tab.c"
    break;

  case 53: /* expression: expression EQ expression  */
#line 478 "fortran.y"
                               {
        string res = string((yyvsp[-2].sval)) + " == " + string((yyvsp[0].sval));
        free((yyvsp[-2].sval)); free((yyvsp[0].sval));
        (yyval.sval) = strdup(res.c_str());
    }
#line 1898 "fortran.tab.c"
    break;

  case 54: /* expression: expression NEQ expression  */
#line 483 "fortran.y"
                                {
        string res = string((yyvsp[-2].sval)) + " != " + string((yyvsp[0].sval));
        free((yyvsp[-2].sval)); free((yyvsp[0].sval));
        (yyval.sval) = strdup(res.c_str());
    }
#line 1908 "fortran.tab.c"
    break;

  case 55: /* expression: expression GT expression  */
#line 488 "fortran.y"
                               {
        string res = string((yyvsp[-2].sval)) + " > " + string((yyvsp[0].sval));
        free((yyvsp[-2].sval)); free((yyvsp[0].sval));
        (yyval.sval) = strdup(res.c_str());
    }
#line 1918 "fortran.tab.c"
    break;

  case 56: /* expression: expression LT expression  */
#line 493 "fortran.y"
                               {
        string res = string((yyvsp[-2].sval)) + " < " + string((yyvsp[0].sval));
        free((yyvsp[-2].sval)); free((yyvsp[0].sval));
        (yyval.sval) = strdup(res.c_str());
    }
#line 1928 "fortran.tab.c"
    break;

  case 57: /* expression: expression GE expression  */
#line 498 "fortran.y"
                               {
        string res = string((yyvsp[-2].sval)) + " >= " + string((yyvsp[0].sval));
        free((yyvsp[-2].sval)); free((yyvsp[0].sval));
        (yyval.sval) = strdup(res.c_str());
    }
#line 1938 "fortran.tab.c"
    break;

  case 58: /* expression: expression LE expression  */
#line 503 "fortran.y"
                               {
        string res = string((yyvsp[-2].sval)) + " <= " + string((yyvsp[0].sval));
        free((yyvsp[-2].sval)); free((yyvsp[0].sval));
        (yyval.sval) = strdup(res.c_str());
    }
#line 1948 "fortran.tab.c"
    break;

  case 59: /* expression: expression PLUS expression  */
#line 509 "fortran.y"
                                 {
        string res = string((yyvsp[-2].sval)) + " + " + string((yyvsp[0].sval));
        free((yyvsp[-2].sval)); free((yyvsp[0].sval));
        (yyval.sval) = strdup(res.c_str());
    }
#line 1958 "fortran.tab.c"
    break;

  case 60: /* expression: expression MINUS expression  */
#line 514 "fortran.y"
                                  {
        string res = string((yyvsp[-2].sval)) + " - " + string((yyvsp[0].sval));
        free((yyvsp[-2].sval)); free((yyvsp[0].sval));
        (yyval.sval) = strdup(res.c_str());
    }
#line 1968 "fortran.tab.c"
    break;

  case 61: /* expression: expression MULT expression  */
#line 519 "fortran.y"
                                 {
        string res = string((yyvsp[-2].sval)) + " * " + string((yyvsp[0].sval));
        free((yyvsp[-2].sval)); free((yyvsp[0].sval));
        (yyval.sval) = strdup(res.c_str());
    }
#line 1978 "fortran.tab.c"
    break;

  case 62: /* expression: expression DIV expression  */
#line 524 "fortran.y"
                                {
        string res = string((yyvsp[-2].sval)) + " / " + string((yyvsp[0].sval));
        free((yyvsp[-2].sval)); free((yyvsp[0].sval));
        (yyval.sval) = strdup(res.c_str());
    }
#line 1988 "fortran.tab.c"
    break;

  case 63: /* expression: expression POW expression  */
#line 529 "fortran.y"
                                {
        string res = string((yyvsp[-2].sval)) + " ** " + string((yyvsp[0].sval));
        free((yyvsp[-2].sval)); free((yyvsp[0].sval));
        (yyval.sval) = strdup(res.c_str());
    }
#line 1998 "fortran.tab.c"
    break;

  case 64: /* expression: ID LPAREN param_call_list RPAREN  */
#line 535 "fortran.y"
                                       {
        string fname = (yyvsp[-3].sval);
        string args = (yyvsp[-1].sval);
        free((yyvsp[-3].sval)); free((yyvsp[-1].sval));
        (yyval.sval) = strdup((fname + "(" + args + ")").c_str());
    }
#line 2009 "fortran.tab.c"
    break;

  case 65: /* expression: ID LPAREN RPAREN  */
#line 541 "fortran.y"
                       {
        string fname = (yyvsp[-2].sval);
        free((yyvsp[-2].sval));
        (yyval.sval) = strdup((fname + "()").c_str());
    }
#line 2019 "fortran.tab.c"
    break;

  case 66: /* expression: LPAREN expression RPAREN  */
#line 547 "fortran.y"
                               {
        string res = "(" + string((yyvsp[-1].sval)) + ")";
        free((yyvsp[-1].sval));
        (yyval.sval) = strdup(res.c_str());
    }
#line 2029 "fortran.tab.c"
    break;


#line 2033 "fortran.tab.c"

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

#line 554 "fortran.y"


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
