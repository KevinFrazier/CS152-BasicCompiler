/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     MULT = 258,
     DIV = 259,
     PLUS = 260,
     MINUS = 261,
     EQUAL = 262,
     L_PAREN = 263,
     R_PAREN = 264,
     L_SQUARE_BRACKET = 265,
     R_SQUARE_BRACKET = 266,
     NOT = 267,
     END = 268,
     EQ = 269,
     NEQ = 270,
     LT = 271,
     GT = 272,
     LTE = 273,
     GTE = 274,
     SEMICOLON = 275,
     COLON = 276,
     COMMA = 277,
     ASSIGN = 278,
     TRUE = 279,
     FALSE = 280,
     RETURN = 281,
     MOD = 282,
     AND = 283,
     CONTINUE = 284,
     READ = 285,
     WRITE = 286,
     INTEGER = 287,
     OF = 288,
     ARRAY = 289,
     OR = 290,
     COMMENT = 291,
     NUMBER = 292,
     IDENT = 293,
     UMINUS = 294,
     BEGIN_LOCALS = 295,
     END_LOCALS = 296,
     BEGIN_BODY = 297,
     END_BODY = 298,
     BEGIN_PARAMS = 299,
     END_PARAMS = 300,
     FUNCTION = 301,
     DO = 302,
     BEGINLOOP = 303,
     ENDLOOP = 304,
     WHILE = 305,
     IF = 306,
     THEN = 307,
     ENDIF = 308,
     ELSE = 309
   };
#endif
/* Tokens.  */
#define MULT 258
#define DIV 259
#define PLUS 260
#define MINUS 261
#define EQUAL 262
#define L_PAREN 263
#define R_PAREN 264
#define L_SQUARE_BRACKET 265
#define R_SQUARE_BRACKET 266
#define NOT 267
#define END 268
#define EQ 269
#define NEQ 270
#define LT 271
#define GT 272
#define LTE 273
#define GTE 274
#define SEMICOLON 275
#define COLON 276
#define COMMA 277
#define ASSIGN 278
#define TRUE 279
#define FALSE 280
#define RETURN 281
#define MOD 282
#define AND 283
#define CONTINUE 284
#define READ 285
#define WRITE 286
#define INTEGER 287
#define OF 288
#define ARRAY 289
#define OR 290
#define COMMENT 291
#define NUMBER 292
#define IDENT 293
#define UMINUS 294
#define BEGIN_LOCALS 295
#define END_LOCALS 296
#define BEGIN_BODY 297
#define END_BODY 298
#define BEGIN_PARAMS 299
#define END_PARAMS 300
#define FUNCTION 301
#define DO 302
#define BEGINLOOP 303
#define ENDLOOP 304
#define WHILE 305
#define IF 306
#define THEN 307
#define ENDIF 308
#define ELSE 309




