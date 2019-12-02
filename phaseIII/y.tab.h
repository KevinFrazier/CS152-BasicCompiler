/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 19 "calc.y"
{
  double dval;
  int ival;
  char* sval;
}
/* Line 1529 of yacc.c.  */
#line 163 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