/* Copy the first part of user declarations.  */
#line 7 "calc.y"

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 void yyerror(const char *msg);
 extern int currLine;
 extern int currPos;
 //extern int yylex();
 FILE * yyin;



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 19 "calc.y"
{
  double dval;
  int ival;
  char* sval;
}
/* Line 193 of yacc.c.  */
#line 222 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 235 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   306

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  68
/* YYNRULES -- Number of states.  */
#define YYNSTATES  207

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,    11,    19,    25,    43,    55,
      69,    86,    93,   100,   106,   113,   116,   124,   126,   130,
     132,   135,   137,   140,   142,   145,   149,   154,   159,   161,
     165,   167,   171,   172,   175,   178,   186,   208,   212,   221,
     223,   227,   229,   233,   237,   241,   243,   245,   250,   255,
     258,   261,   263,   268,   270,   272,   274,   276,   278,   280,
     282,   284,   288,   292,   294,   298,   302,   306,   307
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      56,     0,    -1,    -1,    56,    57,    -1,    75,     7,    13,
      -1,    65,    77,    65,    61,    65,    77,    65,    -1,    72,
      23,    75,    77,    65,    -1,    51,    69,    52,    77,    65,
      59,    77,    65,    54,    77,    65,    59,    77,    65,    53,
      77,    65,    -1,    51,    69,    52,    77,    65,    59,    77,
      65,    53,    77,    65,    -1,    50,    69,    77,    65,    48,
      77,    65,    59,    77,    65,    49,    77,    65,    -1,    47,
      77,    65,    48,    77,    65,    59,    77,    65,    49,    77,
      65,    50,    69,    77,    65,    -1,    77,    65,    30,    60,
      77,    65,    -1,    77,    65,    31,    60,    77,    65,    -1,
      77,    65,    29,    77,    65,    -1,    77,    65,    26,    75,
      77,    65,    -1,    77,    65,    -1,    58,    20,    77,    65,
      59,    77,    65,    -1,    72,    -1,    72,    22,    60,    -1,
      67,    -1,    67,    61,    -1,    72,    -1,    39,    72,    -1,
      37,    -1,    39,    37,    -1,     8,    75,     9,    -1,    39,
       8,    75,     9,    -1,    73,     8,    63,     9,    -1,    75,
      -1,    75,    22,    63,    -1,    73,    -1,    73,    22,    64,
      -1,    -1,    13,    65,    -1,    77,    65,    -1,    68,    20,
      77,    65,    66,    77,    65,    -1,    46,    73,    20,    65,
      44,    65,    66,    45,    65,    40,    65,    66,    65,    41,
      65,    42,    65,    59,    65,    43,    65,    -1,    64,    21,
      32,    -1,    64,    21,    34,    10,    37,    11,    33,    32,
      -1,    70,    -1,    70,    35,    70,    -1,    71,    -1,    71,
      28,    70,    -1,    75,    74,    75,    -1,     8,    69,     9,
      -1,    24,    -1,    25,    -1,    12,    75,    74,    75,    -1,
      12,     8,    69,     9,    -1,    12,    24,    -1,    12,    25,
      -1,    73,    -1,    73,    10,    75,    11,    -1,    38,    -1,
      14,    -1,    15,    -1,    16,    -1,    17,    -1,    18,    -1,
      19,    -1,    76,    -1,    76,     5,    75,    -1,    76,     6,
      75,    -1,    62,    -1,    62,     3,    76,    -1,    62,     4,
      76,    -1,    62,    27,    76,    -1,    -1,    77,    65,    36,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    40,    40,    40,    43,    44,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    58,    59,    61,    62,    64,
      65,    68,    69,    70,    71,    72,    73,    74,    77,    78,
      81,    82,    85,    86,    89,    90,    93,    95,    96,    99,
     100,   103,   104,   107,   108,   109,   110,   111,   112,   113,
     114,   117,   118,   121,   124,   125,   126,   127,   128,   129,
     132,   133,   134,   137,   138,   139,   140,   143,   144
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "MULT", "DIV", "PLUS", "MINUS", "EQUAL",
  "L_PAREN", "R_PAREN", "L_SQUARE_BRACKET", "R_SQUARE_BRACKET", "NOT",
  "END", "EQ", "NEQ", "LT", "GT", "LTE", "GTE", "SEMICOLON", "COLON",
  "COMMA", "ASSIGN", "TRUE", "FALSE", "RETURN", "MOD", "AND", "CONTINUE",
  "READ", "WRITE", "INTEGER", "OF", "ARRAY", "OR", "COMMENT", "NUMBER",
  "IDENT", "UMINUS", "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY",
  "END_BODY", "BEGIN_PARAMS", "END_PARAMS", "FUNCTION", "DO", "BEGINLOOP",
  "ENDLOOP", "WHILE", "IF", "THEN", "ENDIF", "ELSE", "$accept", "input",
  "line", "statement", "many_statements", "many_vars", "program", "term",
  "many_exp", "many_ident", "many_ends", "many_declaration", "function",
  "declaration", "bool_expr", "relation_and_expr", "relation_expr", "var",
  "ident", "comp", "exp", "multexp", "comment", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    56,    57,    57,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    59,    59,    60,    60,    61,
      61,    62,    62,    62,    62,    62,    62,    62,    63,    63,
      64,    64,    65,    65,    66,    66,    67,    68,    68,    69,
      69,    70,    70,    71,    71,    71,    71,    71,    71,    71,
      71,    72,    72,    73,    74,    74,    74,    74,    74,    74,
      75,    75,    75,    76,    76,    76,    76,    77,    77
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     3,     7,     5,    17,    11,    13,
      16,     6,     6,     5,     6,     2,     7,     1,     3,     1,
       2,     1,     2,     1,     2,     3,     4,     4,     1,     3,
       1,     3,     0,     2,     2,     7,    21,     3,     8,     1,
       3,     1,     3,     3,     3,     1,     1,     4,     4,     2,
       2,     1,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     1,     3,     3,     3,     0,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,    32,     1,     0,    32,    23,    53,     0,     3,    63,
      67,    21,    51,     0,    60,     0,    33,     0,    24,    22,
      51,     0,     0,     0,    32,     0,     0,     0,     0,     0,
      25,     0,    64,    65,    66,     0,     0,    28,     0,     4,
      61,    62,    26,    68,     0,    32,    19,    27,     0,    52,
       0,    67,    20,    29,    32,    32,     0,     5,    32,    67,
       0,     0,     0,    30,    32,     0,    32,    67,     0,    34,
      37,     0,     0,    32,    31,     0,    32,    67,     0,    67,
      67,     0,    32,    32,     0,     0,    35,    38,    32,     0,
      32,    67,    67,     0,     0,     0,    32,     0,    32,    32,
       0,     0,    45,    46,    67,    39,    41,     0,     0,    67,
       0,     0,    15,     0,     0,     0,     0,    49,    50,     0,
      32,     0,     0,    54,    55,    56,    57,    58,    59,     0,
      67,    32,    32,    67,     0,    67,     0,     0,    67,    44,
       0,     0,     0,    40,    42,    43,    32,    67,    36,    32,
      67,    32,    67,    17,    67,    32,    48,    47,    67,    67,
      67,     6,    32,    13,    32,     0,    32,    67,    32,    67,
      32,    14,    11,    18,    12,    67,    67,    32,    16,    32,
      67,     0,     0,    32,    67,    67,    67,     0,    32,    32,
      32,    67,     8,    67,     0,    32,    67,     0,     9,    32,
      67,     0,    32,    67,    10,    32,     7
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     8,    95,    96,   152,    45,     9,    36,    60,
      10,    61,    46,    62,   104,   105,   106,    11,    12,   129,
     107,    14,    98
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -146
static const yytype_int16 yypact[] =
{
    -146,     5,  -146,     8,     2,  -146,  -146,    19,  -146,    25,
    -146,  -146,   109,    12,     6,    21,  -146,     8,  -146,  -146,
      27,     8,     8,     8,     2,     8,     8,    48,     8,     8,
    -146,    64,  -146,  -146,  -146,    28,    92,    60,    91,  -146,
    -146,  -146,  -146,  -146,    71,     2,    75,  -146,     8,  -146,
     102,  -146,  -146,  -146,     2,     2,    81,    90,     2,    71,
     122,    85,   126,   127,     2,    97,     2,  -146,    71,    90,
    -146,   145,   116,     2,  -146,   133,     2,   123,   152,    71,
    -146,   138,     2,     2,   142,   135,    90,  -146,     2,   136,
       2,    30,  -146,    51,    51,   160,     2,   164,     2,     2,
      51,     1,  -146,  -146,  -146,   148,   161,   198,   141,  -146,
     151,     8,   108,    17,   179,    96,    51,  -146,  -146,   198,
       2,    51,    51,  -146,  -146,  -146,  -146,  -146,  -146,     8,
    -146,     2,     2,  -146,     8,  -146,    71,    71,  -146,  -146,
     187,     8,    55,  -146,  -146,  -146,     2,    49,  -146,     2,
    -146,     2,  -146,   175,  -146,     2,  -146,  -146,  -146,    49,
    -146,    90,     2,    90,     2,    71,     2,    49,     2,  -146,
       2,    90,    90,  -146,    90,  -146,    49,     2,    90,     2,
    -146,    13,    22,     2,  -146,  -146,  -146,    57,     2,     2,
       2,  -146,    90,    49,   -33,     2,  -146,    51,    90,     2,
    -146,   -32,     2,  -146,    90,     2,    90
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -146,  -146,  -146,  -146,  -145,  -131,   156,  -146,   157,   139,
      -4,    56,  -146,  -146,   -93,   -24,  -146,    63,   113,    99,
       7,   146,    73
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      16,   108,   160,    43,    43,     2,   154,   114,    13,   116,
      15,    28,    29,     3,   169,     4,     3,   197,     4,    27,
      35,   203,   175,   140,    31,   117,   118,    17,    21,    22,
      30,   180,    37,    38,   173,    40,    41,    26,     5,     6,
       7,    51,     5,     6,     7,     5,     6,     7,   196,    43,
      56,    57,    23,    43,    59,    37,    18,     6,    43,   100,
      69,    39,    72,   101,    43,   138,   184,   185,     6,    77,
      19,   186,    79,    42,    44,   102,   103,    92,    85,    86,
      93,    94,    48,    24,    89,    43,    91,     6,     5,     6,
       7,    43,   110,    43,   112,   113,    92,   143,   144,    93,
      94,    47,    49,   158,   200,    30,   191,   115,   119,     6,
     123,   124,   125,   126,   127,   128,   142,    25,   133,    26,
      20,    44,    54,   115,    55,    58,    43,   147,   148,    70,
      66,    71,    64,    80,   134,    82,   145,   135,   136,   137,
      73,   150,   159,    65,    43,   161,    67,   163,   157,    68,
      64,   167,    64,    83,    97,    75,    76,    50,   171,    43,
     172,     6,   174,    81,   176,    99,   178,    32,    33,    34,
      78,    84,    63,   181,    87,   182,    88,   120,    90,   187,
     109,    63,   131,   121,   192,   193,   194,   111,   139,   122,
      63,   198,    63,   130,   132,   201,   156,   165,   204,   153,
     153,   206,    52,   146,    20,    53,   149,    74,   151,     0,
      97,   155,   123,   124,   125,   126,   127,   128,   141,     0,
       0,     0,    97,   162,     0,   164,     0,   166,   153,     0,
      97,   168,     0,   170,     0,     0,     0,     0,     0,    97,
       0,     0,   177,     0,     0,     0,     0,     0,   179,    20,
      20,     0,     0,   183,     0,     0,    97,   188,   189,   190,
      20,     0,     0,     0,   195,     0,     0,     0,     0,   199,
       0,     0,    20,   202,     0,     0,   205,     0,    20,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    20
};

static const yytype_int16 yycheck[] =
{
       4,    94,   147,    36,    36,     0,   137,   100,     1,     8,
       3,     5,     6,     8,   159,    13,     8,    50,    13,     7,
      24,    53,   167,   116,    17,    24,    25,     8,     3,     4,
       9,   176,    25,    26,   165,    28,    29,    10,    37,    38,
      39,    45,    37,    38,    39,    37,    38,    39,   193,    36,
      54,    55,    27,    36,    58,    48,    37,    38,    36,     8,
      64,    13,    66,    12,    36,    48,    53,    54,    38,    73,
       7,    49,    76,     9,    46,    24,    25,    47,    82,    83,
      50,    51,    22,    10,    88,    36,    90,    38,    37,    38,
      39,    36,    96,    36,    98,    99,    47,   121,   122,    50,
      51,     9,    11,    48,   197,     9,    49,   100,   101,    38,
      14,    15,    16,    17,    18,    19,   120,     8,   111,    10,
       7,    46,    20,   116,    51,    44,    36,   131,   132,    32,
      45,    34,    59,    77,    26,    79,   129,    29,    30,    31,
      67,   134,   146,    21,    36,   149,    20,   151,   141,    22,
      77,   155,    79,    80,    91,    10,    40,    44,   162,    36,
     164,    38,   166,    11,   168,    92,   170,    21,    22,    23,
      37,    33,    59,   177,    32,   179,    41,   104,    42,   183,
      20,    68,   109,    35,   188,   189,   190,    23,     9,    28,
      77,   195,    79,    52,    43,   199,     9,    22,   202,   136,
     137,   205,    46,   130,    91,    48,   133,    68,   135,    -1,
     147,   138,    14,    15,    16,    17,    18,    19,   119,    -1,
      -1,    -1,   159,   150,    -1,   152,    -1,   154,   165,    -1,
     167,   158,    -1,   160,    -1,    -1,    -1,    -1,    -1,   176,
      -1,    -1,   169,    -1,    -1,    -1,    -1,    -1,   175,   136,
     137,    -1,    -1,   180,    -1,    -1,   193,   184,   185,   186,
     147,    -1,    -1,    -1,   191,    -1,    -1,    -1,    -1,   196,
      -1,    -1,   159,   200,    -1,    -1,   203,    -1,   165,    -1,
     167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   193
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    56,     0,     8,    13,    37,    38,    39,    57,    62,
      65,    72,    73,    75,    76,    75,    65,     8,    37,    72,
      73,     3,     4,    27,    77,     8,    10,     7,     5,     6,
       9,    75,    76,    76,    76,    65,    63,    75,    75,    13,
      75,    75,     9,    36,    46,    61,    67,     9,    22,    11,
      73,    65,    61,    63,    20,    77,    65,    65,    44,    65,
      64,    66,    68,    73,    77,    21,    45,    20,    22,    65,
      32,    34,    65,    77,    64,    10,    40,    65,    37,    65,
      66,    11,    66,    77,    33,    65,    65,    32,    41,    65,
      42,    65,    47,    50,    51,    58,    59,    72,    77,    77,
       8,    12,    24,    25,    69,    70,    71,    75,    69,    20,
      65,    23,    65,    65,    69,    75,     8,    24,    25,    75,
      77,    35,    28,    14,    15,    16,    17,    18,    19,    74,
      52,    77,    43,    75,    26,    29,    30,    31,    48,     9,
      69,    74,    65,    70,    70,    75,    77,    65,    65,    77,
      75,    77,    60,    72,    60,    77,     9,    75,    48,    65,
      59,    65,    77,    65,    77,    22,    77,    65,    77,    59,
      77,    65,    65,    60,    65,    59,    65,    77,    65,    77,
      59,    65,    65,    77,    53,    54,    49,    65,    77,    77,
      77,    49,    65,    65,    65,    77,    59,    50,    65,    77,
      69,    65,    77,    53,    65,    77,    65
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 43 "calc.y"
    { /*printf("\t%f\n", $1)*/;;}
    break;

  case 6:
#line 47 "calc.y"
    {printf("statement -> var ASSIGN exp\n");;}
    break;

  case 7:
#line 48 "calc.y"
    {printf("statement -> IF bool_exp THEN statements ELSE statements ENDIF\n");;}
    break;

  case 8:
#line 49 "calc.y"
    {printf("statement -> IF bool_exp THEN statements ENDIF\n");;}
    break;

  case 9:
#line 50 "calc.y"
    {printf("statement -> WHILE bool_exp BEGINLOOP statements ENDLOOP\n");;}
    break;

  case 10:
#line 51 "calc.y"
    {printf("statement -> DO BEGINLOOP statements ENDLOOP WHILE bool_exp\n");;}
    break;

  case 11:
#line 52 "calc.y"
    {printf("statement -> READ vars\n");;}
    break;

  case 12:
#line 53 "calc.y"
    {printf("statement -> WRITE vars\n");;}
    break;

  case 13:
#line 54 "calc.y"
    {printf("statement -> CONTINUE\n");;}
    break;

  case 14:
#line 55 "calc.y"
    {printf("statement -> RETURN expression\n");;}
    break;

  case 15:
#line 58 "calc.y"
    {printf("statements -> epsilon\n");;}
    break;

  case 16:
#line 59 "calc.y"
    {printf("statements -> statement SEMICOLON statements\n");;}
    break;

  case 17:
#line 61 "calc.y"
    {printf("vars -> var\n");;}
    break;

  case 18:
#line 62 "calc.y"
    {printf("vars -> var COMMA vars\n");;}
    break;

  case 19:
#line 64 "calc.y"
    {printf("prog_start -> function\n");;}
    break;

  case 20:
#line 65 "calc.y"
    {printf("prog_start -> function program\n");;}
    break;

  case 21:
#line 68 "calc.y"
    {printf("term -> var\n");;}
    break;

  case 22:
#line 69 "calc.y"
    {printf("term -> UMINUS var \n");;}
    break;

  case 23:
#line 70 "calc.y"
    {printf("term -> NUMBER\n");;}
    break;

  case 24:
#line 71 "calc.y"
    {printf("term -> UMINUS NUMBER\n");;}
    break;

  case 25:
#line 72 "calc.y"
    {printf("term -> L_PAREN expression R_PAREN\n");;}
    break;

  case 26:
#line 73 "calc.y"
    {printf("term -> L_PAREN expression R_PAREN\n");;}
    break;

  case 27:
#line 74 "calc.y"
    {printf("term -> IDENT L_PAREN expressions R_PAREN\n");;}
    break;

  case 28:
#line 77 "calc.y"
    {printf("expressions -> expression\n");;}
    break;

  case 29:
#line 78 "calc.y"
    {printf("expressions -> expression COMMA expressions\n");;}
    break;

  case 30:
#line 81 "calc.y"
    {printf("identifiers -> ident\n");;}
    break;

  case 31:
#line 82 "calc.y"
    {printf("identifiers -> ident COMMA identifiers\n");;}
    break;

  case 34:
#line 89 "calc.y"
    {printf("declarations -> epsilon\n");;}
    break;

  case 35:
#line 90 "calc.y"
    {printf("declarations -> declaration SEMICOLON declarations\n");;}
    break;

  case 36:
#line 93 "calc.y"
    {printf("function -> FUNCTION IDENT SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY\n");;}
    break;

  case 37:
#line 95 "calc.y"
    {printf("declaration -> identifiers COLON INTEGER\n");;}
    break;

  case 38:
#line 96 "calc.y"
    {printf("declaration -> identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");;}
    break;

  case 39:
#line 99 "calc.y"
    {printf("bool-expr -> relation-and-expr\n");;}
    break;

  case 40:
#line 100 "calc.y"
    {printf("bool-expr -> relation-expr and relation-expr\n");;}
    break;

  case 41:
#line 103 "calc.y"
    {printf("relation-and-expr -> relation-expr\n");;}
    break;

  case 42:
#line 104 "calc.y"
    {printf("relation-and-expr -> relation-expr and relation-expr\n");;}
    break;

  case 43:
#line 107 "calc.y"
    {printf("relation-expr -> exp comp exp\n");;}
    break;

  case 44:
#line 108 "calc.y"
    {printf("relation-expr -> L_PAREN bool-expr R_PAREN\n");;}
    break;

  case 45:
#line 109 "calc.y"
    {printf("TRUE\n");;}
    break;

  case 46:
#line 110 "calc.y"
    {printf("FALSE\n");;}
    break;

  case 47:
#line 111 "calc.y"
    {printf("relation-expr -> NOT exp comp exp\n");;}
    break;

  case 48:
#line 112 "calc.y"
    {printf("relation-expr -> NOT L_PAREN bool_expr R_PAREN\n");;}
    break;

  case 49:
#line 113 "calc.y"
    {printf("NOT TRUE\n");;}
    break;

  case 50:
#line 114 "calc.y"
    {printf("NOT FALSE\n");;}
    break;

  case 51:
#line 117 "calc.y"
    { printf("var -> ident\n");;}
    break;

  case 52:
#line 118 "calc.y"
    {printf("var -> ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");;}
    break;

  case 53:
#line 121 "calc.y"
    {printf("ident -> IDENT %s\n", (yyvsp[(1) - (1)].sval));;}
    break;

  case 54:
#line 124 "calc.y"
    {printf("comp -> EQ\n");;}
    break;

  case 55:
#line 125 "calc.y"
    {printf("comp -> NEQ\n");;}
    break;

  case 56:
#line 126 "calc.y"
    {printf("comp -> LT\n");;}
    break;

  case 57:
#line 127 "calc.y"
    {printf("comp -> GT\n");;}
    break;

  case 58:
#line 128 "calc.y"
    {printf("comp -> LTE\n");;}
    break;

  case 59:
#line 129 "calc.y"
    {printf("comp -> GTE\n");;}
    break;

  case 60:
#line 132 "calc.y"
    {printf("expression -> multiplicative_expression\n");;}
    break;

  case 61:
#line 133 "calc.y"
    {printf("expression -> multiplicative_expression PLUS expression\n");;}
    break;

  case 62:
#line 134 "calc.y"
    {printf("expression -> multiplicative_expression MINUS expression\n");;}
    break;

  case 63:
#line 137 "calc.y"
    {printf("multiplicative_expression -> term\n");;}
    break;

  case 64:
#line 138 "calc.y"
    {printf("mutliplicative_expression -> term MULT term\n");;}
    break;

  case 65:
#line 139 "calc.y"
    {printf("multiplicative_expression -> term DIV term\n");;}
    break;

  case 66:
#line 140 "calc.y"
    {printf("multiplicative_expression -> term MOD term\n");;}
    break;

  case 68:
#line 144 "calc.y"
    {printf("comment -> COMMENT\n");;}
    break;


/* Line 1267 of yacc.c.  */
#line 1918 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 147 "calc.y"


int main(int argc, char **argv) {
   if (argc > 1) {
      yyin = fopen(argv[1], "r");
      if (yyin == NULL){
         printf("syntax: %s filename\n", argv[0]);
      }//end if
   }//end if
   yyparse(); // Calls yylex() for tokens.
   return 0;
}

void yyerror(const char *msg) {
   printf("** Line %d, position %d: %s\n", currLine, currPos, msg);
}


