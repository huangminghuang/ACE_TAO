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

/* Substitute the variable and function names.  */
#define yyparse tao_yyparse
#define yylex   tao_yylex
#define yyerror tao_yyerror
#define yylval  tao_yylval
#define yychar  tao_yychar
#define yydebug tao_yydebug
#define yynerrs tao_yynerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     IDL_CONST = 259,
     IDL_MODULE = 260,
     IDL_INTERFACE = 261,
     IDL_TYPEDEF = 262,
     IDL_LONG = 263,
     IDL_SHORT = 264,
     IDL_UNSIGNED = 265,
     IDL_DOUBLE = 266,
     IDL_FLOAT = 267,
     IDL_CHAR = 268,
     IDL_WCHAR = 269,
     IDL_OCTET = 270,
     IDL_BOOLEAN = 271,
     IDL_FIXED = 272,
     IDL_ANY = 273,
     IDL_OBJECT = 274,
     IDL_STRUCT = 275,
     IDL_UNION = 276,
     IDL_SWITCH = 277,
     IDL_ENUM = 278,
     IDL_SEQUENCE = 279,
     IDL_STRING = 280,
     IDL_WSTRING = 281,
     IDL_EXCEPTION = 282,
     IDL_CASE = 283,
     IDL_DEFAULT = 284,
     IDL_READONLY = 285,
     IDL_ATTRIBUTE = 286,
     IDL_ONEWAY = 287,
     IDL_IDEMPOTENT = 288,
     IDL_VOID = 289,
     IDL_IN = 290,
     IDL_OUT = 291,
     IDL_INOUT = 292,
     IDL_RAISES = 293,
     IDL_CONTEXT = 294,
     IDL_NATIVE = 295,
     IDL_LOCAL = 296,
     IDL_ABSTRACT = 297,
     IDL_CUSTOM = 298,
     IDL_FACTORY = 299,
     IDL_PRIVATE = 300,
     IDL_PUBLIC = 301,
     IDL_SUPPORTS = 302,
     IDL_TRUNCATABLE = 303,
     IDL_VALUETYPE = 304,
     IDL_COMPONENT = 305,
     IDL_CONSUMES = 306,
     IDL_EMITS = 307,
     IDL_EVENTTYPE = 308,
     IDL_FINDER = 309,
     IDL_GETRAISES = 310,
     IDL_HOME = 311,
     IDL_IMPORT = 312,
     IDL_MULTIPLE = 313,
     IDL_PRIMARYKEY = 314,
     IDL_PROVIDES = 315,
     IDL_PUBLISHES = 316,
     IDL_SETRAISES = 317,
     IDL_TYPEID = 318,
     IDL_TYPEPREFIX = 319,
     IDL_USES = 320,
     IDL_MANAGES = 321,
     IDL_TYPENAME = 322,
     IDL_PORT = 323,
     IDL_MIRRORPORT = 324,
     IDL_PORTTYPE = 325,
     IDL_CONNECTOR = 326,
     IDL_ALIAS = 327,
     IDL_INTEGER_LITERAL = 328,
     IDL_UINTEGER_LITERAL = 329,
     IDL_STRING_LITERAL = 330,
     IDL_CHARACTER_LITERAL = 331,
     IDL_FLOATING_PT_LITERAL = 332,
     IDL_FIXED_PT_LITERAL = 333,
     IDL_TRUETOK = 334,
     IDL_FALSETOK = 335,
     IDL_SCOPE_DELIMITOR = 336,
     IDL_LEFT_SHIFT = 337,
     IDL_RIGHT_SHIFT = 338,
     IDL_WCHAR_LITERAL = 339,
     IDL_WSTRING_LITERAL = 340
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define IDL_CONST 259
#define IDL_MODULE 260
#define IDL_INTERFACE 261
#define IDL_TYPEDEF 262
#define IDL_LONG 263
#define IDL_SHORT 264
#define IDL_UNSIGNED 265
#define IDL_DOUBLE 266
#define IDL_FLOAT 267
#define IDL_CHAR 268
#define IDL_WCHAR 269
#define IDL_OCTET 270
#define IDL_BOOLEAN 271
#define IDL_FIXED 272
#define IDL_ANY 273
#define IDL_OBJECT 274
#define IDL_STRUCT 275
#define IDL_UNION 276
#define IDL_SWITCH 277
#define IDL_ENUM 278
#define IDL_SEQUENCE 279
#define IDL_STRING 280
#define IDL_WSTRING 281
#define IDL_EXCEPTION 282
#define IDL_CASE 283
#define IDL_DEFAULT 284
#define IDL_READONLY 285
#define IDL_ATTRIBUTE 286
#define IDL_ONEWAY 287
#define IDL_IDEMPOTENT 288
#define IDL_VOID 289
#define IDL_IN 290
#define IDL_OUT 291
#define IDL_INOUT 292
#define IDL_RAISES 293
#define IDL_CONTEXT 294
#define IDL_NATIVE 295
#define IDL_LOCAL 296
#define IDL_ABSTRACT 297
#define IDL_CUSTOM 298
#define IDL_FACTORY 299
#define IDL_PRIVATE 300
#define IDL_PUBLIC 301
#define IDL_SUPPORTS 302
#define IDL_TRUNCATABLE 303
#define IDL_VALUETYPE 304
#define IDL_COMPONENT 305
#define IDL_CONSUMES 306
#define IDL_EMITS 307
#define IDL_EVENTTYPE 308
#define IDL_FINDER 309
#define IDL_GETRAISES 310
#define IDL_HOME 311
#define IDL_IMPORT 312
#define IDL_MULTIPLE 313
#define IDL_PRIMARYKEY 314
#define IDL_PROVIDES 315
#define IDL_PUBLISHES 316
#define IDL_SETRAISES 317
#define IDL_TYPEID 318
#define IDL_TYPEPREFIX 319
#define IDL_USES 320
#define IDL_MANAGES 321
#define IDL_TYPENAME 322
#define IDL_PORT 323
#define IDL_MIRRORPORT 324
#define IDL_PORTTYPE 325
#define IDL_CONNECTOR 326
#define IDL_ALIAS 327
#define IDL_INTEGER_LITERAL 328
#define IDL_UINTEGER_LITERAL 329
#define IDL_STRING_LITERAL 330
#define IDL_CHARACTER_LITERAL 331
#define IDL_FLOATING_PT_LITERAL 332
#define IDL_FIXED_PT_LITERAL 333
#define IDL_TRUETOK 334
#define IDL_FALSETOK 335
#define IDL_SCOPE_DELIMITOR 336
#define IDL_LEFT_SHIFT 337
#define IDL_RIGHT_SHIFT 338
#define IDL_WCHAR_LITERAL 339
#define IDL_WSTRING_LITERAL 340




/* Copy the first part of user declarations.  */
#line 73 "fe/idl.ypp"

#include "utl_identifier.h"
#include "utl_err.h"
#include "utl_string.h"
#include "utl_strlist.h"
#include "utl_namelist.h"
#include "utl_exprlist.h"
#include "utl_labellist.h"
#include "utl_decllist.h"

#include "global_extern.h"
#include "nr_extern.h"

#include "ast_argument.h"
#include "ast_array.h"
#include "ast_attribute.h"
#include "ast_field.h"
#include "ast_fixed.h"
#include "ast_expression.h"
#include "ast_operation.h"
#include "ast_generator.h"
#include "ast_template_module.h"
#include "ast_template_module_inst.h"
#include "ast_template_module_ref.h"
#include "ast_typedef.h"
#include "ast_valuebox.h"
#include "ast_valuetype.h"
#include "ast_valuetype_fwd.h"
#include "ast_eventtype.h"
#include "ast_eventtype_fwd.h"
#include "ast_component.h"
#include "ast_component_fwd.h"
#include "ast_home.h"
#include "ast_porttype.h"
#include "ast_connector.h"
#include "ast_uses.h"
#include "ast_constant.h"
#include "ast_union.h"
#include "ast_union_fwd.h"
#include "ast_structure_fwd.h"
#include "ast_extern.h"
#include "ast_enum.h"
#include "ast_root.h"
#include "ast_sequence.h"
#include "ast_string.h"
#include "ast_factory.h"
#include "ast_finder.h"
#include "ast_exception.h"
#include "ast_param_holder.h"
#include "ast_visitor_tmpl_module_inst.h"
#include "ast_visitor_tmpl_module_ref.h"
#include "ast_visitor_context.h"

#include "fe_declarator.h"
#include "fe_interface_header.h"
#include "fe_obv_header.h"
#include "fe_component_header.h"
#include "fe_home_header.h"
#include "fe_utils.h"

#if (defined(apollo) || defined(hpux)) && defined(__cplusplus)
extern  "C" int tao_yywrap();
#endif  // (defined(apollo) || defined(hpux)) && defined(__cplusplus)


void tao_yyerror (const char *);
int tao_yylex (void);
extern "C" int tao_yywrap (void);
extern char tao_yytext[];
extern int tao_yyleng;
AST_Enum *tao_enum_constant_decl = 0;
AST_Expression::ExprType t_param_const_type = AST_Expression::EV_none;
#define TAO_YYDEBUG_LEXER_TEXT (tao_yytext[tao_yyleng] = '\0', tao_yytext)
// Force the pretty debugging code to compile.
#define YYDEBUG 1


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 154 "fe/idl.ypp"
{
  AST_Decl                      *dcval;         /* Decl value           */
  UTL_StrList                   *slval;         /* String list          */
  UTL_NameList                  *nlval;         /* Name list            */
  UTL_ExprList                  *elval;         /* Expression list      */
  UTL_LabelList                 *llval;         /* Label list           */
  UTL_DeclList                  *dlval;         /* Declaration list     */
  FE_InterfaceHeader            *ihval;         /* Interface header     */
  FE_OBVHeader                  *vhval;         /* Valuetype header     */
  FE_ComponentHeader            *chval;         /* Component header     */
  FE_HomeHeader                 *hhval;         /* Home header          */
  AST_Expression                *exval;         /* Expression value     */
  AST_UnionLabel                *ulval;         /* Union label          */
  AST_Field                     *ffval;         /* Field value          */
  AST_Field::Visibility         vival;          /* N/A, pub or priv     */
  AST_Expression::ExprType      etval;          /* Expression type      */
  AST_Argument::Direction       dival;          /* Argument direction   */
  AST_Operation::Flags          ofval;          /* Operation flags      */
  FE_Declarator                 *deval;         /* Declarator value     */
  ACE_CDR::Boolean              bval;           /* Boolean value        */
  ACE_CDR::LongLong             ival;           /* Long Long value      */
  ACE_CDR::ULongLong            uival;          /* Unsigned long long   */
  ACE_CDR::Double               dval;           /* Double value         */
  ACE_CDR::Float                fval;           /* Float value          */
  ACE_CDR::Char                 cval;           /* Char value           */
  ACE_CDR::WChar                wcval;          /* WChar value          */
  ACE_CDR::Fixed                fixval;         /* Fixed point value    */
  UTL_String                    *sval;          /* String value         */
  char                          *wsval;         /* WString value        */
  char                          *strval;        /* char * value         */
  Identifier                    *idval;         /* Identifier           */
  UTL_IdList                    *idlist;        /* Identifier list      */
  AST_Decl::NodeType            ntval;          /* Node type value      */
  FE_Utils::T_Param_Info        *pival;         /* Template interface param */
  FE_Utils::T_PARAMLIST_INFO    *plval;         /* List of template params */
  FE_Utils::T_ARGLIST           *alval;         /* List of template args */
}
/* Line 193 of yacc.c.  */
#line 389 "fe/idl.tab.cpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 402 "fe/idl.tab.cpp"

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1339

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  107
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  382
/* YYNRULES -- Number of rules.  */
#define YYNRULES  567
/* YYNRULES -- Number of states.  */
#define YYNSTATES  817

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   340

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   101,    96,     2,
     103,   104,    99,    97,    92,    98,     2,   100,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    91,    86,
      89,    93,    90,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   105,     2,   106,    95,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    87,    94,    88,   102,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    11,    14,    17,    20,
      21,    25,    26,    30,    31,    35,    36,    40,    41,    45,
      46,    50,    51,    55,    56,    60,    61,    65,    66,    70,
      71,    75,    76,    80,    81,    85,    86,    90,    91,    95,
      96,    97,    98,   106,   109,   110,   111,   112,   113,   114,
     126,   129,   132,   133,   135,   138,   139,   140,   149,   150,
     151,   158,   160,   162,   163,   164,   165,   173,   174,   178,
     181,   185,   189,   190,   195,   196,   198,   200,   202,   204,
     207,   209,   210,   211,   212,   220,   221,   222,   223,   232,
     233,   238,   239,   243,   245,   246,   249,   250,   253,   255,
     258,   261,   262,   264,   266,   269,   270,   274,   275,   279,
     282,   283,   284,   288,   289,   293,   294,   298,   299,   303,
     304,   308,   309,   313,   314,   318,   319,   323,   326,   327,
     332,   333,   335,   336,   340,   341,   346,   348,   350,   353,
     356,   357,   358,   359,   360,   370,   372,   374,   376,   378,
     380,   382,   384,   386,   388,   390,   392,   394,   398,   400,
     404,   406,   410,   412,   416,   420,   422,   426,   430,   432,
     436,   440,   444,   446,   449,   452,   455,   457,   459,   463,
     465,   467,   469,   471,   473,   475,   477,   479,   481,   483,
     485,   486,   490,   492,   494,   496,   499,   501,   502,   506,
     508,   510,   512,   514,   516,   518,   520,   522,   524,   526,
     528,   530,   532,   534,   536,   538,   540,   542,   544,   546,
     548,   550,   553,   554,   559,   560,   562,   564,   567,   568,
     573,   574,   576,   578,   580,   582,   584,   587,   589,   592,
     596,   599,   601,   603,   606,   608,   610,   612,   614,   616,
     618,   620,   621,   625,   626,   627,   628,   636,   639,   642,
     643,   644,   647,   648,   649,   655,   656,   660,   661,   665,
     666,   667,   668,   669,   670,   671,   686,   688,   690,   692,
     694,   696,   698,   701,   704,   705,   706,   707,   713,   714,
     718,   721,   724,   725,   726,   730,   731,   732,   738,   739,
     743,   745,   747,   748,   749,   750,   751,   761,   764,   765,
     770,   771,   773,   774,   775,   782,   785,   786,   787,   793,
     800,   801,   802,   809,   811,   813,   814,   815,   822,   824,
     826,   827,   831,   834,   837,   838,   839,   840,   846,   848,
     850,   851,   852,   853,   854,   864,   865,   866,   867,   868,
     878,   879,   880,   881,   882,   892,   893,   894,   895,   896,
     907,   909,   911,   912,   914,   916,   917,   918,   919,   927,
     928,   932,   933,   938,   941,   942,   947,   948,   949,   950,
     956,   957,   961,   962,   967,   970,   971,   976,   977,   978,
     979,   985,   987,   989,   991,   993,   995,   997,   999,  1000,
    1001,  1008,  1009,  1010,  1011,  1018,  1019,  1020,  1021,  1028,
    1029,  1030,  1031,  1038,  1039,  1042,  1043,  1048,  1049,  1053,
    1057,  1059,  1061,  1064,  1065,  1066,  1067,  1075,  1076,  1077,
    1084,  1085,  1089,  1090,  1093,  1094,  1095,  1099,  1100,  1104,
    1105,  1109,  1110,  1114,  1115,  1119,  1120,  1124,  1125,  1129,
    1133,  1135,  1137,  1141,  1144,  1146,  1147,  1151,  1155,  1159,
    1160,  1164,  1165,  1166,  1167,  1168,  1169,  1170,  1184,  1185,
    1189,  1190,  1193,  1194,  1195,  1196,  1202,  1205,  1206,  1208,
    1209,  1213,  1214,  1218,  1219,  1220,  1227,  1228,  1229,  1236,
    1238,  1240,  1242,  1244,  1246,  1249,  1253,  1254,  1255,  1256,
    1265,  1269,  1273,  1276,  1277,  1281,  1282,  1283,  1284,  1293,
    1295,  1297,  1299,  1301,  1303,  1305,  1307,  1309,  1311,  1313,
    1315,  1318,  1321,  1322,  1327,  1328,  1331,  1337,  1340,  1344,
    1345,  1347,  1348,  1349,  1350,  1351,  1361,  1364,  1367,  1368,
    1369,  1373,  1374,  1378,  1379,  1383,  1387,  1391,  1394,  1398,
    1399,  1401,  1404,  1405,  1406,  1412,  1413,  1414,  1420,  1423,
    1424,  1425,  1429,  1430,  1434,  1435,  1439,  1440
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     108,     0,    -1,   109,    -1,   109,   110,    -1,    -1,   112,
      -1,   134,    86,    -1,   146,    86,    -1,   109,   110,    -1,
      -1,   218,   113,    86,    -1,    -1,   380,   114,    86,    -1,
      -1,   381,   115,    86,    -1,    -1,   200,   116,    86,    -1,
      -1,   329,   117,    86,    -1,    -1,   149,   118,    86,    -1,
      -1,   129,   119,    86,    -1,    -1,   159,   120,    86,    -1,
      -1,   382,   121,    86,    -1,    -1,   410,   122,    86,    -1,
      -1,   435,   123,    86,    -1,    -1,   461,   124,    86,    -1,
      -1,   476,   125,    86,    -1,    -1,     1,   126,    86,    -1,
      -1,     5,   128,   195,    -1,    -1,    -1,    -1,   127,   130,
      87,   131,   111,   132,    88,    -1,   127,    89,    -1,    -1,
      -1,    -1,    -1,    -1,   133,   135,   454,   136,    90,   137,
      87,   138,   140,   139,    88,    -1,   142,   141,    -1,   141,
     142,    -1,    -1,   112,    -1,   143,    86,    -1,    -1,    -1,
      72,   195,   144,    89,   458,    90,   145,   198,    -1,    -1,
      -1,   133,   147,   473,    90,   148,   198,    -1,   150,    -1,
     199,    -1,    -1,    -1,    -1,   156,   151,    87,   152,   182,
     153,    88,    -1,    -1,     6,   155,   198,    -1,   154,   157,
      -1,    41,   154,   157,    -1,    42,   154,   157,    -1,    -1,
      91,   173,   158,   192,    -1,    -1,   160,    -1,   165,    -1,
     175,    -1,   176,    -1,    43,   161,    -1,   161,    -1,    -1,
      -1,    -1,   169,   162,    87,   163,   177,   164,    88,    -1,
      -1,    -1,    -1,    42,   169,   166,    87,   167,   182,   168,
      88,    -1,    -1,   171,   157,   170,   174,    -1,    -1,    49,
     172,   198,    -1,    48,    -1,    -1,    47,   192,    -1,    -1,
      42,   171,    -1,   171,    -1,   171,   222,    -1,   177,   178,
      -1,    -1,   179,    -1,   183,    -1,   341,    86,    -1,    -1,
      46,   180,   257,    -1,    -1,    45,   181,   257,    -1,   182,
     183,    -1,    -1,    -1,   218,   184,    86,    -1,    -1,   380,
     185,    86,    -1,    -1,   381,   186,    86,    -1,    -1,   200,
     187,    86,    -1,    -1,   329,   188,    86,    -1,    -1,   318,
     189,    86,    -1,    -1,   334,   190,    86,    -1,    -1,     1,
     191,    86,    -1,   195,   193,    -1,    -1,   193,    92,   194,
     195,    -1,    -1,   198,    -1,    -1,    81,   196,   198,    -1,
      -1,   195,    81,   197,   198,    -1,     3,    -1,   154,    -1,
      41,   154,    -1,    42,   154,    -1,    -1,    -1,    -1,    -1,
       4,   201,   205,   202,   198,   203,    93,   204,   206,    -1,
     237,    -1,   242,    -1,   243,    -1,   244,    -1,   240,    -1,
     241,    -1,   303,    -1,   307,    -1,   195,    -1,   207,    -1,
     208,    -1,   209,    -1,   208,    94,   209,    -1,   210,    -1,
     209,    95,   210,    -1,   211,    -1,   210,    96,   211,    -1,
     212,    -1,   211,    82,   212,    -1,   211,    83,   212,    -1,
     213,    -1,   212,    97,   213,    -1,   212,    98,   213,    -1,
     214,    -1,   213,    99,   214,    -1,   213,   100,   214,    -1,
     213,   101,   214,    -1,   215,    -1,    97,   215,    -1,    98,
     215,    -1,   102,   215,    -1,   195,    -1,   216,    -1,   103,
     207,   104,    -1,    73,    -1,    74,    -1,    75,    -1,    85,
      -1,    76,    -1,    84,    -1,    78,    -1,    77,    -1,    79,
      -1,    80,    -1,   207,    -1,    -1,     7,   219,   220,    -1,
     249,    -1,   263,    -1,   287,    -1,    40,   235,    -1,   227,
      -1,    -1,   222,   221,   228,    -1,   223,    -1,   226,    -1,
     224,    -1,   225,    -1,   195,    -1,   237,    -1,   240,    -1,
     242,    -1,   244,    -1,   243,    -1,   241,    -1,   245,    -1,
     246,    -1,   296,    -1,   303,    -1,   307,    -1,   302,    -1,
     249,    -1,   263,    -1,   287,    -1,   285,    -1,   286,    -1,
     231,   229,    -1,    -1,   229,    92,   230,   231,    -1,    -1,
     235,    -1,   236,    -1,   235,   233,    -1,    -1,   233,    92,
     234,   235,    -1,    -1,   198,    -1,   311,    -1,   238,    -1,
     239,    -1,     8,    -1,     8,     8,    -1,     9,    -1,    10,
       8,    -1,    10,     8,     8,    -1,    10,     9,    -1,    11,
      -1,    12,    -1,     8,    11,    -1,    17,    -1,    13,    -1,
      14,    -1,    15,    -1,    16,    -1,    18,    -1,    19,    -1,
      -1,    20,   248,   198,    -1,    -1,    -1,    -1,   247,   250,
      87,   251,   253,   252,    88,    -1,   255,   254,    -1,   254,
     255,    -1,    -1,    -1,   256,   257,    -1,    -1,    -1,   222,
     258,   228,   259,    86,    -1,    -1,     1,   260,    86,    -1,
      -1,    21,   262,   198,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   261,    22,   264,   103,   265,   270,   266,   104,   267,
      87,   268,   271,   269,    88,    -1,   237,    -1,   242,    -1,
     243,    -1,   244,    -1,   287,    -1,   195,    -1,   273,   272,
      -1,   272,   273,    -1,    -1,    -1,    -1,   277,   274,   283,
     275,    86,    -1,    -1,     1,   276,    86,    -1,   279,   278,
      -1,   278,   279,    -1,    -1,    -1,    29,   280,    91,    -1,
      -1,    -1,    28,   281,   207,   282,    91,    -1,    -1,   222,
     284,   231,    -1,   247,    -1,   261,    -1,    -1,    -1,    -1,
      -1,    23,   288,   198,   289,    87,   290,   292,   291,    88,
      -1,   295,   293,    -1,    -1,   293,    92,   294,   295,    -1,
      -1,     3,    -1,    -1,    -1,   299,    92,   297,   217,   298,
      90,    -1,   299,    90,    -1,    -1,    -1,    24,   300,    89,
     301,   223,    -1,    17,    89,   217,    92,   207,    90,    -1,
      -1,    -1,   306,    89,   304,   217,   305,    90,    -1,   306,
      -1,    25,    -1,    -1,    -1,   310,    89,   308,   217,   309,
      90,    -1,   310,    -1,    26,    -1,    -1,   198,   312,   313,
      -1,   315,   314,    -1,   314,   315,    -1,    -1,    -1,    -1,
     105,   316,   217,   317,   106,    -1,   319,    -1,   324,    -1,
      -1,    -1,    -1,    -1,    30,   320,    31,   321,   363,   322,
     232,   323,   365,    -1,    -1,    -1,    -1,    -1,    31,   325,
     363,   326,   232,   327,   368,   328,   371,    -1,    -1,    -1,
      -1,    -1,    27,   330,   198,   331,    87,   332,   254,   333,
      88,    -1,    -1,    -1,    -1,    -1,   339,   340,   335,     3,
     336,   354,   337,   365,   338,   374,    -1,    32,    -1,    33,
      -1,    -1,   363,    -1,    34,    -1,    -1,    -1,    -1,    44,
     342,     3,   343,   345,   344,   365,    -1,    -1,   103,   346,
     104,    -1,    -1,   103,   347,   348,   104,    -1,   351,   349,
      -1,    -1,   349,    92,   350,   351,    -1,    -1,    -1,    -1,
      35,   352,   363,   353,   231,    -1,    -1,   103,   355,   104,
      -1,    -1,   103,   356,   357,   104,    -1,   360,   358,    -1,
      -1,   358,    92,   359,   360,    -1,    -1,    -1,    -1,   364,
     361,   363,   362,   231,    -1,   224,    -1,   303,    -1,   307,
      -1,   195,    -1,    35,    -1,    36,    -1,    37,    -1,    -1,
      -1,    38,   366,   103,   367,   192,   104,    -1,    -1,    -1,
      -1,    55,   369,   103,   370,   192,   104,    -1,    -1,    -1,
      -1,    62,   372,   103,   373,   192,   104,    -1,    -1,    -1,
      -1,    39,   375,   103,   376,   377,   104,    -1,    -1,    75,
     378,    -1,    -1,   378,    92,   379,    75,    -1,    -1,    63,
     195,    75,    -1,    64,   195,    75,    -1,   384,    -1,   383,
      -1,    50,   198,    -1,    -1,    -1,    -1,   388,   385,    87,
     386,   393,   387,    88,    -1,    -1,    -1,    50,   198,   389,
     391,   390,   174,    -1,    -1,    91,   392,   195,    -1,    -1,
     393,   394,    -1,    -1,    -1,   402,   395,    86,    -1,    -1,
     404,   396,    86,    -1,    -1,   407,   397,    86,    -1,    -1,
     408,   398,    86,    -1,    -1,   409,   399,    86,    -1,    -1,
     318,   400,    86,    -1,    -1,   472,   401,    86,    -1,    60,
     403,   198,    -1,   195,    -1,    19,    -1,   405,   403,   198,
      -1,    65,   406,    -1,    58,    -1,    -1,    52,   195,   198,
      -1,    61,   195,   198,    -1,    51,   195,   198,    -1,    -1,
     412,   411,   422,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,   413,   198,   414,   419,   415,   174,   416,    66,   417,
     195,   418,   421,    -1,    -1,    91,   420,   195,    -1,    -1,
      59,   195,    -1,    -1,    -1,    -1,    87,   423,   425,   424,
      88,    -1,   425,   426,    -1,    -1,   183,    -1,    -1,   429,
     427,    86,    -1,    -1,   432,   428,    86,    -1,    -1,    -1,
      44,   198,   430,   345,   431,   365,    -1,    -1,    -1,    54,
     198,   433,   345,   434,   365,    -1,   448,    -1,   439,    -1,
     436,    -1,   438,    -1,   437,    -1,    53,   198,    -1,    42,
      53,   198,    -1,    -1,    -1,    -1,   443,   446,   440,    87,
     441,   182,   442,    88,    -1,    42,    53,   198,    -1,    43,
      53,   198,    -1,    53,   198,    -1,    -1,   157,   447,   174,
      -1,    -1,    -1,    -1,   452,   446,   449,    87,   450,   177,
     451,    88,    -1,   444,    -1,   445,    -1,    67,    -1,    20,
      -1,    21,    -1,    53,    -1,    24,    -1,     6,    -1,    49,
      -1,    23,    -1,    27,    -1,     4,   205,    -1,   457,   455,
      -1,    -1,   455,    92,   456,   457,    -1,    -1,   453,     3,
      -1,    24,    89,     3,    90,     3,    -1,   460,   459,    -1,
     459,    92,   460,    -1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    70,   462,     3,   463,    87,   464,   466,   465,    88,
      -1,   468,   467,    -1,   467,   468,    -1,    -1,    -1,   402,
     469,    86,    -1,    -1,   404,   470,    86,    -1,    -1,   318,
     471,    86,    -1,    68,   195,     3,    -1,    69,   195,     3,
      -1,   475,   474,    -1,   474,    92,   475,    -1,    -1,   206,
      -1,   477,   480,    -1,    -1,    -1,    71,   478,     3,   479,
     391,    -1,    -1,    -1,    87,   481,   483,   482,    88,    -1,
     483,   484,    -1,    -1,    -1,   402,   485,    86,    -1,    -1,
     404,   486,    86,    -1,    -1,   318,   487,    86,    -1,    -1,
     472,   488,    86,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   361,   361,   364,   365,   369,   372,   375,   381,   386,
     385,   396,   395,   406,   405,   416,   415,   426,   425,   436,
     435,   446,   445,   456,   455,   466,   465,   476,   475,   486,
     485,   496,   495,   506,   505,   516,   515,   530,   529,   542,
     581,   586,   541,   603,   611,   626,   636,   667,   671,   610,
     695,   699,   700,   704,   705,   710,   716,   709,   804,   810,
     803,   881,   882,   887,   926,   931,   886,   949,   948,   962,
    1000,  1031,  1065,  1064,  1076,  1083,  1084,  1085,  1086,  1090,
    1101,  1106,  1150,  1155,  1105,  1184,  1228,  1233,  1182,  1252,
    1250,  1292,  1291,  1305,  1311,  1318,  1325,  1332,  1358,  1385,
    1450,  1451,  1455,  1456,  1457,  1463,  1462,  1473,  1472,  1485,
    1486,  1491,  1490,  1501,  1500,  1511,  1510,  1521,  1520,  1531,
    1530,  1541,  1540,  1551,  1550,  1561,  1560,  1574,  1587,  1585,
    1613,  1620,  1631,  1630,  1658,  1656,  1683,  1695,  1741,  1769,
    1800,  1805,  1810,  1815,  1799,  1886,  1887,  1888,  1889,  1890,
    1891,  1892,  1904,  1909,  1978,  1980,  1982,  1983,  1997,  1998,
    2012,  2013,  2026,  2027,  2037,  2050,  2051,  2061,  2074,  2075,
    2085,  2095,  2108,  2109,  2119,  2129,  2142,  2193,  2194,  2203,
    2208,  2214,  2222,  2227,  2232,  2238,  2242,  2247,  2252,  2260,
    2330,  2329,  2340,  2345,  2350,  2355,  2382,  2391,  2390,  2462,
    2463,  2467,  2475,  2476,  2504,  2505,  2506,  2507,  2508,  2509,
    2510,  2511,  2515,  2516,  2517,  2518,  2522,  2523,  2524,  2528,
    2529,  2533,  2546,  2544,  2572,  2579,  2580,  2584,  2597,  2595,
    2623,  2630,  2647,  2666,  2667,  2671,  2676,  2681,  2689,  2694,
    2699,  2707,  2712,  2717,  2725,  2733,  2738,  2746,  2754,  2762,
    2770,  2779,  2778,  2794,  2828,  2833,  2793,  2852,  2855,  2856,
    2860,  2860,  2870,  2875,  2869,  2938,  2937,  2952,  2951,  2966,
    2971,  3007,  3012,  3069,  3074,  2965,  3098,  3106,  3120,  3130,
    3138,  3139,  3247,  3250,  3251,  3256,  3261,  3255,  3297,  3296,
    3310,  3321,  3341,  3349,  3348,  3364,  3369,  3363,  3386,  3385,
    3438,  3462,  3487,  3492,  3525,  3530,  3486,  3556,  3561,  3559,
    3566,  3570,  3607,  3612,  3605,  3693,  3754,  3764,  3753,  3777,
    3787,  3792,  3785,  3839,  3865,  3875,  3880,  3873,  3916,  3941,
    3950,  3949,  3991,  4002,  4022,  4030,  4035,  4029,  4097,  4098,
    4103,  4108,  4113,  4118,  4102,  4187,  4192,  4197,  4202,  4186,
    4280,  4285,  4315,  4320,  4279,  4338,  4343,  4408,  4413,  4336,
    4450,  4456,  4463,  4470,  4471,  4483,  4489,  4531,  4482,  4553,
    4552,  4563,  4562,  4575,  4580,  4578,  4585,  4590,  4595,  4589,
    4636,  4635,  4646,  4645,  4658,  4663,  4661,  4668,  4673,  4678,
    4672,  4725,  4733,  4734,  4735,  4845,  4850,  4855,  4864,  4869,
    4863,  4881,  4889,  4894,  4888,  4906,  4914,  4919,  4913,  4931,
    4939,  4944,  4938,  4956,  4963,  4976,  4974,  5000,  5007,  5036,
    5074,  5075,  5079,  5109,  5149,  5154,  5108,  5173,  5178,  5171,
    5221,  5220,  5231,  5238,  5239,  5244,  5243,  5254,  5253,  5264,
    5263,  5274,  5273,  5284,  5283,  5294,  5293,  5304,  5303,  5315,
    5406,  5413,  5439,  5546,  5556,  5562,  5568,  5641,  5714,  5789,
    5788,  5838,  5843,  5848,  5853,  5858,  5863,  5837,  5918,  5917,
    5928,  5935,  5942,  5950,  5955,  5949,  5967,  5968,  5972,  5974,
    5973,  5984,  5983,  5998,  6022,  5996,  6050,  6078,  6048,  6104,
    6105,  6106,  6110,  6111,  6115,  6143,  6174,  6219,  6224,  6172,
    6241,  6251,  6270,  6282,  6281,  6321,  6371,  6376,  6319,  6393,
    6398,  6406,  6411,  6416,  6421,  6426,  6431,  6436,  6441,  6446,
    6451,  6460,  6495,  6494,  6516,  6523,  6549,  6567,  6578,  6598,
    6605,  6616,  6621,  6640,  6645,  6615,  6660,  6667,  6672,  6679,
    6678,  6687,  6686,  6695,  6694,  6706,  6776,  6827,  6843,  6857,
    6864,  6924,  6929,  6934,  6928,  6995,  7000,  6994,  7015,  7016,
    7021,  7020,  7031,  7030,  7041,  7040,  7051,  7050
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "IDL_CONST", "IDL_MODULE",
  "IDL_INTERFACE", "IDL_TYPEDEF", "IDL_LONG", "IDL_SHORT", "IDL_UNSIGNED",
  "IDL_DOUBLE", "IDL_FLOAT", "IDL_CHAR", "IDL_WCHAR", "IDL_OCTET",
  "IDL_BOOLEAN", "IDL_FIXED", "IDL_ANY", "IDL_OBJECT", "IDL_STRUCT",
  "IDL_UNION", "IDL_SWITCH", "IDL_ENUM", "IDL_SEQUENCE", "IDL_STRING",
  "IDL_WSTRING", "IDL_EXCEPTION", "IDL_CASE", "IDL_DEFAULT",
  "IDL_READONLY", "IDL_ATTRIBUTE", "IDL_ONEWAY", "IDL_IDEMPOTENT",
  "IDL_VOID", "IDL_IN", "IDL_OUT", "IDL_INOUT", "IDL_RAISES",
  "IDL_CONTEXT", "IDL_NATIVE", "IDL_LOCAL", "IDL_ABSTRACT", "IDL_CUSTOM",
  "IDL_FACTORY", "IDL_PRIVATE", "IDL_PUBLIC", "IDL_SUPPORTS",
  "IDL_TRUNCATABLE", "IDL_VALUETYPE", "IDL_COMPONENT", "IDL_CONSUMES",
  "IDL_EMITS", "IDL_EVENTTYPE", "IDL_FINDER", "IDL_GETRAISES", "IDL_HOME",
  "IDL_IMPORT", "IDL_MULTIPLE", "IDL_PRIMARYKEY", "IDL_PROVIDES",
  "IDL_PUBLISHES", "IDL_SETRAISES", "IDL_TYPEID", "IDL_TYPEPREFIX",
  "IDL_USES", "IDL_MANAGES", "IDL_TYPENAME", "IDL_PORT", "IDL_MIRRORPORT",
  "IDL_PORTTYPE", "IDL_CONNECTOR", "IDL_ALIAS", "IDL_INTEGER_LITERAL",
  "IDL_UINTEGER_LITERAL", "IDL_STRING_LITERAL", "IDL_CHARACTER_LITERAL",
  "IDL_FLOATING_PT_LITERAL", "IDL_FIXED_PT_LITERAL", "IDL_TRUETOK",
  "IDL_FALSETOK", "IDL_SCOPE_DELIMITOR", "IDL_LEFT_SHIFT",
  "IDL_RIGHT_SHIFT", "IDL_WCHAR_LITERAL", "IDL_WSTRING_LITERAL", "';'",
  "'{'", "'}'", "'<'", "'>'", "':'", "','", "'='", "'|'", "'^'", "'&'",
  "'+'", "'-'", "'*'", "'/'", "'%'", "'~'", "'('", "')'", "'['", "']'",
  "$accept", "start", "definitions", "definition",
  "at_least_one_definition", "fixed_definition", "@1", "@2", "@3", "@4",
  "@5", "@6", "@7", "@8", "@9", "@10", "@11", "@12", "@13", "@14",
  "module_header", "@15", "module", "@16", "@17", "@18",
  "template_module_header", "template_module", "@19", "@20", "@21", "@22",
  "@23", "at_least_one_tpl_definition", "tpl_definitions",
  "tpl_definition", "template_module_ref", "@24", "@25",
  "template_module_inst", "@26", "@27", "interface_def", "interface",
  "@28", "@29", "@30", "interface_decl", "@31", "interface_header",
  "inheritance_spec", "@32", "value_def", "valuetype",
  "value_concrete_decl", "@33", "@34", "@35", "value_abs_decl", "@36",
  "@37", "@38", "value_header", "@39", "value_decl", "@40",
  "opt_truncatable", "supports_spec", "value_forward_decl",
  "value_box_decl", "value_elements", "value_element", "state_member",
  "@41", "@42", "exports", "export", "@43", "@44", "@45", "@46", "@47",
  "@48", "@49", "@50", "at_least_one_scoped_name", "scoped_names", "@51",
  "scoped_name", "@52", "@53", "id", "interface_forward", "const_dcl",
  "@54", "@55", "@56", "@57", "const_type", "expression", "const_expr",
  "or_expr", "xor_expr", "and_expr", "shift_expr", "add_expr", "mult_expr",
  "unary_expr", "primary_expr", "literal", "positive_int_expr", "type_dcl",
  "@58", "type_declarator", "@59", "type_spec", "simple_type_spec",
  "base_type_spec", "template_type_spec", "constructed_type_spec",
  "constructed_forward_type_spec", "at_least_one_declarator",
  "declarators", "@60", "declarator", "at_least_one_simple_declarator",
  "simple_declarators", "@61", "simple_declarator", "complex_declarator",
  "integer_type", "signed_int", "unsigned_int", "floating_pt_type",
  "fixed_type", "char_type", "octet_type", "boolean_type", "any_type",
  "object_type", "struct_decl", "@62", "struct_type", "@63", "@64", "@65",
  "at_least_one_member", "members", "member", "@66", "member_i", "@67",
  "@68", "@69", "union_decl", "@70", "union_type", "@71", "@72", "@73",
  "@74", "@75", "@76", "switch_type_spec", "at_least_one_case_branch",
  "case_branches", "case_branch", "@77", "@78", "@79",
  "at_least_one_case_label", "case_labels", "case_label", "@80", "@81",
  "@82", "element_spec", "@83", "struct_forward_type",
  "union_forward_type", "enum_type", "@84", "@85", "@86", "@87",
  "at_least_one_enumerator", "enumerators", "@88", "enumerator",
  "sequence_type_spec", "@89", "@90", "seq_head", "@91", "@92",
  "fixed_type_spec", "string_type_spec", "@93", "@94", "string_head",
  "wstring_type_spec", "@95", "@96", "wstring_head", "array_declarator",
  "@97", "at_least_one_array_dim", "array_dims", "array_dim", "@98", "@99",
  "attribute", "attribute_readonly", "@100", "@101", "@102", "@103",
  "attribute_readwrite", "@104", "@105", "@106", "@107", "exception",
  "@108", "@109", "@110", "@111", "operation", "@112", "@113", "@114",
  "@115", "opt_op_attribute", "op_type_spec", "init_decl", "@116", "@117",
  "@118", "init_parameter_list", "@119", "@120",
  "at_least_one_in_parameter", "in_parameters", "@121", "in_parameter",
  "@122", "@123", "parameter_list", "@124", "@125",
  "at_least_one_parameter", "parameters", "@126", "parameter", "@127",
  "@128", "param_type_spec", "direction", "opt_raises", "@129", "@130",
  "opt_getraises", "@131", "@132", "opt_setraises", "@133", "@134",
  "opt_context", "@135", "@136", "at_least_one_string_literal",
  "string_literals", "@137", "typeid_dcl", "typeprefix_dcl", "component",
  "component_forward_decl", "component_decl", "@138", "@139", "@140",
  "component_header", "@141", "@142", "component_inheritance_spec", "@143",
  "component_exports", "component_export", "@144", "@145", "@146", "@147",
  "@148", "@149", "@150", "provides_decl", "interface_type", "uses_decl",
  "uses_opt_multiple", "opt_multiple", "emits_decl", "publishes_decl",
  "consumes_decl", "home_decl", "@151", "home_header", "@152", "@153",
  "@154", "@155", "@156", "@157", "home_inheritance_spec", "@158",
  "primary_key_spec", "home_body", "@159", "@160", "home_exports",
  "home_export", "@161", "@162", "factory_decl", "@163", "@164",
  "finder_decl", "@165", "@166", "event", "event_forward_decl",
  "event_concrete_forward_decl", "event_abs_forward_decl",
  "event_abs_decl", "@167", "@168", "@169", "event_abs_header",
  "event_custom_header", "event_plain_header", "event_rest_of_header",
  "@170", "event_decl", "@171", "@172", "@173", "event_header",
  "formal_parameter_type", "at_least_one_formal_parameter",
  "formal_parameters", "@174", "formal_parameter",
  "at_least_one_formal_parameter_name", "formal_parameter_names",
  "formal_parameter_name", "porttype_decl", "@175", "@176", "@177", "@178",
  "at_least_one_port_export", "port_exports", "port_export", "@179",
  "@180", "@181", "extended_port_decl", "at_least_one_actual_parameter",
  "actual_parameters", "actual_parameter", "connector_decl",
  "connector_header", "@182", "@183", "connector_body", "@184", "@185",
  "connector_exports", "connector_export", "@186", "@187", "@188", "@189", 0
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,    59,   123,   125,    60,
      62,    58,    44,    61,   124,    94,    38,    43,    45,    42,
      47,    37,   126,    40,    41,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   107,   108,   109,   109,   110,   110,   110,   111,   113,
     112,   114,   112,   115,   112,   116,   112,   117,   112,   118,
     112,   119,   112,   120,   112,   121,   112,   122,   112,   123,
     112,   124,   112,   125,   112,   126,   112,   128,   127,   130,
     131,   132,   129,   133,   135,   136,   137,   138,   139,   134,
     140,   141,   141,   142,   142,   144,   145,   143,   147,   148,
     146,   149,   149,   151,   152,   153,   150,   155,   154,   156,
     156,   156,   158,   157,   157,   159,   159,   159,   159,   160,
     160,   162,   163,   164,   161,   166,   167,   168,   165,   170,
     169,   172,   171,   173,   173,   174,   174,   175,   175,   176,
     177,   177,   178,   178,   178,   180,   179,   181,   179,   182,
     182,   184,   183,   185,   183,   186,   183,   187,   183,   188,
     183,   189,   183,   190,   183,   191,   183,   192,   194,   193,
     193,   195,   196,   195,   197,   195,   198,   199,   199,   199,
     201,   202,   203,   204,   200,   205,   205,   205,   205,   205,
     205,   205,   205,   205,   206,   207,   208,   208,   209,   209,
     210,   210,   211,   211,   211,   212,   212,   212,   213,   213,
     213,   213,   214,   214,   214,   214,   215,   215,   215,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   217,
     219,   218,   218,   218,   218,   218,   218,   221,   220,   222,
     222,   223,   223,   223,   224,   224,   224,   224,   224,   224,
     224,   224,   225,   225,   225,   225,   226,   226,   226,   227,
     227,   228,   230,   229,   229,   231,   231,   232,   234,   233,
     233,   235,   236,   237,   237,   238,   238,   238,   239,   239,
     239,   240,   240,   240,   241,   242,   242,   243,   244,   245,
     246,   248,   247,   250,   251,   252,   249,   253,   254,   254,
     256,   255,   258,   259,   257,   260,   257,   262,   261,   264,
     265,   266,   267,   268,   269,   263,   270,   270,   270,   270,
     270,   270,   271,   272,   272,   274,   275,   273,   276,   273,
     277,   278,   278,   280,   279,   281,   282,   279,   284,   283,
     285,   286,   288,   289,   290,   291,   287,   292,   294,   293,
     293,   295,   297,   298,   296,   296,   300,   301,   299,   302,
     304,   305,   303,   303,   306,   308,   309,   307,   307,   310,
     312,   311,   313,   314,   314,   316,   317,   315,   318,   318,
     320,   321,   322,   323,   319,   325,   326,   327,   328,   324,
     330,   331,   332,   333,   329,   335,   336,   337,   338,   334,
     339,   339,   339,   340,   340,   342,   343,   344,   341,   346,
     345,   347,   345,   348,   350,   349,   349,   352,   353,   351,
     355,   354,   356,   354,   357,   359,   358,   358,   361,   362,
     360,   363,   363,   363,   363,   364,   364,   364,   366,   367,
     365,   365,   369,   370,   368,   368,   372,   373,   371,   371,
     375,   376,   374,   374,   377,   379,   378,   378,   380,   381,
     382,   382,   383,   385,   386,   387,   384,   389,   390,   388,
     392,   391,   391,   393,   393,   395,   394,   396,   394,   397,
     394,   398,   394,   399,   394,   400,   394,   401,   394,   402,
     403,   403,   404,   405,   406,   406,   407,   408,   409,   411,
     410,   413,   414,   415,   416,   417,   418,   412,   420,   419,
     419,   421,   421,   423,   424,   422,   425,   425,   426,   427,
     426,   428,   426,   430,   431,   429,   433,   434,   432,   435,
     435,   435,   436,   436,   437,   438,   440,   441,   442,   439,
     443,   444,   445,   447,   446,   449,   450,   451,   448,   452,
     452,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   454,   456,   455,   455,   457,   457,   458,   459,   459,
     460,   462,   463,   464,   465,   461,   466,   467,   467,   469,
     468,   470,   468,   471,   468,   472,   472,   473,   474,   474,
     475,   476,   478,   479,   477,   481,   482,   480,   483,   483,
     485,   484,   486,   484,   487,   484,   488,   484
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     2,     2,     2,     0,
       3,     0,     3,     0,     3,     0,     3,     0,     3,     0,
       3,     0,     3,     0,     3,     0,     3,     0,     3,     0,
       3,     0,     3,     0,     3,     0,     3,     0,     3,     0,
       0,     0,     7,     2,     0,     0,     0,     0,     0,    11,
       2,     2,     0,     1,     2,     0,     0,     8,     0,     0,
       6,     1,     1,     0,     0,     0,     7,     0,     3,     2,
       3,     3,     0,     4,     0,     1,     1,     1,     1,     2,
       1,     0,     0,     0,     7,     0,     0,     0,     8,     0,
       4,     0,     3,     1,     0,     2,     0,     2,     1,     2,
       2,     0,     1,     1,     2,     0,     3,     0,     3,     2,
       0,     0,     3,     0,     3,     0,     3,     0,     3,     0,
       3,     0,     3,     0,     3,     0,     3,     2,     0,     4,
       0,     1,     0,     3,     0,     4,     1,     1,     2,     2,
       0,     0,     0,     0,     9,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     3,
       1,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     2,     2,     2,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     3,     1,     1,     1,     2,     1,     0,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     0,     4,     0,     1,     1,     2,     0,     4,
       0,     1,     1,     1,     1,     1,     2,     1,     2,     3,
       2,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     0,     3,     0,     0,     0,     7,     2,     2,     0,
       0,     2,     0,     0,     5,     0,     3,     0,     3,     0,
       0,     0,     0,     0,     0,    14,     1,     1,     1,     1,
       1,     1,     2,     2,     0,     0,     0,     5,     0,     3,
       2,     2,     0,     0,     3,     0,     0,     5,     0,     3,
       1,     1,     0,     0,     0,     0,     9,     2,     0,     4,
       0,     1,     0,     0,     6,     2,     0,     0,     5,     6,
       0,     0,     6,     1,     1,     0,     0,     6,     1,     1,
       0,     3,     2,     2,     0,     0,     0,     5,     1,     1,
       0,     0,     0,     0,     9,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     9,     0,     0,     0,     0,    10,
       1,     1,     0,     1,     1,     0,     0,     0,     7,     0,
       3,     0,     4,     2,     0,     4,     0,     0,     0,     5,
       0,     3,     0,     4,     2,     0,     4,     0,     0,     0,
       5,     1,     1,     1,     1,     1,     1,     1,     0,     0,
       6,     0,     0,     0,     6,     0,     0,     0,     6,     0,
       0,     0,     6,     0,     2,     0,     4,     0,     3,     3,
       1,     1,     2,     0,     0,     0,     7,     0,     0,     6,
       0,     3,     0,     2,     0,     0,     3,     0,     3,     0,
       3,     0,     3,     0,     3,     0,     3,     0,     3,     3,
       1,     1,     3,     2,     1,     0,     3,     3,     3,     0,
       3,     0,     0,     0,     0,     0,     0,    13,     0,     3,
       0,     2,     0,     0,     0,     5,     2,     0,     1,     0,
       3,     0,     3,     0,     0,     6,     0,     0,     6,     1,
       1,     1,     1,     1,     2,     3,     0,     0,     0,     8,
       3,     3,     2,     0,     3,     0,     0,     0,     8,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     0,     4,     0,     2,     5,     2,     3,     0,
       1,     0,     0,     0,     0,     9,     2,     2,     0,     0,
       3,     0,     3,     0,     3,     3,     3,     2,     3,     0,
       1,     2,     0,     0,     5,     0,     0,     5,     2,     0,
       0,     3,     0,     3,     0,     3,     0,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     0,     1,    35,   140,    37,    67,   190,   251,
     267,   302,   350,     0,     0,     0,     0,    91,     0,     0,
     461,     0,     0,   531,   552,     3,     5,    39,    21,    58,
       0,     0,    19,    61,    74,    63,    23,    75,    80,    76,
      81,    74,    77,    78,    62,    15,     9,   196,   253,   192,
     301,   193,   219,   220,   194,    17,    11,    13,    25,   421,
     420,   423,    27,   459,    29,   491,   493,   492,   490,    74,
     509,   510,   489,    74,    31,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   136,   231,   195,    74,
       0,    74,    85,    74,     0,    79,    74,     0,   427,   502,
       0,   132,     0,   131,     0,     0,     0,    43,     0,     0,
       0,     0,     6,     7,     0,    94,    69,     0,     0,     0,
     235,   237,     0,   241,   242,   245,   246,   247,   248,   244,
     249,   250,   316,   324,   329,    89,   203,    99,   199,   201,
     202,   200,   204,   233,   234,   205,   209,   206,   208,   207,
     210,   211,   253,   216,     0,   217,   218,   212,     0,   215,
     213,   323,   214,   328,     0,     0,     0,   269,     0,     0,
       0,     0,     0,     0,     0,     0,   503,   496,   505,     0,
       0,   555,   551,    36,   244,   153,   141,   145,   149,   150,
     146,   147,   148,   151,   152,    38,    68,   191,   197,   252,
     268,   303,   351,    70,   500,    71,     0,   501,    92,   432,
     462,     0,   418,   134,   419,   532,   553,    40,    22,     0,
     516,   512,   513,   518,   515,   519,   517,   514,   511,     0,
      45,   524,   179,   180,   181,   183,   186,   185,   187,   188,
     184,   182,     0,     0,     0,     0,   176,   550,   154,   155,
     156,   158,   160,   162,   165,   168,   172,   177,     0,   549,
      20,    93,    72,    64,    24,    82,   236,   243,   238,   240,
       0,     0,    96,   315,   312,   320,   325,    16,    10,   254,
       0,    18,    12,    14,    26,   424,    28,   473,   460,    30,
      96,     0,     0,    32,    34,   559,     0,     0,     0,     0,
      86,   430,   428,   470,   133,     0,     0,   432,     4,   520,
       0,   525,     0,   521,   173,   174,   175,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    59,   547,
       0,   110,   101,   239,   189,     0,   317,     0,    90,     0,
       0,     0,   260,   270,   434,   477,   504,   497,   506,   556,
     142,   231,   198,   224,   225,   226,   232,   304,   352,   110,
       0,    96,   468,   463,   135,   533,   554,     0,    41,     0,
      46,   522,   178,   157,   159,   161,   163,   164,   166,   167,
     169,   170,   171,     0,     0,    73,   130,     0,     0,     0,
       0,    95,   313,   321,   326,   255,   259,     0,     0,   425,
       0,   110,   101,   340,   345,     0,   455,     0,     0,   564,
     338,   339,   560,   562,     0,   566,     0,   558,     0,     0,
     221,     0,   259,     0,   431,   429,     0,    96,     0,     3,
       0,     0,     0,     0,    60,   548,   127,   125,   360,   361,
       0,   109,   117,   111,   121,   119,   123,     0,   113,   115,
     365,   107,   105,     0,   100,   102,   103,     0,     0,   318,
       0,     0,     0,     0,   260,   265,   262,   261,   235,   281,
     276,   277,   278,   279,   271,   280,     0,     0,     0,   445,
       0,   433,   435,   437,   439,   441,   443,   447,     0,     0,
     478,     0,   476,   479,   481,     0,     0,     0,     0,   451,
     450,     0,   454,   453,     0,     0,     0,     0,     0,     0,
       0,   557,   143,   335,   331,   334,   222,   311,   305,   310,
     260,     0,   469,   464,   543,   539,   541,   534,   538,    42,
     526,    47,   523,   128,     0,    66,     0,     0,     0,     0,
       0,   364,   394,   391,   392,   393,   355,   363,     0,     0,
       0,     0,     0,    84,   104,   319,   314,   322,   327,   256,
     258,     0,     0,     0,     0,     0,     0,     0,   426,     0,
       0,     0,     0,     0,     0,   483,   486,   475,     0,     0,
       0,     0,   341,   346,   449,   545,   546,   565,   561,   563,
     452,   567,     0,     0,   332,     0,     0,   307,     0,    88,
       0,     0,     0,     0,     0,   536,     0,     0,   126,   118,
     112,   122,   120,   124,     0,   114,   116,   366,   108,   106,
     266,   263,   272,   458,   456,   457,   446,   436,   438,   440,
     442,   444,   448,     0,     0,   480,   482,   499,   508,     0,
       0,   144,   336,   333,   223,   306,   308,   354,   465,   544,
     540,   542,   535,   537,     0,    53,    39,    48,    52,     0,
     129,   356,     0,     0,     0,   369,   484,   487,   342,   347,
     230,     0,     0,     0,    55,     0,     0,    54,     0,   367,
     264,   273,     0,     0,   401,   401,     0,   405,   227,   337,
     309,   466,     0,    49,    51,   382,   357,   401,     0,   370,
     377,     0,   376,   398,   485,   488,   343,   402,   348,   228,
     472,     0,     0,     0,   401,   368,   288,   295,   293,   274,
     284,   285,   292,     0,   372,   373,     0,   401,     0,   409,
       0,     0,   467,   530,     0,   529,   381,   395,   396,   397,
       0,   387,   388,   358,     0,     0,     0,     0,     0,     0,
     290,   378,   374,   399,   344,   403,   406,   349,   229,   471,
      56,   527,   383,   384,     0,   413,   289,   296,   294,   275,
     283,   298,   286,   291,     0,     0,     0,     0,     0,     0,
       0,   385,   389,   410,   359,     0,     0,     0,   379,   375,
       0,     0,   407,    57,   528,     0,     0,     0,   297,   299,
     287,   400,   404,     0,   386,   390,   411,     0,     0,   408,
     417,     0,   414,   412,   415,     0,   416
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    25,   368,    26,   165,   169,   170,   164,
     168,   114,   109,   118,   171,   173,   175,   179,   180,    77,
      27,    79,    28,   108,   308,   430,    29,    30,   110,   312,
     432,   606,   675,   657,   676,   658,   659,   692,   779,    31,
     111,   383,    32,    33,   117,   331,   440,    34,    80,    35,
     135,   330,    36,    37,    38,   119,   332,   453,    39,   206,
     359,   521,    40,   272,    41,    97,   262,   338,    42,    43,
     388,   454,   455,   552,   551,   387,   441,   537,   548,   549,
     536,   539,   538,   540,   534,   385,   436,   607,   246,   211,
     305,   103,    44,   442,    78,   296,   418,   592,   186,   247,
     334,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     335,   443,    81,   197,   297,   466,   138,   139,   140,   141,
      47,   352,   420,   595,   353,   669,   688,   730,   354,   355,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
      48,    82,    49,   166,   342,   463,   395,   464,   560,   397,
     467,   562,   663,   561,    50,    83,    51,   280,   398,   563,
     664,   698,   747,   474,   719,   748,   720,   749,   787,   744,
     721,   750,   722,   746,   745,   785,   772,   786,    52,    53,
      54,    84,   298,   421,   596,   518,   597,   672,   519,   157,
     339,   460,   158,   271,   390,   159,   160,   340,   461,   161,
     162,   341,   462,   163,   356,   419,   514,   594,   515,   593,
     671,   444,   410,   497,   639,   686,   727,   411,   498,   640,
     687,   729,   445,    85,   299,   422,   598,   446,   614,   678,
     714,   765,   447,   546,   457,   550,   662,   697,   666,   682,
     683,   701,   725,   775,   702,   723,   774,   696,   712,   713,
     740,   763,   795,   741,   764,   796,   547,   742,   704,   726,
     776,   708,   728,   777,   757,   778,   803,   784,   797,   808,
     811,   812,   815,   448,   449,    58,    59,    60,   172,   344,
     480,    61,   209,   361,   302,   360,   399,   481,   569,   570,
     571,   572,   573,   567,   574,   525,   501,   526,   414,   503,
     484,   485,   486,    62,   174,    63,   100,   303,   427,   600,
     673,   710,   363,   426,   732,   288,   345,   491,   400,   492,
     578,   579,   493,   633,   684,   494,   634,   685,    64,    65,
      66,    67,    68,   291,   401,   580,    69,    70,    71,   177,
     290,    72,   292,   402,   581,    73,   229,   230,   313,   433,
     231,   734,   761,   735,    74,   105,   306,   428,   604,   527,
     605,   528,   602,   603,   601,   415,   258,   329,   259,    75,
      76,   106,   307,   182,   295,   416,   349,   417,   507,   508,
     506,   510
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -589
static const yytype_int16 yypact[] =
{
    -589,    52,  1190,  -589,  -589,  -589,  -589,  -589,  -589,  -589,
    -589,  -589,  -589,    65,    86,   146,    12,  -589,    65,    65,
    -589,    37,    37,  -589,  -589,  -589,  -589,     9,  -589,   534,
      54,    74,  -589,  -589,    56,  -589,  -589,  -589,  -589,  -589,
    -589,   167,  -589,  -589,  -589,  -589,  -589,  -589,   108,  -589,
      82,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,
    -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,    58,
    -589,  -589,  -589,    58,  -589,  -589,    69,   116,   200,    37,
      65,   312,    65,    65,    65,    65,  -589,  -589,  -589,    64,
      65,    72,  -589,   136,    65,  -589,    58,    65,   138,   161,
      65,  -589,     5,  -589,    16,   252,   254,  -589,   201,   216,
     632,    36,  -589,  -589,   228,   271,  -589,   255,   261,   262,
      34,  -589,    67,  -589,  -589,  -589,  -589,  -589,  -589,   263,
    -589,  -589,  -589,  -589,  -589,  -589,   269,  -589,  -589,  -589,
    -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,
    -589,  -589,  -589,  -589,    82,  -589,  -589,  -589,   140,  -589,
    -589,   265,  -589,   266,   267,   270,   272,  -589,   274,   275,
     279,   282,   289,   291,   296,   301,  -589,  -589,  -589,   304,
     305,  -589,  -589,  -589,  -589,   269,  -589,  -589,  -589,  -589,
    -589,  -589,  -589,  -589,  -589,   269,  -589,  -589,  -589,  -589,
    -589,  -589,  -589,  -589,   306,  -589,   307,  -589,  -589,   260,
    -589,    65,  -589,  -589,  -589,  -589,  -589,  -589,  -589,   200,
    -589,  -589,  -589,  -589,   268,  -589,  -589,  -589,  -589,   355,
    -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,
    -589,  -589,    51,    51,    51,    36,   269,  -589,  -589,   302,
     303,   313,    91,     3,   105,  -589,  -589,  -589,   309,  -589,
    -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,   354,  -589,
      36,   277,   350,  -589,  -589,  -589,  -589,  -589,  -589,  -589,
     298,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,
     350,   315,   321,  -589,  -589,  -589,    65,    65,   323,   324,
    -589,  -589,  -589,   322,  -589,    65,   325,   260,  -589,  -589,
     411,  -589,   326,   329,  -589,  -589,  -589,   311,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,  -589,   331,
      37,  -589,  -589,  -589,  -589,   333,  -589,    37,  -589,    36,
      36,    36,  -589,  -589,  -589,  -589,  -589,  -589,  -589,   229,
    -589,   328,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,
      37,   350,  -589,  -589,  -589,  -589,  -589,  1268,  -589,   327,
    -589,  -589,  -589,   303,   313,    91,     3,     3,   105,   105,
    -589,  -589,  -589,    65,    36,  -589,   269,  1024,   778,    36,
     225,  -589,  -589,  -589,  -589,  -589,  -589,   253,    80,   413,
     942,  -589,  -589,  -589,  -589,    38,   360,    37,    37,  -589,
    -589,  -589,  -589,  -589,    38,  -589,   339,  -589,   336,   330,
     338,   428,  -589,  1059,   269,  -589,    37,   350,   215,   346,
     348,   434,   351,   632,  -589,  -589,   353,  -589,  -589,  -589,
     358,  -589,  -589,  -589,  -589,  -589,  -589,   581,  -589,  -589,
    -589,  -589,  -589,   359,  -589,  -589,  -589,   364,   361,  -589,
     366,   370,   371,   378,   379,  -589,  -589,  -589,   460,   269,
    -589,  -589,  -589,  -589,  -589,  -589,    37,    37,    37,  -589,
     384,  -589,  -589,  -589,  -589,  -589,  -589,  -589,    65,    65,
    -589,   389,  -589,  -589,  -589,  1141,   860,   452,   489,  -589,
     269,    65,  -589,  -589,    41,    63,   398,   400,   403,    65,
     405,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,
     397,   406,   269,  -589,  -589,  -589,  -589,  -589,  -589,  -589,
    -589,  -589,  -589,  -589,   407,  -589,   409,   423,   424,   425,
     426,  -589,   269,  -589,  -589,  -589,  -589,  -589,   427,   430,
     516,   253,   253,  -589,  -589,  -589,  -589,  -589,  -589,  -589,
    -589,   439,    65,   416,    70,    70,    70,   444,  -589,   445,
     448,   449,   450,   451,   453,  -589,  -589,  -589,   455,   456,
     457,   458,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,
    -589,  -589,    36,    36,   330,    65,   459,   464,   462,  -589,
     477,   473,   474,   476,   475,   215,  1243,    37,  -589,  -589,
    -589,  -589,  -589,  -589,   541,  -589,  -589,  -589,  -589,  -589,
    -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,
    -589,  -589,  -589,   461,   461,  -589,  -589,  -589,  -589,   489,
      65,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,
    -589,  -589,  -589,  -589,    37,  -589,  -589,  -589,  -589,   480,
     269,  -589,   461,   481,   482,   513,  -589,  -589,  -589,  -589,
    -589,   465,   428,    37,   269,   484,   399,  -589,   471,  -589,
    -589,  -589,   472,   533,   537,   537,    65,   522,   486,  -589,
    -589,   269,   490,  -589,  -589,   498,  -589,   537,   168,  -589,
    -589,   499,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,
     521,   578,   500,   264,   537,  -589,  -589,  -589,  -589,  -589,
    -589,  -589,  -589,   489,  -589,   493,   483,   537,   502,   546,
      65,    37,  -589,  -589,   519,  -589,  -589,  -589,  -589,  -589,
     506,  -589,  -589,  -589,   525,    36,   526,   524,    35,   312,
     192,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,   269,
    -589,   530,  -589,   538,   489,   574,  -589,  -589,  -589,  -589,
    -589,  -589,  -589,  -589,    65,   533,    37,    37,   515,    65,
     578,  -589,  -589,  -589,  -589,   535,    65,   539,  -589,  -589,
     512,   527,  -589,  -589,  -589,   264,    65,   529,  -589,  -589,
    -589,  -589,  -589,    37,  -589,  -589,  -589,   536,   554,  -589,
    -589,   540,   542,  -589,  -589,   558,  -589
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -589,  -589,   334,   278,  -589,  -569,  -589,  -589,  -589,  -589,
    -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,
    -528,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,
    -589,  -589,  -589,  -589,  -589,   -39,  -589,  -589,  -589,  -589,
    -589,  -589,  -589,  -589,  -589,  -589,  -589,   276,  -589,  -589,
      68,  -589,  -589,  -589,   623,  -589,  -589,  -589,  -589,  -589,
    -589,  -589,   626,  -589,   280,  -589,  -589,  -255,  -589,  -589,
     244,  -589,  -589,  -589,  -589,  -316,  -350,  -589,  -589,  -589,
    -589,  -589,  -589,  -589,  -589,  -323,  -589,  -589,   -19,  -589,
    -589,   -13,  -589,     8,  -589,  -589,  -589,  -589,   429,    55,
    -102,  -589,   332,   341,   343,    -9,    -7,   -22,    66,  -589,
    -307,    13,  -589,  -589,  -589,   -33,   281,  -416,  -589,  -589,
    -589,    89,  -589,  -589,  -567,   -21,  -589,  -589,   -12,  -589,
     -55,  -589,  -589,   -57,   -48,   -54,   -53,   -52,  -589,  -589,
     -30,  -589,   -28,  -589,  -589,  -589,  -589,   236,   319,  -589,
    -212,  -589,  -589,  -589,   -25,  -589,   -23,  -589,  -589,  -589,
    -589,  -589,  -589,  -589,  -589,  -589,   -84,  -589,  -589,  -589,
    -589,  -589,   -83,  -589,  -589,  -589,  -589,  -589,  -589,  -589,
     -34,  -589,  -589,  -589,  -589,  -589,  -589,  -589,    -6,  -589,
    -589,  -589,  -589,  -589,  -589,  -589,   -74,  -589,  -589,  -589,
     -66,  -589,  -589,  -589,  -589,  -589,  -589,  -589,    75,  -589,
    -589,  -320,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,
    -589,  -589,    15,  -589,  -589,  -589,  -589,  -589,  -589,  -589,
    -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -588,  -589,
    -589,  -589,  -589,  -589,  -107,  -589,  -589,  -589,  -589,  -589,
    -589,  -589,  -589,  -125,  -589,  -589,  -471,  -589,  -496,  -589,
    -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,
    -589,  -589,  -589,    17,    18,  -589,  -589,  -589,  -589,  -589,
    -589,  -589,  -589,  -589,   365,  -589,  -589,  -589,  -589,  -589,
    -589,  -589,  -589,  -589,  -589,  -300,   273,  -294,  -589,  -589,
    -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,
    -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,
    -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,
    -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,   602,
    -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,
     243,  -589,  -589,  -103,  -589,  -589,  -589,  -589,  -589,  -589,
    -589,    73,  -589,  -589,  -589,   283,  -589,  -589,   295,  -589,
    -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,  -589,
    -589,  -589
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -508
static const yytype_int16 yytable[] =
{
      87,    88,   102,   104,   193,    98,    99,   156,   137,   248,
      45,   152,   194,   153,   391,    46,   154,    55,   155,    56,
      57,   188,   136,   187,   190,   191,   192,   583,   644,   409,
     189,   543,   392,   393,   394,   346,   716,   655,   456,    86,
      86,    86,   266,   423,   585,   267,   667,   156,   198,   412,
     490,   152,     3,   153,    86,   413,   154,   499,   155,   185,
     195,    17,   136,   717,   718,    94,   586,   196,    86,   199,
     200,   201,   202,    86,   679,   268,   269,   204,   656,   479,
     212,   207,   543,    86,   208,   495,   213,   210,   468,   121,
     122,   214,     7,   125,   126,   127,   128,   213,   107,   482,
     323,   324,   116,    11,   167,   483,   425,   655,   524,   232,
     233,   234,   235,   236,   237,   238,   239,   101,   101,   101,
     240,   241,   213,  -282,   232,   233,   234,   235,   236,   237,
     238,   239,   101,   242,   243,   240,   241,   176,   244,   245,
     112,   176,  -137,   317,   213,   193,   456,   115,   656,   115,
    -138,   213,     7,   194,   245,   115,   181,   203,  -139,   205,
     113,   101,   188,   115,   187,   190,   191,   192,   668,   716,
      86,   189,   523,   321,   322,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,     9,    10,   705,
      11,   132,   133,   134,  -300,    17,   717,   718,   304,    90,
     185,   715,   183,    86,   325,   326,   327,   788,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   184,   743,   799,
     717,   718,   -97,   543,  -422,   133,   134,   115,    86,   805,
     273,   754,   274,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   403,   404,  -494,   101,   132,
     133,   134,   751,   -98,   465,   215,    86,   216,   115,   403,
     404,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,     9,    10,   405,    11,   132,   133,   134,
     406,   101,   248,   350,   351,   524,   642,   458,   217,   405,
      89,    91,   364,   782,   406,    93,    96,   407,   408,   737,
     738,   739,   218,   380,   381,   382,   101,   543,   314,   315,
     316,   386,   376,   377,   260,    86,   378,   379,   386,   261,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,     9,    10,   101,    11,   132,   133,   134,   618,
     619,   424,   263,   470,   471,   472,   473,   264,   543,   265,
     213,   301,   270,   277,   275,   276,   278,   310,   311,   279,
     281,   282,   333,   156,   475,   283,   336,   152,   284,   153,
     434,   136,   154,   544,   155,    45,   285,   286,   136,   469,
      46,   545,    55,   287,    56,    57,   500,   289,   504,   505,
     293,   294,  -495,   101,   300,   500,   318,   337,   319,   328,
       4,   343,   347,     5,     6,     7,     8,   522,   348,   320,
     357,   358,   365,   362,   369,   372,   370,   431,   502,     9,
      10,   371,    11,   384,   544,   389,    12,   511,   542,   512,
     516,   517,   545,  -330,    -8,   513,   529,   530,   531,    13,
      14,    15,    16,   403,   404,   533,   535,   553,    17,    18,
     554,   555,    19,   790,   791,    20,   556,   564,   565,   566,
     557,   558,    21,    22,   476,   477,   559,  -257,   266,    23,
      24,   654,   568,   405,   478,   575,   576,   577,   406,   542,
     807,   407,   408,   582,   587,  -353,   588,   -50,   584,   589,
     248,   591,    86,   608,   599,   609,   590,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   184,   130,   131,   610,
     611,   612,   613,   615,   133,   134,   616,   156,   156,   617,
     622,   152,   152,   153,   153,   620,   154,   154,   155,   155,
     626,   627,   136,   136,   628,   629,   630,   631,   -44,   632,
     -44,   635,   636,   648,   661,   637,   638,   645,  -371,   351,
     647,   623,   624,   625,   -44,   -44,   646,   -44,   -44,   649,
     650,   -44,   651,   652,   665,   544,   677,   680,   700,   681,
     101,   689,   693,   545,   695,   703,   699,   707,   709,   711,
     731,   733,   351,   -44,    86,   752,   753,   -44,   660,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   184,   130,
     131,   -44,  -380,   724,   736,   755,   133,   134,   756,   760,
     762,   766,   769,   783,    45,   541,   801,   768,   792,    46,
     542,    55,   780,    56,    57,   800,   798,    87,   670,   810,
     781,   802,   806,   816,   814,   674,   219,   694,   220,    95,
     809,    92,   367,   767,   813,   429,   496,   641,   309,   544,
     373,   621,   221,   222,   691,   223,   224,   545,   520,   225,
     374,   396,   101,   375,   770,   706,   690,   773,   789,   643,
     804,   459,   366,    87,   670,   178,   532,   794,   653,   435,
       0,   226,   487,     0,    45,   227,     0,   509,     0,    46,
     544,    55,     0,    56,    57,     0,     0,     0,   545,   228,
       0,     0,     0,     0,   542,     0,     0,     0,     0,     0,
       0,     0,   759,     0,     0,   156,   771,    87,   758,   152,
       0,   153,     0,     0,   154,     0,   155,     0,     0,     0,
     136,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   542,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   386,   386,     0,
       0,   351,     0,     0,     0,     0,   793,     0,     0,     0,
       0,     0,     0,   351,     0,     0,     0,     0,     0,   437,
       0,  -362,     5,   351,   386,     8,  -362,  -362,  -362,  -362,
    -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,     9,    10,
       0,    11,     0,  -362,  -362,    12,     0,     0,   403,   404,
     438,   439,  -362,     0,     0,     0,     0,     0,    13,     0,
       0,     0,   450,   451,   452,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    21,    22,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -362,
       0,   437,     0,  -362,     5,     0,   -83,     8,  -362,  -362,
    -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,
       9,    10,     0,    11,     0,  -362,  -362,    12,     0,     0,
     403,   404,   438,   439,  -362,     0,     0,     0,     0,     0,
      13,     0,     0,     0,   450,   451,   452,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,    22,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -362,     0,   437,     0,  -362,     5,     0,  -507,     8,
    -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,
    -362,  -362,     9,    10,     0,    11,     0,  -362,  -362,    12,
       0,     0,   403,   404,   438,   439,  -362,     0,     0,     0,
       0,     0,    13,     0,     0,     0,   488,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   489,     0,     0,     0,
       0,     0,     0,     0,     0,    21,    22,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -362,     0,   437,     0,  -362,     5,     0,
    -474,     8,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,
    -362,  -362,  -362,  -362,     9,    10,     0,    11,     0,  -362,
    -362,    12,     0,     0,   403,   404,   438,   439,  -362,     0,
     437,     0,  -362,     5,    13,     0,     8,  -362,  -362,  -362,
    -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,     9,
      10,     0,    11,     0,  -362,  -362,    12,    21,    22,   403,
     404,   438,   439,  -362,     0,     0,     0,     0,     0,    13,
       0,     0,     0,     0,     0,  -362,     0,     0,     0,     0,
       0,     0,   -65,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21,    22,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -362,     0,   437,     0,  -362,     5,     0,   -87,     8,  -362,
    -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,
    -362,     9,    10,     0,    11,     0,  -362,  -362,    12,     0,
       0,   403,   404,   438,   439,  -362,     0,     0,     0,     0,
       0,    13,     0,     0,     0,     0,     0,     0,     0,     0,
      -2,     4,     0,     0,     5,     6,     7,     8,     0,     0,
       0,     0,     0,     0,    21,    22,     0,     0,     0,     0,
       9,    10,     0,    11,     0,     0,     0,    12,     0,     0,
       0,     0,  -362,     0,     0,     0,     0,     0,     0,  -498,
      13,    14,    15,    16,     0,     0,     0,     0,     0,    17,
      18,     0,     0,    19,     4,     0,    20,     5,     6,     7,
       8,     0,     0,    21,    22,     0,     0,     0,     0,     0,
      23,    24,     0,     9,    10,     0,    11,     0,     0,     4,
      12,     0,     5,     6,     7,     8,     0,     0,     0,     0,
       0,     0,     0,    13,    14,    15,    16,     0,     9,    10,
       0,    11,    17,    18,     0,    12,    19,     0,     0,    20,
       0,     0,     0,     0,     0,     0,    21,    22,    13,    14,
      15,    16,     0,    23,    24,   654,     0,    17,    18,     0,
       0,    19,     0,     0,    20,     0,     0,     0,     0,     0,
       0,    21,    22,     0,     0,     0,     0,     0,    23,    24
};

static const yytype_int16 yycheck[] =
{
      13,    13,    21,    22,    78,    18,    19,    41,    41,   111,
       2,    41,    78,    41,   337,     2,    41,     2,    41,     2,
       2,    78,    41,    78,    78,    78,    78,   498,   595,   349,
      78,   447,   339,   340,   341,   290,     1,   606,   388,     3,
       3,     3,     8,   359,     3,    11,   634,    81,    81,   349,
     400,    81,     0,    81,     3,   349,    81,    19,    81,    78,
      79,    49,    81,    28,    29,    53,     3,    80,     3,    82,
      83,    84,    85,     3,   662,     8,     9,    90,   606,   399,
      75,    94,   498,     3,    97,   401,    81,   100,     8,     9,
      10,    75,     6,    13,    14,    15,    16,    81,    89,   399,
      97,    98,    34,    23,    22,   399,   361,   676,   428,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    81,    81,
      84,    85,    81,    88,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    97,    98,    84,    85,    69,   102,   103,
      86,    73,    86,   245,    81,   219,   496,    91,   676,    91,
      86,    81,     6,   219,   103,    91,    87,    89,    86,    91,
      86,    81,   219,    91,   219,   219,   219,   219,   639,     1,
       3,   219,   427,    82,    83,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,   685,
      23,    24,    25,    26,    86,    49,    28,    29,   211,    53,
     219,   697,    86,     3,    99,   100,   101,   774,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,   714,   786,
      28,    29,    86,   639,    86,    25,    26,    91,     3,   796,
      90,   727,    92,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    30,    31,    86,    81,    24,
      25,    26,   723,    86,     1,     3,     3,     3,    91,    30,
      31,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    60,    23,    24,    25,    26,
      65,    81,   384,   296,   297,   605,   593,   389,    87,    60,
      14,    15,   305,   764,    65,    15,    16,    68,    69,    35,
      36,    37,    86,   325,   326,   327,    81,   723,   242,   243,
     244,   330,   321,   322,    86,     3,   323,   324,   337,    48,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    81,    23,    24,    25,    26,   551,
     552,   360,    87,   398,   398,   398,   398,    86,   764,    87,
      81,    91,    89,    86,    89,    89,    86,    89,     3,    87,
      86,    86,     8,   397,   398,    86,    89,   397,    86,   397,
     383,   390,   397,   447,   397,   367,    87,    86,   397,   398,
     367,   447,   367,    87,   367,   367,   405,    86,   407,   408,
      86,    86,    86,    81,    87,   414,    94,    47,    95,    90,
       1,   103,    87,     4,     5,     6,     7,   426,    87,    96,
      87,    87,    87,    91,     3,   104,    90,    90,    58,    20,
      21,    92,    23,    92,   498,    92,    27,    88,   447,    93,
      92,     3,   498,   105,    88,   105,    88,     3,    87,    40,
      41,    42,    43,    30,    31,    92,    88,    88,    49,    50,
      86,    90,    53,   776,   777,    56,    90,   476,   477,   478,
      90,    90,    63,    64,    51,    52,    88,    88,     8,    70,
      71,    72,    88,    60,    61,   488,   489,    88,    65,   498,
     803,    68,    69,    31,    86,    88,    86,    88,   501,    86,
     592,    86,     3,    86,    88,    86,   509,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    86,
      86,    86,    86,    86,    25,    26,    86,   551,   552,     3,
     104,   551,   552,   551,   552,    86,   551,   552,   551,   552,
      86,    86,   551,   552,    86,    86,    86,    86,     4,    86,
       6,    86,    86,    66,     3,    88,    88,    88,    35,   562,
      88,   564,   565,   566,    20,    21,    92,    23,    24,    86,
      86,    27,    86,    88,   103,   639,    86,    86,    35,    87,
      81,   106,    88,   639,   103,    38,   104,    55,    92,    89,
      59,     3,   595,    49,     3,    92,   103,    53,   607,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    67,   104,   104,   104,   103,    25,    26,    62,    90,
     104,    86,    88,    39,   606,    34,   104,    91,   103,   606,
     639,   606,    92,   606,   606,    86,    91,   640,   640,    75,
      92,   104,   103,    75,    92,   654,     4,   676,     6,    16,
     104,    15,   308,   745,   104,   367,   402,   592,   219,   723,
     318,   562,    20,    21,   673,    23,    24,   723,   422,    27,
     319,   342,    81,   320,   748,   686,   672,   750,   775,   594,
     795,   390,   307,   686,   686,    73,   433,   780,   605,   384,
      -1,    49,   399,    -1,   676,    53,    -1,   414,    -1,   676,
     764,   676,    -1,   676,   676,    -1,    -1,    -1,   764,    67,
      -1,    -1,    -1,    -1,   723,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   731,    -1,    -1,   749,   749,   730,   730,   749,
      -1,   749,    -1,    -1,   749,    -1,   749,    -1,    -1,    -1,
     749,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   764,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   776,   777,    -1,
      -1,   774,    -1,    -1,    -1,    -1,   779,    -1,    -1,    -1,
      -1,    -1,    -1,   786,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,   796,   803,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    -1,    25,    26,    27,    -1,    -1,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,     1,    -1,     3,     4,    -1,    88,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    23,    -1,    25,    26,    27,    -1,    -1,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    44,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,     1,    -1,     3,     4,    -1,    88,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    -1,    25,    26,    27,
      -1,    -1,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,     1,    -1,     3,     4,    -1,
      88,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    23,    -1,    25,
      26,    27,    -1,    -1,    30,    31,    32,    33,    34,    -1,
       1,    -1,     3,     4,    40,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    23,    -1,    25,    26,    27,    63,    64,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,     1,    -1,     3,     4,    -1,    88,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    23,    -1,    25,    26,    27,    -1,
      -1,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       0,     1,    -1,    -1,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,    -1,
      20,    21,    -1,    23,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,    49,
      50,    -1,    -1,    53,     1,    -1,    56,     4,     5,     6,
       7,    -1,    -1,    63,    64,    -1,    -1,    -1,    -1,    -1,
      70,    71,    -1,    20,    21,    -1,    23,    -1,    -1,     1,
      27,    -1,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    42,    43,    -1,    20,    21,
      -1,    23,    49,    50,    -1,    27,    53,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    40,    41,
      42,    43,    -1,    70,    71,    72,    -1,    49,    50,    -1,
      -1,    53,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    -1,    -1,    -1,    -1,    -1,    70,    71
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   108,   109,     0,     1,     4,     5,     6,     7,    20,
      21,    23,    27,    40,    41,    42,    43,    49,    50,    53,
      56,    63,    64,    70,    71,   110,   112,   127,   129,   133,
     134,   146,   149,   150,   154,   156,   159,   160,   161,   165,
     169,   171,   175,   176,   199,   200,   218,   227,   247,   249,
     261,   263,   285,   286,   287,   329,   380,   381,   382,   383,
     384,   388,   410,   412,   435,   436,   437,   438,   439,   443,
     444,   445,   448,   452,   461,   476,   477,   126,   201,   128,
     155,   219,   248,   262,   288,   330,     3,   198,   235,   154,
      53,   154,   169,   171,    53,   161,   171,   172,   198,   198,
     413,    81,   195,   198,   195,   462,   478,    89,   130,   119,
     135,   147,    86,    86,   118,    91,   157,   151,   120,   162,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    24,    25,    26,   157,   195,   222,   223,   224,
     225,   226,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   249,   261,   263,   287,   296,   299,   302,
     303,   306,   307,   310,   116,   113,   250,    22,   117,   114,
     115,   121,   385,   122,   411,   123,   157,   446,   446,   124,
     125,    87,   480,    86,    17,   195,   205,   237,   240,   241,
     242,   243,   244,   303,   307,   195,   198,   220,   222,   198,
     198,   198,   198,   157,   198,   157,   166,   198,   198,   389,
     198,   196,    75,    81,    75,     3,     3,    87,    86,     4,
       6,    20,    21,    23,    24,    27,    49,    53,    67,   453,
     454,   457,    73,    74,    75,    76,    77,    78,    79,    80,
      84,    85,    97,    98,   102,   103,   195,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   473,   475,
      86,    48,   173,    87,    86,    87,     8,    11,     8,     9,
      89,   300,   170,    90,    92,    89,    89,    86,    86,    87,
     264,    86,    86,    86,    86,    87,    86,    87,   422,    86,
     447,   440,   449,    86,    86,   481,   202,   221,   289,   331,
      87,    91,   391,   414,   198,   197,   463,   479,   131,   205,
      89,     3,   136,   455,   215,   215,   215,   207,    94,    95,
      96,    82,    83,    97,    98,    99,   100,   101,    90,   474,
     158,   152,   163,     8,   207,   217,    89,    47,   174,   297,
     304,   308,   251,   103,   386,   423,   174,    87,    87,   483,
     198,   198,   228,   231,   235,   236,   311,    87,    87,   167,
     392,   390,    91,   419,   198,    87,   391,   109,   111,     3,
      90,    92,   104,   209,   210,   211,   212,   212,   213,   213,
     214,   214,   214,   148,    92,   192,   195,   182,   177,    92,
     301,   192,   217,   217,   217,   253,   255,   256,   265,   393,
     425,   441,   450,    30,    31,    60,    65,    68,    69,   318,
     319,   324,   402,   404,   405,   472,   482,   484,   203,   312,
     229,   290,   332,   182,   195,   174,   420,   415,   464,   110,
     132,    90,   137,   456,   198,   475,   193,     1,    32,    33,
     153,   183,   200,   218,   318,   329,   334,   339,   380,   381,
      44,    45,    46,   164,   178,   179,   183,   341,   207,   223,
     298,   305,   309,   252,   254,     1,   222,   257,     8,   195,
     237,   242,   243,   244,   270,   287,    51,    52,    61,   318,
     387,   394,   402,   404,   407,   408,   409,   472,    44,    54,
     183,   424,   426,   429,   432,   182,   177,   320,   325,    19,
     195,   403,    58,   406,   195,   195,   487,   485,   486,   403,
     488,    88,    93,   105,   313,   315,    92,     3,   292,   295,
     254,   168,   195,   174,   318,   402,   404,   466,   468,    88,
       3,    87,   457,    92,   191,    88,   187,   184,   189,   188,
     190,    34,   195,   224,   303,   307,   340,   363,   185,   186,
     342,   181,   180,    88,    86,    90,    90,    90,    90,    88,
     255,   260,   258,   266,   195,   195,   195,   400,    88,   395,
     396,   397,   398,   399,   401,   198,   198,    88,   427,   428,
     442,   451,    31,   363,   198,     3,     3,    86,    86,    86,
     198,    86,   204,   316,   314,   230,   291,   293,   333,    88,
     416,   471,   469,   470,   465,   467,   138,   194,    86,    86,
      86,    86,    86,    86,   335,    86,    86,     3,   257,   257,
      86,   228,   104,   198,   198,   198,    86,    86,    86,    86,
      86,    86,    86,   430,   433,    86,    86,    88,    88,   321,
     326,   206,   217,   315,   231,    88,    92,    88,    66,    86,
      86,    86,    88,   468,    72,   112,   127,   140,   142,   143,
     195,     3,   343,   259,   267,   103,   345,   345,   363,   232,
     235,   317,   294,   417,   195,   139,   141,    86,   336,   345,
      86,    87,   346,   347,   431,   434,   322,   327,   233,   106,
     295,   195,   144,    88,   142,   103,   354,   344,   268,   104,
      35,   348,   351,    38,   365,   365,   232,    55,   368,    92,
     418,    89,   355,   356,   337,   365,     1,    28,    29,   271,
     273,   277,   279,   352,   104,   349,   366,   323,   369,   328,
     234,    59,   421,     3,   458,   460,   104,    35,    36,    37,
     357,   360,   364,   365,   276,   281,   280,   269,   272,   274,
     278,   363,    92,   103,   365,   103,    62,   371,   235,   195,
      90,   459,   104,   358,   361,   338,    86,   207,    91,    88,
     273,   222,   283,   279,   353,   350,   367,   370,   372,   145,
      92,    92,   363,    39,   374,   282,   284,   275,   231,   351,
     192,   192,   103,   198,   460,   359,   362,   375,    91,   231,
      86,   104,   104,   373,   360,   231,   103,   192,   376,   104,
      75,   377,   378,   104,    92,   379,    75
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
        case 5:
#line 370 "fe/idl.ypp"
    {
        ;}
    break;

  case 6:
#line 373 "fe/idl.ypp"
    {
        ;}
    break;

  case 7:
#line 376 "fe/idl.ypp"
    {
        ;}
    break;

  case 9:
#line 386 "fe/idl.ypp"
    {
// fixed_definition : type_dcl
          idl_global->set_parse_state (IDL_GlobalData::PS_TypeDeclSeen);
        ;}
    break;

  case 10:
#line 391 "fe/idl.ypp"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 11:
#line 396 "fe/idl.ypp"
    {
//      | typeid_dcl
          idl_global->set_parse_state (IDL_GlobalData::PS_TypeIdDeclSeen);
        ;}
    break;

  case 12:
#line 401 "fe/idl.ypp"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 13:
#line 406 "fe/idl.ypp"
    {
//      | typeprefix_dcl
          idl_global->set_parse_state (IDL_GlobalData::PS_TypePrefixDeclSeen);
        ;}
    break;

  case 14:
#line 411 "fe/idl.ypp"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 15:
#line 416 "fe/idl.ypp"
    {
//      | const_dcl
          idl_global->set_parse_state (IDL_GlobalData::PS_ConstDeclSeen);
        ;}
    break;

  case 16:
#line 421 "fe/idl.ypp"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 17:
#line 426 "fe/idl.ypp"
    {
//      | exception
          idl_global->set_parse_state (IDL_GlobalData::PS_ExceptDeclSeen);
        ;}
    break;

  case 18:
#line 431 "fe/idl.ypp"
    {
//      ';'
        idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 19:
#line 436 "fe/idl.ypp"
    {
//      | interface_def
          idl_global->set_parse_state (IDL_GlobalData::PS_InterfaceDeclSeen);
        ;}
    break;

  case 20:
#line 441 "fe/idl.ypp"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 21:
#line 446 "fe/idl.ypp"
    {
//      | module
          idl_global->set_parse_state (IDL_GlobalData::PS_ModuleDeclSeen);
        ;}
    break;

  case 22:
#line 451 "fe/idl.ypp"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 23:
#line 456 "fe/idl.ypp"
    {
//      | value_def
          idl_global->set_parse_state (IDL_GlobalData::PS_ValueTypeDeclSeen);
        ;}
    break;

  case 24:
#line 461 "fe/idl.ypp"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 25:
#line 466 "fe/idl.ypp"
    {
//      | component
          idl_global->set_parse_state (IDL_GlobalData::PS_ComponentDeclSeen);
        ;}
    break;

  case 26:
#line 471 "fe/idl.ypp"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 27:
#line 476 "fe/idl.ypp"
    {
//      | home_decl
          idl_global->set_parse_state (IDL_GlobalData::PS_HomeDeclSeen);
        ;}
    break;

  case 28:
#line 481 "fe/idl.ypp"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 29:
#line 486 "fe/idl.ypp"
    {
//      | event
          idl_global->set_parse_state (IDL_GlobalData::PS_EventDeclSeen);
        ;}
    break;

  case 30:
#line 491 "fe/idl.ypp"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 31:
#line 496 "fe/idl.ypp"
    {
//      | porttype_decl
          idl_global->set_parse_state (IDL_GlobalData::PS_PorttypeDeclSeen);
        ;}
    break;

  case 32:
#line 501 "fe/idl.ypp"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 33:
#line 506 "fe/idl.ypp"
    {
//      | connector_decl
          idl_global->set_parse_state (IDL_GlobalData::PS_ConnectorDeclSeen);
        ;}
    break;

  case 34:
#line 511 "fe/idl.ypp"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 35:
#line 516 "fe/idl.ypp"
    {
//      | error
          idl_global->err()->syntax_error (idl_global->parse_state());
        ;}
    break;

  case 36:
#line 521 "fe/idl.ypp"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
          yyerrok;
        ;}
    break;

  case 37:
#line 530 "fe/idl.ypp"
    {
// module_header  : IDL_MODULE
          idl_global->set_parse_state (IDL_GlobalData::PS_ModuleSeen);
        ;}
    break;

  case 38:
#line 535 "fe/idl.ypp"
    {
          (yyval.idlist) = (yyvsp[(3) - (3)].idlist);
        ;}
    break;

  case 39:
#line 542 "fe/idl.ypp"
    {
// module : module_header
          idl_global->set_parse_state (IDL_GlobalData::PS_ModuleIDSeen);

          // The module_header rule is common to template module, fixed
          // module and instantiated template module. In the last
          // case, a fully scoped name is allowed, but here we
          // allow only an identifier (a scoped name of length
          // 1). If not satisfied, we output a parse error with
          // the appropriate message.
          if ((yyvsp[(1) - (1)].idlist)->length () != 1)
            {
              idl_global->err ()->syntax_error (
                IDL_GlobalData::PS_ModuleIDSeen);
            }

          AST_Module *m = 0;
          UTL_Scope *s = idl_global->scopes ().top_non_null ();

          /*
           * Make a new module and add it to the enclosing scope
           */
          if (s != 0)
            {
              m = idl_global->gen ()->create_module (s,
                                                     (yyvsp[(1) - (1)].idlist));
              (void) s->fe_add_module (m);
            }

          (yyvsp[(1) - (1)].idlist)->destroy ();
          delete (yyvsp[(1) - (1)].idlist);
          (yyvsp[(1) - (1)].idlist) = 0;

          /*
           * Push it on the stack
           */
          idl_global->scopes ().push (m);
        ;}
    break;

  case 40:
#line 581 "fe/idl.ypp"
    {
//      '{'
        idl_global->set_parse_state (IDL_GlobalData::PS_ModuleSqSeen);
        ;}
    break;

  case 41:
#line 586 "fe/idl.ypp"
    {
//      at_least_one_definition
          idl_global->set_parse_state (IDL_GlobalData::PS_ModuleBodySeen);
        ;}
    break;

  case 42:
#line 591 "fe/idl.ypp"
    {
//      '}'
          idl_global->set_parse_state (IDL_GlobalData::PS_ModuleQsSeen);
          /*
           * Finished with this module - pop it from the scope stack.
           */

          idl_global->scopes ().pop ();
        ;}
    break;

  case 43:
#line 604 "fe/idl.ypp"
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_TmplModuleIDSeen);
        ;}
    break;

  case 44:
#line 611 "fe/idl.ypp"
    {
// template_module : template_module_header
          // The module_header rule is common to template module, fixed
          // module and instantiated template module. In the last
          // case, a fully scoped name is allowed, but here we
          // allow only an identifier (a scoped name of length
          // 1). If not satisfied, we output a syntax error with
          // the appropriate message.
          if ((yyvsp[(1) - (1)].idlist)->length () != 1)
            {
              idl_global->err ()->syntax_error (
                IDL_GlobalData::PS_ModuleIDSeen);
            }
        ;}
    break;

  case 45:
#line 626 "fe/idl.ypp"
    {
          if (FE_Utils::duplicate_param_id ((yyvsp[(3) - (3)].plval)))
            {
              idl_global->err ()->duplicate_param_id (
                (yyvsp[(1) - (3)].idlist));

              return 1;
            }
        ;}
    break;

  case 46:
#line 636 "fe/idl.ypp"
    {
//        '>'
          idl_global->set_parse_state (IDL_GlobalData::PS_TmplModuleParamsSeen);

          AST_Template_Module *tm =
            idl_global->gen ()->create_template_module ((yyvsp[(1) - (5)].idlist),
                                                        (yyvsp[(3) - (5)].plval));

          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Module *m = s->fe_add_module (tm);

          // We've probably tried to reopen a template module,
          // going further will cause a crash.
          if (m == 0)
            {
              return 1;
            }

          /*
           * Push it on the stack
           */
          idl_global->scopes ().push (tm);

          // Contained items not part of an alias will get flag set.
          idl_global->in_tmpl_mod_no_alias (true);

          // Store these for reference as we parse the scope
          // of the template module.
          idl_global->current_params ((yyvsp[(3) - (5)].plval));
        ;}
    break;

  case 47:
#line 667 "fe/idl.ypp"
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_TmplModuleSqSeen);
        ;}
    break;

  case 48:
#line 671 "fe/idl.ypp"
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_TmplModuleBodySeen);
        ;}
    break;

  case 49:
#line 675 "fe/idl.ypp"
    {
//      '}'
          idl_global->set_parse_state (IDL_GlobalData::PS_TmplModuleQsSeen);

          /*
           * Finished with this module - pop it from the scope stack.
           */
          idl_global->scopes ().pop ();

          // Unset the flag, the no_alias version because any scope
          // traversal triggered by an alias would have ended by now.
          idl_global->in_tmpl_mod_no_alias (false);

          // Clear the pointer so scoped name lookup will know
          // that we are no longer in a template module scope.
          idl_global->current_params (0);
        ;}
    break;

  case 55:
#line 710 "fe/idl.ypp"
    {
// template_module_ref : IDL_ALIAS scoped_name
          idl_global->set_parse_state (
            IDL_GlobalData::PS_ModuleRefSeen);
        ;}
    break;

  case 56:
#line 716 "fe/idl.ypp"
    {
//        '<' at_least_one_formal_parameter_name '>'
          idl_global->set_parse_state (
            IDL_GlobalData::PS_ModuleRefParamsSeen);
        ;}
    break;

  case 57:
#line 722 "fe/idl.ypp"
    {
//        id
          idl_global->set_parse_state (
            IDL_GlobalData::PS_ModuleRefIDSeen);

          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Decl *d =
            s->lookup_by_name ((yyvsp[(2) - (8)].idlist));

          if (d == 0)
            {
              idl_global->err ()->lookup_error ((yyvsp[(2) - (8)].idlist));
              return 1;
            }

          AST_Template_Module *ref =
            AST_Template_Module::narrow_from_decl (d);

          if (ref == 0)
            {
              idl_global->err ()->template_module_expected (d);
              return 1;
            }

          bool refs_match =
            ref->match_param_refs ((yyvsp[(5) - (8)].slval),
                                   s);

          if (! refs_match)
            {
              // Error message is already output.
              return 1;
            }

          UTL_ScopedName sn ((yyvsp[(8) - (8)].idval), 0);

          AST_Template_Module_Ref *tmr =
            idl_global->gen ()->create_template_module_ref (
              &sn,
              ref,
              (yyvsp[(5) - (8)].slval));

          (void) s->fe_add_template_module_ref (tmr);

          sn.destroy ();
          (yyvsp[(2) - (8)].idlist)->destroy ();
          delete (yyvsp[(2) - (8)].idlist);
          (yyvsp[(2) - (8)].idlist) = 0;

          // Save the current flag value to be restored below.
          bool itmna_flag = idl_global->in_tmpl_mod_no_alias ();
          idl_global->in_tmpl_mod_no_alias (false);
          idl_global->in_tmpl_mod_alias (true);

          ast_visitor_context ctx;
          ctx.template_params (ref->template_params ());
          ast_visitor_tmpl_module_ref v (&ctx);

          // The implied IDL resulting from this reference is
          // created here, in the template module scope. Upon
          // instantiation of the enclosing template module, the
          // visitor copies this implied IDL to the instantiated
          // module scope. The extra copy is less than ideal, but
          // otherwise we have ugly lookup issues when the
          // referenced template module's contents are referenced
          // using the aliased scoped name.
          if (v.visit_template_module_ref (tmr) != 0)
            {
              ACE_ERROR ((LM_ERROR,
                          ACE_TEXT ("visit_template_module_ref")
                          ACE_TEXT (" failed\n")));

              idl_global->set_err_count (idl_global->err_count () + 1);
            }

          idl_global->in_tmpl_mod_no_alias (itmna_flag);
          idl_global->in_tmpl_mod_alias (false);
        ;}
    break;

  case 58:
#line 804 "fe/idl.ypp"
    {
// template_module_inst : template_module_header
          idl_global->set_parse_state (
            IDL_GlobalData::PS_InstModuleSeen);
        ;}
    break;

  case 59:
#line 810 "fe/idl.ypp"
    {
//        at_least_one_actual_parameter '>'
          idl_global->set_parse_state (
            IDL_GlobalData::PS_InstModuleArgsSeen);
        ;}
    break;

  case 60:
#line 816 "fe/idl.ypp"
    {
//        id
          idl_global->set_parse_state (
            IDL_GlobalData::PS_InstModuleIDSeen);

          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName *sn = (yyvsp[(1) - (6)].idlist);
          AST_Template_Module *ref = 0;
          AST_Decl *d = s->lookup_by_name (sn);

          if (d == 0)
            {
              idl_global->err ()->lookup_error (sn);
              return 1;
            }
          else
            {
              ref = AST_Template_Module::narrow_from_decl (d);

              if (ref == 0)
                {
                  idl_global->err ()->template_module_expected (d);
                  return 1;
                }
            }

          sn->destroy ();
          delete sn;
          sn = 0;
          (yyvsp[(1) - (6)].idlist) = 0;

          if (! ref->match_arg_names ((yyvsp[(3) - (6)].alval)))
            {
              return 1;
            }

          ACE_NEW_RETURN (sn,
                          UTL_ScopedName ((yyvsp[(6) - (6)].idval),
                                           0),
                          1);

          AST_Template_Module_Inst *tmi =
            idl_global->gen ()->create_template_module_inst (
              sn,
              ref,
              (yyvsp[(3) - (6)].alval));

          (void) s->fe_add_template_module_inst (tmi);

          ast_visitor_context ctx;
          ctx.template_args ((yyvsp[(3) - (6)].alval));
          ast_visitor_tmpl_module_inst v (&ctx);

          if (v.visit_template_module_inst (tmi) != 0)
            {
              ACE_ERROR ((LM_ERROR,
                          ACE_TEXT ("visit_template_module_inst")
                          ACE_TEXT (" failed\n")));

              idl_global->set_err_count (idl_global->err_count () + 1);
            }
        ;}
    break;

  case 63:
#line 887 "fe/idl.ypp"
    {
// interface : interface_header
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Interface *i = 0;

          /*
           * Make a new interface node and add it to its enclosing scope.
           */
          if (s != 0 && (yyvsp[(1) - (1)].ihval) != 0)
            {
              i =
                idl_global->gen ()->create_interface (
                                        (yyvsp[(1) - (1)].ihval)->name (),
                                        (yyvsp[(1) - (1)].ihval)->inherits (),
                                        (yyvsp[(1) - (1)].ihval)->n_inherits (),
                                        (yyvsp[(1) - (1)].ihval)->inherits_flat (),
                                        (yyvsp[(1) - (1)].ihval)->n_inherits_flat (),
                                        (yyvsp[(1) - (1)].ihval)->is_local (),
                                        (yyvsp[(1) - (1)].ihval)->is_abstract ()
                                      );
              AST_Interface::fwd_redefinition_helper (i,
                                                      s);
              /*
               * Add the interface to its definition scope.
               */
              (void) s->fe_add_interface (i);

              // This FE_InterfaceHeader class isn't destroyed with the AST.
              (yyvsp[(1) - (1)].ihval)->destroy ();
              delete (yyvsp[(1) - (1)].ihval);
              (yyvsp[(1) - (1)].ihval) = 0;
            }

          /*
           * Push it on the scope stack.
           */
          idl_global->scopes ().push (i);
        ;}
    break;

  case 64:
#line 926 "fe/idl.ypp"
    {
//      '{'
          idl_global->set_parse_state (IDL_GlobalData::PS_InterfaceSqSeen);
        ;}
    break;

  case 65:
#line 931 "fe/idl.ypp"
    {
//      exports
          idl_global->set_parse_state (IDL_GlobalData::PS_InterfaceBodySeen);
        ;}
    break;

  case 66:
#line 936 "fe/idl.ypp"
    {
//      '}'
          idl_global->set_parse_state (IDL_GlobalData::PS_InterfaceQsSeen);

          /*
           * Done with this interface - pop it off the scopes stack
           */
          idl_global->scopes ().pop ();
        ;}
    break;

  case 67:
#line 949 "fe/idl.ypp"
    {
// interface_decl : IDL_INTERFACE
           idl_global->set_parse_state (IDL_GlobalData::PS_InterfaceSeen);
         ;}
    break;

  case 68:
#line 954 "fe/idl.ypp"
    {
//       id
           idl_global->set_parse_state (IDL_GlobalData::PS_InterfaceIDSeen);
           (yyval.idval) = (yyvsp[(3) - (3)].idval);
         ;}
    break;

  case 69:
#line 963 "fe/idl.ypp"
    {
// interface_header : interface_decl inheritance_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_InheritSpecSeen);

          if ((yyvsp[(2) - (2)].nlval) != 0 && (yyvsp[(2) - (2)].nlval)->truncatable ())
            {
              idl_global->err ()->syntax_error (
                                      IDL_GlobalData::PS_InheritColonSeen
                                    );
            }

          /*
           * Create an AST representation of the information in the header
           * part of an interface - this representation contains a computed
           * list of all interfaces which this interface inherits from,
           * recursively
           */
          UTL_ScopedName *n = 0;
          ACE_NEW_RETURN (n,
                          UTL_ScopedName ((yyvsp[(1) - (2)].idval), 0),
                          1);
          ACE_NEW_RETURN ((yyval.ihval),
                          FE_InterfaceHeader (n,
                                              (yyvsp[(2) - (2)].nlval),
                                              false,
                                              false,
                                              true),
                          1);

          if (0 != (yyvsp[(2) - (2)].nlval))
            {
              (yyvsp[(2) - (2)].nlval)->destroy ();
              delete (yyvsp[(2) - (2)].nlval);
              (yyvsp[(2) - (2)].nlval) = 0;
            }
        ;}
    break;

  case 70:
#line 1001 "fe/idl.ypp"
    {
//      | IDL_LOCAL interface_decl inheritance_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_InheritSpecSeen);

          /*
           * Create an AST representation of the information in the header
           * part of an interface - this representation contains a computed
           * list of all interfaces which this interface inherits from,
           * recursively
           */
          UTL_ScopedName *n = 0;
          ACE_NEW_RETURN (n,
                          UTL_ScopedName ((yyvsp[(2) - (3)].idval), 0),
                          1);
          ACE_NEW_RETURN ((yyval.ihval),
                          FE_InterfaceHeader (n,
                                              (yyvsp[(3) - (3)].nlval),
                                              true,
                                              false,
                                              true),
                          1);

          if (0 != (yyvsp[(3) - (3)].nlval))
            {
              (yyvsp[(3) - (3)].nlval)->destroy ();
              delete (yyvsp[(3) - (3)].nlval);
              (yyvsp[(3) - (3)].nlval) = 0;
            }
        ;}
    break;

  case 71:
#line 1032 "fe/idl.ypp"
    {
//      | IDL_ABSTRACT interface_decl inheritance_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_InheritSpecSeen);

          /*
           * Create an AST representation of the information in the header
           * part of an interface - this representation contains a computed
           * list of all interfaces which this interface inherits from,
           * recursively
           */
          UTL_ScopedName *n = 0;
          ACE_NEW_RETURN (n,
                          UTL_ScopedName ((yyvsp[(2) - (3)].idval), 0),
                          1);
          ACE_NEW_RETURN ((yyval.ihval),
                          FE_InterfaceHeader (n,
                                              (yyvsp[(3) - (3)].nlval),
                                              false,
                                              true,
                                              true),
                          1);

          if (0 != (yyvsp[(3) - (3)].nlval))
            {
              (yyvsp[(3) - (3)].nlval)->destroy ();
              delete (yyvsp[(3) - (3)].nlval);
              (yyvsp[(3) - (3)].nlval) = 0;
            }
        ;}
    break;

  case 72:
#line 1065 "fe/idl.ypp"
    {
// inheritance_spec : ':' opt_truncatable
          idl_global->set_parse_state (IDL_GlobalData::PS_InheritColonSeen);
        ;}
    break;

  case 73:
#line 1070 "fe/idl.ypp"
    {
//      at_least_one_scoped_name
          (yyvsp[(4) - (4)].nlval)->truncatable ((yyvsp[(2) - (4)].bval));
          (yyval.nlval) = (yyvsp[(4) - (4)].nlval);
        ;}
    break;

  case 74:
#line 1076 "fe/idl.ypp"
    {
/*      |  EMPTY */
          (yyval.nlval) = 0;
        ;}
    break;

  case 79:
#line 1091 "fe/idl.ypp"
    {
// valuetype : IDL_CUSTOM value_concrete_decl
           ACE_DEBUG ((LM_DEBUG,
                       ACE_TEXT ("error in %C line %d\n"),
                       idl_global->filename ()->get_string (),
                       idl_global->lineno ()));
           ACE_DEBUG ((LM_DEBUG,
                       ACE_TEXT ("Sorry, I (TAO_IDL) can't handle")
                       ACE_TEXT (" custom yet\n")));
        ;}
    break;

  case 81:
#line 1106 "fe/idl.ypp"
    {
// value_concrete_decl : value_header
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_ValueType *v = 0;
          AST_Interface *i = 0;

          if (s != 0 && (yyvsp[(1) - (1)].vhval) != 0)
            {
              v =
                idl_global->gen ()->create_valuetype (
                  (yyvsp[(1) - (1)].vhval)->name (),
                  (yyvsp[(1) - (1)].vhval)->inherits (),
                  (yyvsp[(1) - (1)].vhval)->n_inherits (),
                  (yyvsp[(1) - (1)].vhval)->inherits_concrete (),
                  (yyvsp[(1) - (1)].vhval)->inherits_flat (),
                  (yyvsp[(1) - (1)].vhval)->n_inherits_flat (),
                  (yyvsp[(1) - (1)].vhval)->supports (),
                  (yyvsp[(1) - (1)].vhval)->n_supports (),
                  (yyvsp[(1) - (1)].vhval)->supports_concrete (),
                  false,
                  (yyvsp[(1) - (1)].vhval)->truncatable (),
                  false);

              i = AST_Interface::narrow_from_decl (v);
              AST_Interface::fwd_redefinition_helper (i,
                                                      s);
              /*
               * Add the valuetype to its definition scope
               */
              v = AST_ValueType::narrow_from_decl (i);
              (void) s->fe_add_valuetype (v);

              // FE_OBVHeader is not automatically destroyed in the AST
              (yyvsp[(1) - (1)].vhval)->destroy ();
              delete (yyvsp[(1) - (1)].vhval);
              (yyvsp[(1) - (1)].vhval) = 0;
            }

          /*
           * Push it on the scope stack
           */
          idl_global->scopes ().push (v);
        ;}
    break;

  case 82:
#line 1150 "fe/idl.ypp"
    {
//      '{'
          idl_global->set_parse_state (IDL_GlobalData::PS_ValueTypeSqSeen);
        ;}
    break;

  case 83:
#line 1155 "fe/idl.ypp"
    {
//      value_elements
          idl_global->set_parse_state (IDL_GlobalData::PS_ValueTypeBodySeen);
        ;}
    break;

  case 84:
#line 1160 "fe/idl.ypp"
    {
//      '}'
          idl_global->set_parse_state (IDL_GlobalData::PS_ValueTypeQsSeen);

          AST_ValueType *vt =
            AST_ValueType::narrow_from_scope (
                idl_global->scopes ().top_non_null ()
              );

          if (vt != 0 && vt->will_have_factory ())
            {
              idl_global->valuefactory_seen_ = true;
            }

          /*
           * Done with this value type - pop it off the scopes stack
           */
          idl_global->scopes ().pop ();
        ;}
    break;

  case 85:
#line 1184 "fe/idl.ypp"
    {
// value_abs_decl : IDL_ABSTRACT value_header
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_ValueType *v = 0;
          AST_Interface *i = 0;

          if (s != 0 && (yyvsp[(2) - (2)].vhval) != 0)
            {
              v =
                idl_global->gen ()->create_valuetype (
                    (yyvsp[(2) - (2)].vhval)->name (),
                    (yyvsp[(2) - (2)].vhval)->inherits (),
                    (yyvsp[(2) - (2)].vhval)->n_inherits (),
                    (yyvsp[(2) - (2)].vhval)->inherits_concrete (),
                    (yyvsp[(2) - (2)].vhval)->inherits_flat (),
                    (yyvsp[(2) - (2)].vhval)->n_inherits_flat (),
                    (yyvsp[(2) - (2)].vhval)->supports (),
                    (yyvsp[(2) - (2)].vhval)->n_supports (),
                    (yyvsp[(2) - (2)].vhval)->supports_concrete (),
                    true,
                    false,
                    false
                  );
              i = AST_Interface::narrow_from_decl (v);
              AST_Interface::fwd_redefinition_helper (i,
                                                      s);
              /*
               * Add the valuetype to its definition scope
               */
              v = AST_ValueType::narrow_from_decl (i);
              (void) s->fe_add_valuetype (v);

              // FE_OBVHeader is not automatically destroyed in the AST
              (yyvsp[(2) - (2)].vhval)->destroy ();
              delete (yyvsp[(2) - (2)].vhval);
              (yyvsp[(2) - (2)].vhval) = 0;
            }

          /*
           * Push it on the scope stack.
           */
          idl_global->scopes ().push (v);
        ;}
    break;

  case 86:
#line 1228 "fe/idl.ypp"
    {
//      '{'
          idl_global->set_parse_state (IDL_GlobalData::PS_ValueTypeSqSeen);
        ;}
    break;

  case 87:
#line 1233 "fe/idl.ypp"
    {
//      exports
          idl_global->set_parse_state (IDL_GlobalData::PS_ValueTypeBodySeen);
        ;}
    break;

  case 88:
#line 1238 "fe/idl.ypp"
    {
//      '}'
          idl_global->set_parse_state (IDL_GlobalData::PS_ValueTypeQsSeen);

          /*
           * Done with this valuetype - pop it off the scopes stack.
           */
          idl_global->scopes ().pop ();
        ;}
    break;

  case 89:
#line 1252 "fe/idl.ypp"
    {
// value_header : value_decl inheritance_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_InheritSpecSeen);
        ;}
    break;

  case 90:
#line 1257 "fe/idl.ypp"
    {
//      supports_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_SupportSpecSeen);

          UTL_ScopedName *sn = 0;
          ACE_NEW_RETURN (sn,
                          UTL_ScopedName ((yyvsp[(1) - (4)].idval), 0),
                          1);
          ACE_NEW_RETURN ((yyval.vhval),
                          FE_OBVHeader (sn,
                                        (yyvsp[(2) - (4)].nlval),
                                        (yyvsp[(4) - (4)].nlval),
                                        ((yyvsp[(2) - (4)].nlval) != 0
                                           ? (yyvsp[(2) - (4)].nlval)->truncatable ()
                                           : false)),
                          1);

          if (0 != (yyvsp[(4) - (4)].nlval))
            {
              (yyvsp[(4) - (4)].nlval)->destroy ();
              delete (yyvsp[(4) - (4)].nlval);
              (yyvsp[(4) - (4)].nlval) = 0;
            }

          if (0 != (yyvsp[(2) - (4)].nlval))
            {
              (yyvsp[(2) - (4)].nlval)->destroy ();
              delete (yyvsp[(2) - (4)].nlval);
              (yyvsp[(2) - (4)].nlval) = 0;
            }
        ;}
    break;

  case 91:
#line 1292 "fe/idl.ypp"
    {
// value_decl : IDL_VALUETYPE
           idl_global->set_parse_state (IDL_GlobalData::PS_ValueTypeSeen);
        ;}
    break;

  case 92:
#line 1297 "fe/idl.ypp"
    {
//      id
          idl_global->set_parse_state (IDL_GlobalData::PS_ValueTypeIDSeen);
          (yyval.idval) = (yyvsp[(3) - (3)].idval);
        ;}
    break;

  case 93:
#line 1306 "fe/idl.ypp"
    {
// opt_truncatable : IDL_TRUNCATABLE
          (yyval.bval) = true;
        ;}
    break;

  case 94:
#line 1311 "fe/idl.ypp"
    {
/*      |  EMPTY */
          (yyval.bval) = false;
        ;}
    break;

  case 95:
#line 1320 "fe/idl.ypp"
    {
// supports_spec : IDL_SUPPORTS at_least_one_scoped_name
          (yyval.nlval) = (yyvsp[(2) - (2)].nlval);
        ;}
    break;

  case 96:
#line 1325 "fe/idl.ypp"
    {
/*      |    EMPTY */
          (yyval.nlval) = 0;
        ;}
    break;

  case 97:
#line 1334 "fe/idl.ypp"
    {
// value_forward_decl : IDL_ABSTRACT value_decl
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((yyvsp[(2) - (2)].idval),
                            0);
          AST_ValueTypeFwd *f = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_ValueTypeForwardSeen);

          /*
           * Create a node representing a forward declaration of an
           * valuetype. Store it in the enclosing scope
           */
          if (s != 0)
            {
              f = idl_global->gen ()->create_valuetype_fwd (&n,
                                                            true);
              (void) s->fe_add_valuetype_fwd (f);
            }

          (yyvsp[(2) - (2)].idval)->destroy ();
          delete (yyvsp[(2) - (2)].idval);
          (yyvsp[(2) - (2)].idval) = 0;
        ;}
    break;

  case 98:
#line 1359 "fe/idl.ypp"
    {
//      | value_decl
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((yyvsp[(1) - (1)].idval),
                            0);
          AST_ValueTypeFwd *f = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_ValueTypeForwardSeen);

          /*
           * Create a node representing a forward declaration of an
           * valuetype. Store it in the enclosing scope
           */
          if (s != 0)
            {
              f = idl_global->gen ()->create_valuetype_fwd (&n,
                                                            false);
              (void) s->fe_add_valuetype_fwd (f);
            }

          (yyvsp[(1) - (1)].idval)->destroy ();
          delete (yyvsp[(1) - (1)].idval);
          (yyvsp[(1) - (1)].idval) = 0;
        ;}
    break;

  case 99:
#line 1386 "fe/idl.ypp"
    {
// value_box_decl : value_decl type_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_ValueBoxDeclSeen);

          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((yyvsp[(1) - (2)].idval),
                            0);

          if (s != 0 && (yyvsp[(2) - (2)].dcval) != 0)
            {
              /*
              * Get the type_spec associated with the valuebox
              */
              AST_Type *tp = 0;
              AST_Typedef *td
                = AST_Typedef::narrow_from_decl ((yyvsp[(2) - (2)].dcval));

              if (td == 0)
                {
                  tp = AST_Type::narrow_from_decl ((yyvsp[(2) - (2)].dcval));
                }
              else
                {
                  tp = td->primitive_base_type ();
                }

              if (tp == 0)
                {
                  // The <type_spec> given is a valid type
                  idl_global->err ()->not_a_type ((yyvsp[(2) - (2)].dcval));
                }
              else
                {
                  AST_Decl::NodeType nt = tp->node_type ();

                  if (nt == AST_Decl::NT_valuetype
                      || nt == AST_Decl::NT_eventtype)
                    {
                      // valuetype is not allowed as <type_spec>
                      // for boxed value
                      idl_global->err ()->error0 (
                          UTL_Error::EIDL_ILLEGAL_BOXED_TYPE
                        );
                    }
                  else
                    {
                      /*
                      * Add the valuebox to its definition scope
                      */
                      AST_ValueBox *vb =
                        idl_global->gen ()->create_valuebox (&n,
                                                             tp);
                      (void) s->fe_add_valuebox (vb);
                    }
                }
            }

          (yyvsp[(1) - (2)].idval)->destroy ();
          delete (yyvsp[(1) - (2)].idval);
          (yyvsp[(1) - (2)].idval) = 0;
        ;}
    break;

  case 105:
#line 1463 "fe/idl.ypp"
    {
// state_member : IDL_PUBLIC
          /* is $0 to member_i */
          (yyval.vival) = AST_Field::vis_PUBLIC;
        ;}
    break;

  case 106:
#line 1469 "fe/idl.ypp"
    {
//        member_i
        ;}
    break;

  case 107:
#line 1473 "fe/idl.ypp"
    {
//        IDL_PRIVATE
          /* is $0 to member_i */
          (yyval.vival) = AST_Field::vis_PRIVATE;
        ;}
    break;

  case 108:
#line 1479 "fe/idl.ypp"
    {
//        member_i
        ;}
    break;

  case 111:
#line 1491 "fe/idl.ypp"
    {
// export : type_dcl
          idl_global->set_parse_state (IDL_GlobalData::PS_TypeDeclSeen);
        ;}
    break;

  case 112:
#line 1496 "fe/idl.ypp"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 113:
#line 1501 "fe/idl.ypp"
    {
//      | typeid_dcl
          idl_global->set_parse_state (IDL_GlobalData::PS_TypeIdDeclSeen);
        ;}
    break;

  case 114:
#line 1506 "fe/idl.ypp"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 115:
#line 1511 "fe/idl.ypp"
    {
//      | typeprefix_dcl
          idl_global->set_parse_state (IDL_GlobalData::PS_TypePrefixDeclSeen);
        ;}
    break;

  case 116:
#line 1516 "fe/idl.ypp"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 117:
#line 1521 "fe/idl.ypp"
    {
//      | const_dcl
          idl_global->set_parse_state (IDL_GlobalData::PS_ConstDeclSeen);
        ;}
    break;

  case 118:
#line 1526 "fe/idl.ypp"
    {
//      ';'
          idl_global->set_parse_state(IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 119:
#line 1531 "fe/idl.ypp"
    {
//      | exception
          idl_global->set_parse_state (IDL_GlobalData::PS_ExceptDeclSeen);
        ;}
    break;

  case 120:
#line 1536 "fe/idl.ypp"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 121:
#line 1541 "fe/idl.ypp"
    {
//      | attribute
          idl_global->set_parse_state (IDL_GlobalData::PS_AttrDeclSeen);
        ;}
    break;

  case 122:
#line 1546 "fe/idl.ypp"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 123:
#line 1551 "fe/idl.ypp"
    {
//      | operation
          idl_global->set_parse_state (IDL_GlobalData::PS_OpDeclSeen);
        ;}
    break;

  case 124:
#line 1556 "fe/idl.ypp"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 125:
#line 1561 "fe/idl.ypp"
    {
//      | error
          idl_global->err()->syntax_error (idl_global->parse_state());
        ;}
    break;

  case 126:
#line 1566 "fe/idl.ypp"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
          yyerrok;
        ;}
    break;

  case 127:
#line 1575 "fe/idl.ypp"
    {
// at_least_one_scoped_name : scoped_name scoped_names
          ACE_NEW_RETURN ((yyval.nlval),
                          UTL_NameList ((yyvsp[(1) - (2)].idlist),
                                        (yyvsp[(2) - (2)].nlval)),
                          1);
        ;}
    break;

  case 128:
#line 1587 "fe/idl.ypp"
    {
// scoped_names : scoped_names ','
          idl_global->set_parse_state (IDL_GlobalData::PS_SNListCommaSeen);
        ;}
    break;

  case 129:
#line 1592 "fe/idl.ypp"
    {
//      scoped_name
          idl_global->set_parse_state (IDL_GlobalData::PS_ScopedNameSeen);

          UTL_NameList *nl = 0;
          ACE_NEW_RETURN (nl,
                          UTL_NameList ((yyvsp[(4) - (4)].idlist),
                                        0),
                          1);

          if ((yyvsp[(1) - (4)].nlval) == 0)
            {
              (yyval.nlval) = nl;
            }
          else
            {
              (yyvsp[(1) - (4)].nlval)->nconc (nl);
              (yyval.nlval) = (yyvsp[(1) - (4)].nlval);
            }
        ;}
    break;

  case 130:
#line 1613 "fe/idl.ypp"
    {
/*      |  EMPTY */
          (yyval.nlval) = 0;
        ;}
    break;

  case 131:
#line 1621 "fe/idl.ypp"
    {
// scoped_name : id
          idl_global->set_parse_state (IDL_GlobalData::PS_SN_IDSeen);

          ACE_NEW_RETURN ((yyval.idlist),
                          UTL_IdList ((yyvsp[(1) - (1)].idval),
                                      0),
                          1);
        ;}
    break;

  case 132:
#line 1631 "fe/idl.ypp"
    {
//      | IDL_SCOPE_DELIMITOR
          idl_global->set_parse_state (IDL_GlobalData::PS_ScopeDelimSeen);
        ;}
    break;

  case 133:
#line 1636 "fe/idl.ypp"
    {
//      id
          idl_global->set_parse_state (IDL_GlobalData::PS_SN_IDSeen);

          Identifier *id = 0;
          ACE_NEW_RETURN (id,
                          Identifier ((yyvsp[(1) - (3)].strval)),
                          1);
          ACE::strdelete ((yyvsp[(1) - (3)].strval));
          (yyvsp[(1) - (3)].strval) = 0;
          UTL_IdList *sn = 0;
          ACE_NEW_RETURN (sn,
                          UTL_IdList ((yyvsp[(3) - (3)].idval),
                                      0),
                          1);
          ACE_NEW_RETURN ((yyval.idlist),
                          UTL_IdList (id,
                                      sn),
                          1);
        ;}
    break;

  case 134:
#line 1658 "fe/idl.ypp"
    {
//      | scoped_name IDL_SCOPE_DELIMITOR
          idl_global->set_parse_state (IDL_GlobalData::PS_ScopeDelimSeen);

          // This cleans up all the non-global "::"s in scoped names.
          // If there is a global one, it gets put into the UTL_IdList,
          // so we clean it up in the case above.
          ACE::strdelete ((yyvsp[(2) - (2)].strval));
          (yyvsp[(2) - (2)].strval) = 0;
        ;}
    break;

  case 135:
#line 1669 "fe/idl.ypp"
    {
//      id
          idl_global->set_parse_state (IDL_GlobalData::PS_SN_IDSeen);

          UTL_IdList *sn = 0;
          ACE_NEW_RETURN (sn,
                          UTL_IdList ((yyvsp[(4) - (4)].idval),
                                      0),
                          1);
          (yyvsp[(1) - (4)].idlist)->nconc (sn);
          (yyval.idlist) = (yyvsp[(1) - (4)].idlist);
        ;}
    break;

  case 136:
#line 1684 "fe/idl.ypp"
    {
// id: IDENTIFIER
          ACE_NEW_RETURN ((yyval.idval),
                          Identifier ((yyvsp[(1) - (1)].strval)),
                          1);
          ACE::strdelete ((yyvsp[(1) - (1)].strval));
          (yyvsp[(1) - (1)].strval) = 0;
        ;}
    break;

  case 137:
#line 1696 "fe/idl.ypp"
    {
// interface_forward : interface_decl
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((yyvsp[(1) - (1)].idval),
                            0);

          if (ACE_OS::strcmp ((yyvsp[(1) - (1)].idval)->get_string (),
                              "TypeCode") == 0
              && !idl_global->in_main_file ())
            {
              AST_PredefinedType *pdt =
                idl_global->gen ()->create_predefined_type (
                                        AST_PredefinedType::PT_pseudo,
                                        &n
                                      );

              s->add_to_scope (pdt);

              (yyvsp[(1) - (1)].idval)->destroy ();
              delete (yyvsp[(1) - (1)].idval);
              (yyvsp[(1) - (1)].idval) = 0;

              break;
            }

          AST_InterfaceFwd *f = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_InterfaceForwardSeen);

          /*
           * Create a node representing a forward declaration of an
           * interface. Store it in the enclosing scope
           */
          if (s != 0)
            {
              f = idl_global->gen ()->create_interface_fwd (&n,
                                                            0,
                                                            0);
              (void) s->fe_add_interface_fwd (f);
            }

          (yyvsp[(1) - (1)].idval)->destroy ();
          delete (yyvsp[(1) - (1)].idval);
          (yyvsp[(1) - (1)].idval) = 0;
        ;}
    break;

  case 138:
#line 1742 "fe/idl.ypp"
    {
//      | IDL_LOCAL interface_decl
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((yyvsp[(2) - (2)].idval),
                            0);
          AST_InterfaceFwd *f = 0;
          idl_global->set_parse_state (
                          IDL_GlobalData::PS_InterfaceForwardSeen
                        );

          /*
           * Create a node representing a forward declaration of an
           * interface. Store it in the enclosing scope
           */
          if (s != 0)
            {
              f = idl_global->gen ()->create_interface_fwd (&n,
                                                            1,
                                                            0);
              (void) s->fe_add_interface_fwd (f);
            }

          (yyvsp[(2) - (2)].idval)->destroy ();
          delete (yyvsp[(2) - (2)].idval);
          (yyvsp[(2) - (2)].idval) = 0;
        ;}
    break;

  case 139:
#line 1770 "fe/idl.ypp"
    {
//      | IDL_ABSTRACT interface_decl
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((yyvsp[(2) - (2)].idval),
                            0);
          AST_InterfaceFwd *f = 0;
          idl_global->set_parse_state (
                          IDL_GlobalData::PS_InterfaceForwardSeen
                        );

          /*
           * Create a node representing a forward declaration of an
           * interface. Store it in the enclosing scope
           */
          if (s != 0)
            {
              f = idl_global->gen ()->create_interface_fwd (&n,
                                                            0,
                                                            1);
              (void) s->fe_add_interface_fwd (f);
            }

          (yyvsp[(2) - (2)].idval)->destroy ();
          delete (yyvsp[(2) - (2)].idval);
          (yyvsp[(2) - (2)].idval) = 0;
        ;}
    break;

  case 140:
#line 1800 "fe/idl.ypp"
    {
// const_dcl : IDL_CONST
          idl_global->set_parse_state (IDL_GlobalData::PS_ConstSeen);
        ;}
    break;

  case 141:
#line 1805 "fe/idl.ypp"
    {
//      const_type
          idl_global->set_parse_state (IDL_GlobalData::PS_ConstTypeSeen);
        ;}
    break;

  case 142:
#line 1810 "fe/idl.ypp"
    {
//      id
          idl_global->set_parse_state (IDL_GlobalData::PS_ConstIDSeen);
        ;}
    break;

  case 143:
#line 1815 "fe/idl.ypp"
    {
//      '='
          idl_global->set_parse_state (IDL_GlobalData::PS_ConstAssignSeen);
        ;}
    break;

  case 144:
#line 1820 "fe/idl.ypp"
    {
//      expression
          UTL_ScopedName n ((yyvsp[(5) - (9)].idval),
                            0);
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Constant *c = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_ConstExprSeen);

          /*
           * Create a node representing a constant declaration. Store
           * it in the enclosing scope.
           */
          if ((yyvsp[(9) - (9)].exval) != 0 && s != 0)
            {
              AST_Param_Holder *param_holder =
                (yyvsp[(9) - (9)].exval)->param_holder ();

              AST_Expression::AST_ExprValue *result =
                (yyvsp[(9) - (9)].exval)->check_and_coerce ((yyvsp[(3) - (9)].etval),
                                      tao_enum_constant_decl);
              tao_enum_constant_decl = 0;

              // If the expression is a template parameter place
              // holder, 'result' will be 0, but it's ok.
              if (result == 0 && param_holder == 0)
                {
                  idl_global->err ()->coercion_error ((yyvsp[(9) - (9)].exval),
                                                      (yyvsp[(3) - (9)].etval));
                  (yyvsp[(9) - (9)].exval)->destroy ();
                  delete (yyvsp[(9) - (9)].exval);
                  (yyvsp[(9) - (9)].exval) = 0;
                }
              else
                {
                  AST_Expression::ExprType et =
                    (yyvsp[(3) - (9)].etval);

                  if (param_holder != 0
                      && et != param_holder->info ()->const_type_)
                    {
                      idl_global->err ()->mismatched_template_param (
                        param_holder->info ()->name_.c_str ());
                    }
                  else
                    {
                      c =
                        idl_global->gen ()->create_constant (
                          (yyvsp[(3) - (9)].etval),
                          (yyvsp[(9) - (9)].exval),
                          &n);

                      (void) s->fe_add_constant (c);
                    }
                }

              (yyvsp[(5) - (9)].idval)->destroy ();
              delete (yyvsp[(5) - (9)].idval);
              (yyvsp[(5) - (9)].idval) = 0;

              delete result;
              result = 0;
            }
        ;}
    break;

  case 151:
#line 1893 "fe/idl.ypp"
    {
// const_type
//      : integer_type
//      | char_type
//      | octet_type
//      | boolean_type
//      | floating_pt_type
//      | fixed_type
//      | string_type_spec
          (yyval.etval) = AST_Expression::EV_string;
        ;}
    break;

  case 152:
#line 1905 "fe/idl.ypp"
    {
//      | wstring_type_spec
          (yyval.etval) = AST_Expression::EV_wstring;
        ;}
    break;

  case 153:
#line 1910 "fe/idl.ypp"
    {
//      | scoped_name
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_PredefinedType *c = 0;
          AST_Typedef *t = 0;
          UTL_ScopedName *sn = (yyvsp[(1) - (1)].idlist);

          /*
           * If the constant's type is a scoped name, it must resolve
           * to a scalar constant type
           */
          AST_Decl *d =
            s->lookup_by_name (sn);

          if (s != 0 && d != 0)
            {
              /*
               * Look through typedefs.
               */
              while (d->node_type () == AST_Decl::NT_typedef)
                {
                  t = AST_Typedef::narrow_from_decl (d);

                  if (t == 0)
                    {
                      break;
                    }

                  d = t->base_type ();
                }

              if (d->node_type () == AST_Decl::NT_pre_defined)
                {
                  c = AST_PredefinedType::narrow_from_decl (d);

                  (yyval.etval) = FE_Utils::PredefinedTypeToExprType (c->pt ());
                }
              else if (d->node_type () == AST_Decl::NT_string)
                {
                  (yyval.etval) = AST_Expression::EV_string;
                }
              else if (d->node_type () == AST_Decl::NT_wstring)
                {
                  (yyval.etval) = AST_Expression::EV_wstring;
                }
              else if (d->node_type () == AST_Decl::NT_enum)
                {
                  (yyval.etval) = AST_Expression::EV_enum;
                  tao_enum_constant_decl =
                    AST_Enum::narrow_from_decl (d);
                }
              else
                {
                  idl_global->err ()->constant_expected (sn, d);
                }
            }
          else
            {
              idl_global->err ()->lookup_error (sn);
            }

          sn->destroy ();
          delete sn;
          sn = 0;
          (yyvsp[(1) - (1)].idlist) = 0;
        ;}
    break;

  case 157:
#line 1984 "fe/idl.ypp"
    {
// or_expr : xor_expr
//      | or_expr '|' xor_expr
          (yyval.exval) =
            idl_global->gen ()->create_expr (
                                    AST_Expression::EC_or,
                                    (yyvsp[(1) - (3)].exval),
                                    (yyvsp[(3) - (3)].exval)
                                  );
        ;}
    break;

  case 159:
#line 1999 "fe/idl.ypp"
    {
// xor_expr : and_expr
//      | xor_expr '^' and_expr
          (yyval.exval) =
            idl_global->gen ()->create_expr (
                                    AST_Expression::EC_xor,
                                    (yyvsp[(1) - (3)].exval),
                                    (yyvsp[(3) - (3)].exval)
                                  );
        ;}
    break;

  case 161:
#line 2014 "fe/idl.ypp"
    {
// and_expr : shift_expr | and_expr '&' shift_expr
          (yyval.exval) =
            idl_global->gen ()->create_expr (
                                    AST_Expression::EC_and,
                                    (yyvsp[(1) - (3)].exval),
                                    (yyvsp[(3) - (3)].exval)
                                  );
        ;}
    break;

  case 163:
#line 2028 "fe/idl.ypp"
    {
// shift_expr : add_expr | shift_expr IDL_LEFT_SHIFT add_expr
          (yyval.exval) =
            idl_global->gen ()->create_expr (
                                    AST_Expression::EC_left,
                                    (yyvsp[(1) - (3)].exval),
                                    (yyvsp[(3) - (3)].exval)
                                  );
        ;}
    break;

  case 164:
#line 2038 "fe/idl.ypp"
    {
//      | shift_expr IDL_RIGHT_SHIFT add_expr
          (yyval.exval) =
            idl_global->gen ()->create_expr (
                                    AST_Expression::EC_right,
                                    (yyvsp[(1) - (3)].exval),
                                    (yyvsp[(3) - (3)].exval)
                                  );
        ;}
    break;

  case 166:
#line 2052 "fe/idl.ypp"
    {
// add_expr : mult_expr | add_expr '+' mult_expr
          (yyval.exval) =
            idl_global->gen ()->create_expr (
                                    AST_Expression::EC_add,
                                    (yyvsp[(1) - (3)].exval),
                                    (yyvsp[(3) - (3)].exval)
                                  );
        ;}
    break;

  case 167:
#line 2062 "fe/idl.ypp"
    {
//      | add_expr '-' mult_expr
          (yyval.exval) =
            idl_global->gen ()->create_expr (
                                    AST_Expression::EC_minus,
                                    (yyvsp[(1) - (3)].exval),
                                    (yyvsp[(3) - (3)].exval)
                                  );
        ;}
    break;

  case 169:
#line 2076 "fe/idl.ypp"
    {
// mult_expr : unary_expr | mult_expr '*' unary_expr
          (yyval.exval) =
            idl_global->gen ()->create_expr (
                                    AST_Expression::EC_mul,
                                    (yyvsp[(1) - (3)].exval),
                                    (yyvsp[(3) - (3)].exval)
                                  );
        ;}
    break;

  case 170:
#line 2086 "fe/idl.ypp"
    {
//      | mult_expr '/' unary_expr
          (yyval.exval) =
            idl_global->gen ()->create_expr (
                                    AST_Expression::EC_div,
                                    (yyvsp[(1) - (3)].exval),
                                    (yyvsp[(3) - (3)].exval)
                                  );
        ;}
    break;

  case 171:
#line 2096 "fe/idl.ypp"
    {
//      | mult_expr '%' unary_expr
          (yyval.exval) =
            idl_global->gen ()->create_expr (
                                    AST_Expression::EC_mod,
                                    (yyvsp[(1) - (3)].exval),
                                    (yyvsp[(3) - (3)].exval)
                                  );
        ;}
    break;

  case 173:
#line 2110 "fe/idl.ypp"
    {
// unary_expr : primary_expr | '+' primary_expr
          (yyval.exval) =
            idl_global->gen ()->create_expr (
                                    AST_Expression::EC_u_plus,
                                    (yyvsp[(2) - (2)].exval),
                                    0
                                  );
        ;}
    break;

  case 174:
#line 2120 "fe/idl.ypp"
    {
//      | '-' primary_expr
          (yyval.exval) =
            idl_global->gen()->create_expr (
                                   AST_Expression::EC_u_minus,
                                   (yyvsp[(2) - (2)].exval),
                                   0
                                 );
        ;}
    break;

  case 175:
#line 2130 "fe/idl.ypp"
    {
//      | '~' primary_expr
          (yyval.exval) =
            idl_global->gen()->create_expr (
                                   AST_Expression::EC_bit_neg,
                                   (yyvsp[(2) - (2)].exval),
                                   0
                                 );
        ;}
    break;

  case 176:
#line 2143 "fe/idl.ypp"
    {
// primary_expr : scoped_name
          /*
           * An expression which is a scoped name is not resolved now,
           * but only when it is evaluated (such as when it is assigned
           * as a constant value).
           */
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Decl *d =
            s->lookup_by_name ((yyvsp[(1) - (1)].idlist));

          if (d == 0)
            {
              idl_global->err ()->lookup_error ((yyvsp[(1) - (1)].idlist));
              return 1;
            }
          else if (d->node_type () == AST_Decl::NT_const)
            {
              /*
               * If the scoped name is an IDL constant, it
               * may be used in an array dim, a string
               * bound, or a sequence bound. If so, it
               * must be unsigned and > 0. We assign the
               * constant's value and type to the
               * expression created here so we can check
               * them later.
               */
              AST_Constant *c =
                AST_Constant::narrow_from_decl (d);

              (yyval.exval) =
                idl_global->gen ()->create_expr (
                  c->constant_value (),
                  c->et ());
            }
          else
            {
              // An AST_Expression owns the scoped name
              // passed in this constructor, so we copy it
              // and destroy it below no matter which case
              // is followed.
              (yyval.exval) =
                idl_global->gen ()->create_expr (
                  (yyvsp[(1) - (1)].idlist)->copy ());
            }

          (yyvsp[(1) - (1)].idlist)->destroy ();
          delete (yyvsp[(1) - (1)].idlist);
          (yyvsp[(1) - (1)].idlist) = 0;
        ;}
    break;

  case 178:
#line 2195 "fe/idl.ypp"
    {
//      | literal
//      | '(' const_expr ')'
          (yyval.exval) = (yyvsp[(2) - (3)].exval);
        ;}
    break;

  case 179:
#line 2204 "fe/idl.ypp"
    {
// literal : IDL_INTEGER_LITERAL
          (yyval.exval) = idl_global->gen ()->create_expr ((yyvsp[(1) - (1)].ival));
        ;}
    break;

  case 180:
#line 2209 "fe/idl.ypp"
    {
//      | IDL_UINTEGER_LITERAL
          (yyval.exval) =
            idl_global->gen ()->create_expr ((yyvsp[(1) - (1)].uival));
        ;}
    break;

  case 181:
#line 2215 "fe/idl.ypp"
    {
//      | IDL_STRING_LITERAL
          (yyval.exval) = idl_global->gen ()->create_expr ((yyvsp[(1) - (1)].sval));
          (yyvsp[(1) - (1)].sval)->destroy ();
          delete (yyvsp[(1) - (1)].sval);
          (yyvsp[(1) - (1)].sval) = 0;
        ;}
    break;

  case 182:
#line 2223 "fe/idl.ypp"
    {
//      | IDL_WSTRING_LITERAL
          (yyval.exval) = idl_global->gen ()->create_expr ((yyvsp[(1) - (1)].wsval));
        ;}
    break;

  case 183:
#line 2228 "fe/idl.ypp"
    {
//      | IDL_CHARACTER_LITERAL
          (yyval.exval) = idl_global->gen ()->create_expr ((yyvsp[(1) - (1)].cval));
        ;}
    break;

  case 184:
#line 2233 "fe/idl.ypp"
    {
//      | IDL_WCHAR_LITERAL
          ACE_OutputCDR::from_wchar wc ((yyvsp[(1) - (1)].wcval));
          (yyval.exval) = idl_global->gen ()->create_expr (wc);
        ;}
    break;

  case 185:
#line 2239 "fe/idl.ypp"
    {
          (yyval.exval) = idl_global->gen ()->create_expr ((yyvsp[(1) - (1)].fixval));
        ;}
    break;

  case 186:
#line 2243 "fe/idl.ypp"
    {
//      | IDL_FLOATING_PT_LITERAL
          (yyval.exval) = idl_global->gen ()->create_expr ((yyvsp[(1) - (1)].dval));
        ;}
    break;

  case 187:
#line 2248 "fe/idl.ypp"
    {
//      | IDL_TRUETOK
          (yyval.exval) = idl_global->gen ()->create_expr (true);
        ;}
    break;

  case 188:
#line 2253 "fe/idl.ypp"
    {
//      | IDL_FALSETOK
          (yyval.exval) = idl_global->gen ()->create_expr (false);
        ;}
    break;

  case 189:
#line 2261 "fe/idl.ypp"
    {
// positive_int_expr : const_expr
          int good_expression = 1;
          (yyvsp[(1) - (1)].exval)->evaluate (AST_Expression::EK_positive_int);
          AST_Expression::AST_ExprValue *ev = (yyvsp[(1) - (1)].exval)->ev ();

          /*
           * If const_expr is an enum value (AST_EnumVal inherits from
           * AST_Constant), the AST_ExprValue will probably not be set,
           * but there's no need to check anyway
           */
          if (ev != 0)
            {
              switch (ev->et)
              {
                case AST_Expression::EV_ushort:
                  if (ev->u.usval == 0)
                    {
                      good_expression = 0;
                    }

                  break;
                case AST_Expression::EV_ulong:
                  if (ev->u.ulval == 0)
                    {
                      good_expression = 0;
                    }

                  break;
                case AST_Expression::EV_ulonglong:
                  if (ev->u.ullval == 0)
                    {
                      good_expression = 0;
                    }

                  break;
                case AST_Expression::EV_octet:
                  if (ev->u.oval == 0)
                    {
                      good_expression = 0;
                    }

                  break;
                case AST_Expression::EV_bool:
                  if (ev->u.bval == 0)
                    {
                      good_expression = 0;
                    }

                  break;
                default:
                  good_expression = 0;
                  break;
              }
            }

          if (good_expression)
            {
              (yyval.exval) = (yyvsp[(1) - (1)].exval);
            }
          else
            {
              idl_global->err ()->syntax_error (idl_global->parse_state ());
            }
        ;}
    break;

  case 190:
#line 2330 "fe/idl.ypp"
    {
// type_dcl : IDL_TYPEDEF
          idl_global->set_parse_state (IDL_GlobalData::PS_TypedefSeen);
          idl_global->in_typedef (true);
        ;}
    break;

  case 191:
#line 2336 "fe/idl.ypp"
    {
//      type_declarator
          (yyval.dcval) = 0;
        ;}
    break;

  case 192:
#line 2341 "fe/idl.ypp"
    {
//      | struct_type
          (yyval.dcval) = 0;
        ;}
    break;

  case 193:
#line 2346 "fe/idl.ypp"
    {
//      | union_type
          (yyval.dcval) = 0;
        ;}
    break;

  case 194:
#line 2351 "fe/idl.ypp"
    {
//      | enum_type
          (yyval.dcval) = 0;
        ;}
    break;

  case 195:
#line 2356 "fe/idl.ypp"
    {
//      | IDL_NATIVE simple_declarator
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Native *node = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_NativeSeen);

          /*
           * Create a node representing a Native and add it to its
           * enclosing scope
           */
          if (s != 0)
            {
              node =
                idl_global->gen ()->create_native (
                                        (yyvsp[(2) - (2)].deval)->name ()
                                      );
              /*
               * Add it to its defining scope
               */
              (void) s->fe_add_native (node);
            }

          (yyvsp[(2) - (2)].deval)->destroy ();
          delete (yyvsp[(2) - (2)].deval);
          (yyvsp[(2) - (2)].deval) = 0;
        ;}
    break;

  case 196:
#line 2383 "fe/idl.ypp"
    {
//      | constructed_forward_type_spec
          (yyval.dcval) = 0;
        ;}
    break;

  case 197:
#line 2391 "fe/idl.ypp"
    {
// type_declarator : type_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_TypeSpecSeen);
        ;}
    break;

  case 198:
#line 2396 "fe/idl.ypp"
    {
//      at_least_one_declarator
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          FE_Declarator *d = 0;
          AST_Typedef *t = 0;
          unsigned long index = 0UL;
          idl_global->set_parse_state (IDL_GlobalData::PS_DeclaratorsSeen);

          /*
           * Create a list of type renamings. Add them to the
           * enclosing scope
           */
          if (s != 0 && (yyvsp[(1) - (3)].dcval) != 0 && (yyvsp[(3) - (3)].dlval) != 0)
            {
              for (UTL_DecllistActiveIterator l ((yyvsp[(3) - (3)].dlval));
                   !l.is_done ();
                   l.next ())
                {
                  d = l.item ();

                  if (d == 0)
                    {
                      continue;
                    }

                  AST_Type * tp = d->compose ((yyvsp[(1) - (3)].dcval));

                  if (tp == 0)
                    {
                      continue;
                    }

                  if (AST_Decl::NT_except == tp->node_type ())
                    {
                      idl_global->err ()->not_a_type (tp);
                      continue;
                    }

                  t = idl_global->gen ()->create_typedef (tp,
                                                          d->name (),
                                                          s->is_local (),
                                                          s->is_abstract ());

                  // If the base type is a sequence or array, the typedef
                  // constructor sets owns_base_type_ to true. But if
                  // there is a comma-separated list of such typedefs,
                  // the base type can be destroyed only once. In all
                  // other cases, the line below has no effect.
                  if (index++ > 0)
                    {
                      t->owns_base_type (false);
                    }

                  (void) s->fe_add_typedef (t);
                  idl_global->in_typedef (false);
                }

              // This FE_Declarator class isn't destroyed with the AST.
              (yyvsp[(3) - (3)].dlval)->destroy ();
              delete (yyvsp[(3) - (3)].dlval);
              (yyvsp[(3) - (3)].dlval) = 0;
            }
        ;}
    break;

  case 201:
#line 2468 "fe/idl.ypp"
    {
// simple_type_spec : base_type_spec
          (yyval.dcval) =
            idl_global->scopes ().bottom ()->lookup_primitive_type (
                                                 (yyvsp[(1) - (1)].etval)
                                               );
        ;}
    break;

  case 203:
#line 2477 "fe/idl.ypp"
    {
//      | template_type_spec
//      | scoped_name
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Decl *d = 0;

          if (s != 0)
            {
              d =
                s->lookup_by_name ((yyvsp[(1) - (1)].idlist));
            }

          if (d == 0)
            {
              idl_global->err ()->lookup_error ((yyvsp[(1) - (1)].idlist));
            }
          else
            {
              d->last_referenced_as ((yyvsp[(1) - (1)].idlist));
            }


          (yyval.dcval) = d;
        ;}
    break;

  case 221:
#line 2534 "fe/idl.ypp"
    {
// at_least_one_declarator : declarator declarators
          ACE_NEW_RETURN ((yyval.dlval),
                          UTL_DeclList ((yyvsp[(1) - (2)].deval),
                                        (yyvsp[(2) - (2)].dlval)),
                          1);
        ;}
    break;

  case 222:
#line 2546 "fe/idl.ypp"
    {
// declarators : declarators ','
          idl_global->set_parse_state (IDL_GlobalData::PS_DeclsCommaSeen);
        ;}
    break;

  case 223:
#line 2551 "fe/idl.ypp"
    {
//      declarator
          idl_global->set_parse_state (IDL_GlobalData::PS_DeclsDeclSeen);

          UTL_DeclList *dl = 0;
          ACE_NEW_RETURN (dl,
                          UTL_DeclList ((yyvsp[(4) - (4)].deval),
                                        0),
                          1);

          if ((yyvsp[(1) - (4)].dlval) == 0)
            {
              (yyval.dlval) = dl;
            }
          else
            {
              (yyvsp[(1) - (4)].dlval)->nconc (dl);
              (yyval.dlval) = (yyvsp[(1) - (4)].dlval);
            }
        ;}
    break;

  case 224:
#line 2572 "fe/idl.ypp"
    {
/*      |  EMPTY */
          (yyval.dlval) = 0;
        ;}
    break;

  case 227:
#line 2585 "fe/idl.ypp"
    {
// at_least_one_simple_declarator : simple_declarator simple_declarators
          ACE_NEW_RETURN ((yyval.dlval),
                          UTL_DeclList ((yyvsp[(1) - (2)].deval),
                                        (yyvsp[(2) - (2)].dlval)),
                          1);
        ;}
    break;

  case 228:
#line 2597 "fe/idl.ypp"
    {
// simple_declarators : simple_declarators ','
          idl_global->set_parse_state (IDL_GlobalData::PS_DeclsCommaSeen);
        ;}
    break;

  case 229:
#line 2602 "fe/idl.ypp"
    {
//      simple_declarator
          idl_global->set_parse_state (IDL_GlobalData::PS_DeclsDeclSeen);

          UTL_DeclList *dl = 0;
          ACE_NEW_RETURN (dl,
                          UTL_DeclList ((yyvsp[(4) - (4)].deval),
                                        0),
                          1);

          if ((yyvsp[(1) - (4)].dlval) == 0)
            {
              (yyval.dlval) = dl;
            }
          else
            {
              (yyvsp[(1) - (4)].dlval)->nconc (dl);
              (yyval.dlval) = (yyvsp[(1) - (4)].dlval);
            }
        ;}
    break;

  case 230:
#line 2623 "fe/idl.ypp"
    {
/*      |  EMPTY */
          (yyval.dlval) = 0;
        ;}
    break;

  case 231:
#line 2631 "fe/idl.ypp"
    {
// simple_declarator : id
          UTL_ScopedName *sn = 0;
          ACE_NEW_RETURN (sn,
                          UTL_ScopedName ((yyvsp[(1) - (1)].idval),
                                          0),
                          1);
          ACE_NEW_RETURN ((yyval.deval),
                          FE_Declarator (sn,
                                         FE_Declarator::FD_simple,
                                         0),
                          1);
        ;}
    break;

  case 232:
#line 2648 "fe/idl.ypp"
    {
// complex_declarator : array_declarator
          UTL_ScopedName *sn = 0;
          ACE_NEW_RETURN (sn,
                          UTL_ScopedName (
                              (yyvsp[(1) - (1)].dcval)->local_name ()->copy (),
                              0
                            ),
                          1);
          ACE_NEW_RETURN ((yyval.deval),
                          FE_Declarator (sn,
                                         FE_Declarator::FD_complex,
                                         (yyvsp[(1) - (1)].dcval)),
                          1);
        ;}
    break;

  case 235:
#line 2672 "fe/idl.ypp"
    {
// signed_int : IDL_LONG
          (yyval.etval) = AST_Expression::EV_long;
        ;}
    break;

  case 236:
#line 2677 "fe/idl.ypp"
    {
//      | IDL_LONG IDL_LONG
          (yyval.etval) = AST_Expression::EV_longlong;
        ;}
    break;

  case 237:
#line 2682 "fe/idl.ypp"
    {
//      | IDL_SHORT
          (yyval.etval) = AST_Expression::EV_short;
        ;}
    break;

  case 238:
#line 2690 "fe/idl.ypp"
    {
// unsigned_int : IDL_UNSIGNED IDL_LONG
          (yyval.etval) = AST_Expression::EV_ulong;
        ;}
    break;

  case 239:
#line 2695 "fe/idl.ypp"
    {
//      | IDL_UNSIGNED IDL_LONG IDL_LONG
          (yyval.etval) = AST_Expression::EV_ulonglong;
        ;}
    break;

  case 240:
#line 2700 "fe/idl.ypp"
    {
//      | IDL_UNSIGNED IDL_SHORT
          (yyval.etval) = AST_Expression::EV_ushort;
        ;}
    break;

  case 241:
#line 2708 "fe/idl.ypp"
    {
// floating_pt_type : IDL_DOUBLE
          (yyval.etval) = AST_Expression::EV_double;
        ;}
    break;

  case 242:
#line 2713 "fe/idl.ypp"
    {
//      | IDL_FLOAT
          (yyval.etval) = AST_Expression::EV_float;
        ;}
    break;

  case 243:
#line 2718 "fe/idl.ypp"
    {
//      | IDL_LONG IDL_DOUBLE
          (yyval.etval) = AST_Expression::EV_longdouble;
        ;}
    break;

  case 244:
#line 2726 "fe/idl.ypp"
    {
// fixed_type : IDL_FIXED
          (yyval.etval) = AST_Expression::EV_fixed;
        ;}
    break;

  case 245:
#line 2734 "fe/idl.ypp"
    {
// char_type : IDL_CHAR
          (yyval.etval) = AST_Expression::EV_char;
        ;}
    break;

  case 246:
#line 2739 "fe/idl.ypp"
    {
//      | IDL_WCHAR
          (yyval.etval) = AST_Expression::EV_wchar;
        ;}
    break;

  case 247:
#line 2747 "fe/idl.ypp"
    {
// octet_type : IDL_OCTET
          (yyval.etval) = AST_Expression::EV_octet;
        ;}
    break;

  case 248:
#line 2755 "fe/idl.ypp"
    {
// boolean_type : IDL_BOOLEAN
          (yyval.etval) = AST_Expression::EV_bool;
        ;}
    break;

  case 249:
#line 2763 "fe/idl.ypp"
    {
// any_type : IDL_ANY
          (yyval.etval) = AST_Expression::EV_any;
        ;}
    break;

  case 250:
#line 2771 "fe/idl.ypp"
    {
// object_type : IDL_OBJECT
          (yyval.etval) = AST_Expression::EV_object;
        ;}
    break;

  case 251:
#line 2779 "fe/idl.ypp"
    {
// struct_decl : IDL_STRUCT
          idl_global->set_parse_state (IDL_GlobalData::PS_StructSeen);
        ;}
    break;

  case 252:
#line 2784 "fe/idl.ypp"
    {
//      id
          idl_global->set_parse_state (IDL_GlobalData::PS_StructIDSeen);
          (yyval.idval) = (yyvsp[(3) - (3)].idval);
        ;}
    break;

  case 253:
#line 2794 "fe/idl.ypp"
    {
// struct_type : struct_header
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((yyvsp[(1) - (1)].idval),
                            0);
          AST_Structure *d = 0;

          /*
           * Create a node representing a struct declaration. Add it
           * to the enclosing scope
           */
          if (s != 0)
            {
              d =
                idl_global->gen ()->create_structure (
                                        &n,
                                        s->is_local (),
                                        s->is_abstract ()
                                      );
              AST_Structure::fwd_redefinition_helper (d,
                                                      s);
              (void) s->fe_add_structure (d);
            }

          /*
           * Push the scope of the struct on the scopes stack.
           */
          idl_global->scopes ().push (d);

          (yyvsp[(1) - (1)].idval)->destroy ();
          delete (yyvsp[(1) - (1)].idval);
          (yyvsp[(1) - (1)].idval) = 0;
        ;}
    break;

  case 254:
#line 2828 "fe/idl.ypp"
    {
//      '{'
          idl_global->set_parse_state (IDL_GlobalData::PS_StructSqSeen);
        ;}
    break;

  case 255:
#line 2833 "fe/idl.ypp"
    {
//      at_least_one_member
          idl_global->set_parse_state (IDL_GlobalData::PS_StructBodySeen);
        ;}
    break;

  case 256:
#line 2838 "fe/idl.ypp"
    {
//      '}'
          idl_global->set_parse_state (IDL_GlobalData::PS_StructQsSeen);

          /*
           * Done with this struct. Pop its scope off the scopes stack.
           */
          (yyval.dcval) = AST_Structure::narrow_from_scope (
                   idl_global->scopes ().top_non_null ()
                 );
          idl_global->scopes ().pop ();
        ;}
    break;

  case 260:
#line 2860 "fe/idl.ypp"
    {
// member  :
          /* is $0 to member_i */
          (yyval.vival) = AST_Field::vis_NA;
        ;}
    break;

  case 262:
#line 2870 "fe/idl.ypp"
    {
// member_i : type_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_MemberTypeSeen);
        ;}
    break;

  case 263:
#line 2875 "fe/idl.ypp"
    {
//      at_least_one_declarator
          idl_global->set_parse_state (IDL_GlobalData::PS_MemberDeclsSeen);
        ;}
    break;

  case 264:
#line 2880 "fe/idl.ypp"
    {
//      ';'
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          FE_Declarator *d = 0;
          AST_Field *f = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_MemberDeclsCompleted);

          /*
           * Check for illegal recursive use of type.
           */
          if ((yyvsp[(1) - (5)].dcval) != 0
              && AST_illegal_recursive_type ((yyvsp[(1) - (5)].dcval)))
            {
              idl_global->err ()->error1 (UTL_Error::EIDL_RECURSIVE_TYPE,
                                          (yyvsp[(1) - (5)].dcval));
            }
          /*
           * Create a node representing a struct or exception member
           * Add it to the enclosing scope.
           */
          else if (s != 0
                   && (yyvsp[(1) - (5)].dcval) != 0
                   && (yyvsp[(3) - (5)].dlval) != 0)
            {
              for (UTL_DecllistActiveIterator l ((yyvsp[(3) - (5)].dlval));
                   !l.is_done ();
                   l.next ())
                {
                  d = l.item ();

                  if (d == 0)
                    {
                      continue;
                    }

                  AST_Type *tp = d->compose ((yyvsp[(1) - (5)].dcval));

                  if (tp == 0)
                    {
                      continue;
                    }

                  /* $0 denotes Visibility, must be on yacc reduction stack. */
                  f =
                    idl_global->gen ()->create_field (
                                            tp,
                                            d->name (),
                                            (yyvsp[(0) - (5)].vival)
                                          );
                  (void) s->fe_add_field (f);
                }
            }

          (yyvsp[(3) - (5)].dlval)->destroy ();
          delete (yyvsp[(3) - (5)].dlval);
          (yyvsp[(3) - (5)].dlval) = 0;
        ;}
    break;

  case 265:
#line 2938 "fe/idl.ypp"
    {
//      | error
          idl_global->err()->syntax_error (idl_global->parse_state ());
        ;}
    break;

  case 266:
#line 2943 "fe/idl.ypp"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
          yyerrok;
        ;}
    break;

  case 267:
#line 2952 "fe/idl.ypp"
    {
// union_decl : IDL_UNION
          idl_global->set_parse_state (IDL_GlobalData::PS_UnionSeen);
        ;}
    break;

  case 268:
#line 2957 "fe/idl.ypp"
    {
//      id
          idl_global->set_parse_state (IDL_GlobalData::PS_UnionIDSeen);
          (yyval.idval) = (yyvsp[(3) - (3)].idval);
        ;}
    break;

  case 269:
#line 2966 "fe/idl.ypp"
    {
// union_type : union_decl IDL_SWITCH
          idl_global->set_parse_state (IDL_GlobalData::PS_SwitchSeen);
        ;}
    break;

  case 270:
#line 2971 "fe/idl.ypp"
    {
//      '('
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((yyvsp[(1) - (4)].idval),
                            0);
          AST_Union *u = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_SwitchOpenParSeen);

          /*
           * Create a node representing an empty union. Add it to its enclosing
           * scope.
           */
          if (s != 0)
            {
              u = idl_global->gen ()->create_union (0,
                                                    &n,
                                                    s->is_local (),
                                                    s->is_abstract ());

              AST_Structure *st = AST_Structure::narrow_from_decl (u);
              AST_Structure::fwd_redefinition_helper (st,
                                                      s);
              u = AST_Union::narrow_from_decl (st);
              (void) s->fe_add_union (u);
            }

          /*
           * Push the scope of the union on the scopes stack
           */
          idl_global->scopes ().push (u);

          /*
           * Don't delete $1 yet; we'll need it a bit later.
           */
        ;}
    break;

  case 271:
#line 3007 "fe/idl.ypp"
    {
//      switch_type_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_SwitchTypeSeen);
        ;}
    break;

  case 272:
#line 3012 "fe/idl.ypp"
    {
//      ')'
          /*
           * The top of the scopes must an empty union we added after we
           * encountered 'union <id> switch ('. Now we are ready to add a
           * correct one. Temporarily remove the top so that we setup the
           * correct union in a right scope.
           */
          UTL_Scope *top = idl_global->scopes ().top_non_null ();
          idl_global->scopes ().pop ();

          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((yyvsp[(1) - (8)].idval),
                            0);
          idl_global->set_parse_state (IDL_GlobalData::PS_SwitchCloseParSeen);

          /*
           * Create a node representing a union.
           */
          if ((yyvsp[(6) - (8)].dcval) != 0
              && s != 0)
            {
              AST_ConcreteType *tp =
                AST_ConcreteType::narrow_from_decl ((yyvsp[(6) - (8)].dcval));

              if (tp == 0)
                {
                  idl_global->err ()->not_a_type ((yyvsp[(6) - (8)].dcval));
                }
              else
                {
                  /* Create a union with a correct discriminator. */
                  AST_Union *u = 0;
                  u = idl_global->gen ()->create_union (tp,
                                                        &n,
                                                        s->is_local (),
                                                        s->is_abstract ());
                  /* Narrow the enclosing scope. */
                  AST_Union *e = AST_Union::narrow_from_scope (top);

                  e->redefine (u);

                  u->destroy ();
                  delete u;
                }
            }

          /*
           * Restore the top.
           */
          idl_global->scopes ().push (top);

          (yyvsp[(1) - (8)].idval)->destroy ();
          delete (yyvsp[(1) - (8)].idval);
          (yyvsp[(1) - (8)].idval) = 0;
        ;}
    break;

  case 273:
#line 3069 "fe/idl.ypp"
    {
//      '{'
          idl_global->set_parse_state (IDL_GlobalData::PS_UnionSqSeen);
        ;}
    break;

  case 274:
#line 3074 "fe/idl.ypp"
    {
//      at_least_one_case_branch
          idl_global->set_parse_state (IDL_GlobalData::PS_UnionBodySeen);
        ;}
    break;

  case 275:
#line 3079 "fe/idl.ypp"
    {
//      '}'
          idl_global->set_parse_state (IDL_GlobalData::PS_UnionQsSeen);

          /*
           * Done with this union. Pop its scope from the scopes stack.
           */
          (yyval.dcval) = AST_Union::narrow_from_scope (
                   idl_global->scopes ().top_non_null ()
                 );

          if ((yyval.dcval) != 0)
            {
              idl_global->scopes ().pop ();
            }
        ;}
    break;

  case 276:
#line 3099 "fe/idl.ypp"
    {
// switch_type_spec : integer_type
          (yyval.dcval) =
            idl_global->scopes ().bottom ()->lookup_primitive_type (
                                                 (yyvsp[(1) - (1)].etval)
                                               );
        ;}
    break;

  case 277:
#line 3107 "fe/idl.ypp"
    {
//      | char_type
          /* wchars are not allowed. */
          if ((yyvsp[(1) - (1)].etval) == AST_Expression::EV_wchar)
            {
              idl_global->err ()->error0 (UTL_Error::EIDL_DISC_TYPE);
            }

          (yyval.dcval) =
            idl_global->scopes ().bottom ()->lookup_primitive_type (
                                                 (yyvsp[(1) - (1)].etval)
                                               );
        ;}
    break;

  case 278:
#line 3121 "fe/idl.ypp"
    {
//      | octet_type
          /* octets are not allowed. */
          idl_global->err ()->error0 (UTL_Error::EIDL_DISC_TYPE);
          (yyval.dcval) =
            idl_global->scopes ().bottom ()->lookup_primitive_type (
                                                 (yyvsp[(1) - (1)].etval)
                                               );
        ;}
    break;

  case 279:
#line 3131 "fe/idl.ypp"
    {
//      | boolean_type
          (yyval.dcval) =
            idl_global->scopes ().bottom ()->lookup_primitive_type (
                                                 (yyvsp[(1) - (1)].etval)
                                               );
        ;}
    break;

  case 281:
#line 3140 "fe/idl.ypp"
    {
//      | enum_type
//      | scoped_name
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Decl *d = 0;
          AST_PredefinedType *p = 0;
          AST_Typedef *t = 0;
          bool found = false;

          /*
           * The discriminator is a scoped name. Try to resolve to
           * one of the scalar types or to an enum. Thread through
           * typedef's to arrive at the base type at the end of the
           * chain.
           */
          d =
            s->lookup_by_name ((yyvsp[(1) - (1)].idlist));

          if (s != 0 && d != 0)
            {
              while (!found)
                {
                  switch (d->node_type ())
                  {
                    case AST_Decl::NT_enum:
                      (yyval.dcval) = d;
                      found = true;
                      break;
                    case AST_Decl::NT_pre_defined:
                      p = AST_PredefinedType::narrow_from_decl (d);

                      if (p != 0)
                        {
                          switch (p->pt ())
                          {
                            case AST_PredefinedType::PT_long:
                            case AST_PredefinedType::PT_ulong:
                            case AST_PredefinedType::PT_longlong:
                            case AST_PredefinedType::PT_ulonglong:
                            case AST_PredefinedType::PT_short:
                            case AST_PredefinedType::PT_ushort:
                            case AST_PredefinedType::PT_char:
                            case AST_PredefinedType::PT_boolean:
                              (yyval.dcval) = p;
                              found = true;
                              break;
                            case AST_PredefinedType::PT_wchar:
                            case AST_PredefinedType::PT_octet:
                              /* octets and wchars are not allowed */
                              idl_global->err ()->error0 (
                                  UTL_Error::EIDL_DISC_TYPE
                                );
                              (yyval.dcval) = 0;
                              found = true;
                              break;
                            default:
                              (yyval.dcval) = 0;
                              found = true;
                              break;
                          }
                        }
                      else
                        {
                          (yyval.dcval) = 0;
                          found = true;
                        }

                      break;
                    case AST_Decl::NT_typedef:
                      t = AST_Typedef::narrow_from_decl (d);

                      if (t != 0)
                        {
                          d = t->base_type ();
                        }

                      break;
                    default:
                      (yyval.dcval) = 0;
                      found = true;
                      break;
                  }
                }
            }
          else
            {
              (yyval.dcval) = 0;
            }

          if ((yyval.dcval) == 0)
            {
              idl_global->err ()->lookup_error ((yyvsp[(1) - (1)].idlist));

              (yyvsp[(1) - (1)].idlist)->destroy ();
              delete (yyvsp[(1) - (1)].idlist);
              (yyvsp[(1) - (1)].idlist) = 0;

              /* If we don't return here, we'll crash later.*/
              return 1;
            }

          (yyvsp[(1) - (1)].idlist)->destroy ();
          delete (yyvsp[(1) - (1)].idlist);
          (yyvsp[(1) - (1)].idlist) = 0;
        ;}
    break;

  case 285:
#line 3256 "fe/idl.ypp"
    {
// case_branch : at_least_one_case_label
          idl_global->set_parse_state (IDL_GlobalData::PS_UnionLabelSeen);
        ;}
    break;

  case 286:
#line 3261 "fe/idl.ypp"
    {
//      element_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_UnionElemSeen);
        ;}
    break;

  case 287:
#line 3266 "fe/idl.ypp"
    {
//      ';'
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_UnionBranch *b = 0;
          AST_Field *f = (yyvsp[(3) - (5)].ffval);
          idl_global->set_parse_state (IDL_GlobalData::PS_UnionElemCompleted);

          /*
           * Create several nodes representing branches of a union.
           * Add them to the enclosing scope (the union scope)
           */
          if (s != 0
              &&  (yyvsp[(1) - (5)].llval) != 0
              && (yyvsp[(3) - (5)].ffval) != 0)
            {
              b =
                idl_global->gen ()->create_union_branch (
                                        (yyvsp[(1) - (5)].llval),
                                        f->field_type (),
                                        f->name ()
                                      );
              (void) s->fe_add_union_branch (b);

              // f has passed its field type to the union branch,
              // but the rest still needs to be cleaned up.
              f->AST_Decl::destroy ();
              delete f;
              f = 0;
            }
        ;}
    break;

  case 288:
#line 3297 "fe/idl.ypp"
    {
//      | error
          idl_global->err()->syntax_error (idl_global->parse_state());
        ;}
    break;

  case 289:
#line 3302 "fe/idl.ypp"
    {
//      ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
          yyerrok;
        ;}
    break;

  case 290:
#line 3311 "fe/idl.ypp"
    {
// at_least_one_case_label : case_label case_labels
          ACE_NEW_RETURN ((yyval.llval),
                          UTL_LabelList ((yyvsp[(1) - (2)].ulval),
                                         (yyvsp[(2) - (2)].llval)),
                          1);
        ;}
    break;

  case 291:
#line 3322 "fe/idl.ypp"
    {
// case_labels : case_labels case_label
          UTL_LabelList *ll = 0;
          ACE_NEW_RETURN (ll,
                          UTL_LabelList ((yyvsp[(2) - (2)].ulval),
                                         0),
                          1);

          if ((yyvsp[(1) - (2)].llval) == 0)
            {
              (yyval.llval) = ll;
            }
          else
            {
              (yyvsp[(1) - (2)].llval)->nconc (ll);
              (yyval.llval) = (yyvsp[(1) - (2)].llval);
            }
        ;}
    break;

  case 292:
#line 3341 "fe/idl.ypp"
    {
/*      |  EMPTY */
          (yyval.llval) = 0;
        ;}
    break;

  case 293:
#line 3349 "fe/idl.ypp"
    {
// case_label : IDL_DEFAULT
          idl_global->set_parse_state (IDL_GlobalData::PS_DefaultSeen);
        ;}
    break;

  case 294:
#line 3354 "fe/idl.ypp"
    {
//      ':'
          idl_global->set_parse_state (IDL_GlobalData::PS_LabelColonSeen);

          (yyval.ulval) = idl_global->gen ()->create_union_label (
                                       AST_UnionLabel::UL_default,
                                       0
                                     );
        ;}
    break;

  case 295:
#line 3364 "fe/idl.ypp"
    {
//      | IDL_CASE
          idl_global->set_parse_state (IDL_GlobalData::PS_CaseSeen);
        ;}
    break;

  case 296:
#line 3369 "fe/idl.ypp"
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_LabelExprSeen);
        ;}
    break;

  case 297:
#line 3373 "fe/idl.ypp"
    {
//      const_expr
          idl_global->set_parse_state (IDL_GlobalData::PS_LabelColonSeen);

          (yyval.ulval) = idl_global->gen()->create_union_label (
                                      AST_UnionLabel::UL_label,
                                      (yyvsp[(3) - (5)].exval)
                                    );
        ;}
    break;

  case 298:
#line 3386 "fe/idl.ypp"
    {
// element_spec : type_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_UnionElemTypeSeen);
        ;}
    break;

  case 299:
#line 3391 "fe/idl.ypp"
    {
//      declarator
          idl_global->set_parse_state (IDL_GlobalData::PS_UnionElemDeclSeen);

          /*
           * Check for illegal recursive use of type
           */
          if ((yyvsp[(1) - (3)].dcval) != 0
              && AST_illegal_recursive_type ((yyvsp[(1) - (3)].dcval)))
            {
              idl_global->err()->error1 (UTL_Error::EIDL_RECURSIVE_TYPE,
                                         (yyvsp[(1) - (3)].dcval));

              (yyval.ffval) = 0;
            }
          /*
           * Create a field in a union branch
           */
          else if ((yyvsp[(1) - (3)].dcval) == 0
                   || (yyvsp[(3) - (3)].deval) == 0)
            {
              (yyval.ffval) = 0;
            }
          else
            {
              AST_Type *tp = (yyvsp[(3) - (3)].deval)->compose ((yyvsp[(1) - (3)].dcval));

              if (tp == 0)
                {
                  (yyval.ffval) = 0;
                }
              else
                {
                  (yyval.ffval) = idl_global->gen ()->create_field (
                                               tp,
                                               (yyvsp[(3) - (3)].deval)->name ()
                                             );
                }

              (yyvsp[(3) - (3)].deval)->destroy ();
              delete (yyvsp[(3) - (3)].deval);
              (yyvsp[(3) - (3)].deval) = 0;
            }
        ;}
    break;

  case 300:
#line 3439 "fe/idl.ypp"
    {
// struct_forward_type : struct_decl
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((yyvsp[(1) - (1)].idval),
                            0);
          AST_StructureFwd *d = 0;

          /*
           * Create a node representing a forward declaration of a struct.
           */
          if (s != 0)
            {
              d = idl_global->gen ()->create_structure_fwd (&n);
              (void) s->fe_add_structure_fwd (d);
            }

          (yyvsp[(1) - (1)].idval)->destroy ();
          delete (yyvsp[(1) - (1)].idval);
          (yyvsp[(1) - (1)].idval) = 0;
        ;}
    break;

  case 301:
#line 3463 "fe/idl.ypp"
    {
// union_forward_type : union_decl
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((yyvsp[(1) - (1)].idval),
                            0);
          AST_UnionFwd *u = 0;

          /*
           * Create a node representing a forward declaration of a union.
           */
          if (s != 0)
            {
              u = idl_global->gen ()->create_union_fwd (&n);
              (void) s->fe_add_union_fwd (u);
            }

          (yyvsp[(1) - (1)].idval)->destroy ();
          delete (yyvsp[(1) - (1)].idval);
          (yyvsp[(1) - (1)].idval) = 0;
        ;}
    break;

  case 302:
#line 3487 "fe/idl.ypp"
    {
// enum_type : IDL_ENUM
          idl_global->set_parse_state (IDL_GlobalData::PS_EnumSeen);
        ;}
    break;

  case 303:
#line 3492 "fe/idl.ypp"
    {
//      id
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((yyvsp[(3) - (3)].idval),
                            0);
          AST_Enum *e = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_EnumIDSeen);

          /*
           * Create a node representing an enum and add it to its
           * enclosing scope.
           */
          if (s != 0)
            {
              e = idl_global->gen ()->create_enum (&n,
                                                   s->is_local (),
                                                   s->is_abstract ());
              /*
               * Add it to its defining scope
               */
              (void) s->fe_add_enum (e);
            }

          /*
           * Push the enum scope on the scopes stack.
           */
          idl_global->scopes ().push (e);

          (yyvsp[(3) - (3)].idval)->destroy ();
          delete (yyvsp[(3) - (3)].idval);
          (yyvsp[(3) - (3)].idval) = 0;
        ;}
    break;

  case 304:
#line 3525 "fe/idl.ypp"
    {
//      '{'
          idl_global->set_parse_state (IDL_GlobalData::PS_EnumSqSeen);
        ;}
    break;

  case 305:
#line 3530 "fe/idl.ypp"
    {
//      at_least_one_enumerator
          idl_global->set_parse_state (IDL_GlobalData::PS_EnumBodySeen);
        ;}
    break;

  case 306:
#line 3535 "fe/idl.ypp"
    {
//      '}'
          idl_global->set_parse_state (IDL_GlobalData::PS_EnumQsSeen);

          /*
           * Done with this enum. Pop its scope from the scopes stack.
           */
          if (idl_global->scopes ().top () == 0)
            {
              (yyval.dcval) = 0;
            }
          else
            {
              (yyval.dcval) = AST_Enum::narrow_from_scope (
                       idl_global->scopes ().top_non_null ()
                     );
              idl_global->scopes ().pop ();
            }
        ;}
    break;

  case 308:
#line 3561 "fe/idl.ypp"
    {
// enumerators : enumerators ','
          idl_global->set_parse_state (IDL_GlobalData::PS_EnumCommaSeen);
        ;}
    break;

  case 311:
#line 3571 "fe/idl.ypp"
    {
// enumerator : IDENTIFIER
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          Identifier id ((yyvsp[(1) - (1)].strval));
          ACE::strdelete ((yyvsp[(1) - (1)].strval));
          (yyvsp[(1) - (1)].strval) = 0;
          UTL_ScopedName n (&id,
                            0);
          AST_EnumVal *e = 0;
          AST_Enum *c = 0;

          /*
           * Create a node representing one enumerator in an enum
           * Add it to the enclosing scope (the enum scope)
           */
          if (s != 0
              && s->scope_node_type () == AST_Decl::NT_enum)
            {
              c = AST_Enum::narrow_from_scope (s);

              if (c != 0)
                {
                  e = idl_global->gen ()->create_enum_val (
                                              c->next_enum_val (),
                                              &n
                                            );
                }

              (void) s->fe_add_enum_val (e);
            }
        ;}
    break;

  case 312:
#line 3607 "fe/idl.ypp"
    {
// sequence_type_spec : seq_head ','
          idl_global->set_parse_state (IDL_GlobalData::PS_SequenceCommaSeen);
        ;}
    break;

  case 313:
#line 3612 "fe/idl.ypp"
    {
//      positive_int_expr
          idl_global->set_parse_state (IDL_GlobalData::PS_SequenceExprSeen);
        ;}
    break;

  case 314:
#line 3617 "fe/idl.ypp"
    {
//      '>'
          idl_global->set_parse_state (IDL_GlobalData::PS_SequenceQsSeen);

          /*
           * Remove sequence marker from scopes stack.
           */
          if (idl_global->scopes ().top() == 0)
            {
              idl_global->scopes ().pop ();
            }

          UTL_Scope *s = idl_global->scopes ().top_non_null ();

          /*
           * Create a node representing a sequence
           */
          AST_Expression::AST_ExprValue *ev = 0;
          AST_Param_Holder *param_holder = 0;

          if ((yyvsp[(4) - (6)].exval) != 0)
            {
              param_holder =
                (yyvsp[(4) - (6)].exval)->param_holder ();

              ev = (yyvsp[(4) - (6)].exval)->coerce (AST_Expression::EV_ulong);
            }

          // If the expression corresponds to a template parameter,
          // it's ok for the coercion to fail at this point. We check
          // for a type mismatch below.
          if (0 == (yyvsp[(4) - (6)].exval)
              || (0 == ev && 0 == param_holder))
            {
              idl_global->err ()->coercion_error ((yyvsp[(4) - (6)].exval),
                                                  AST_Expression::EV_ulong);
              (yyval.dcval) = 0;
            }
          else if (0 == (yyvsp[(1) - (6)].dcval))
            {
              (yyval.dcval) = 0;
            }
          else
            {
              AST_Type *tp = AST_Type::narrow_from_decl ((yyvsp[(1) - (6)].dcval));

              if (0 == tp)
                {
                  ; // Error will be caught in FE_Declarator.
                }
              else
                {
                  Identifier id ("sequence");
                  UTL_ScopedName sn (&id,
                                     0);

                  (yyval.dcval) =
                    idl_global->gen ()->create_sequence (
                                            (yyvsp[(4) - (6)].exval),
                                            tp,
                                            &sn,
                                            s->is_local (),
                                            s->is_abstract ()
                                          );

                  if (!idl_global->in_typedef ()
                      && !idl_global->anon_silent ())
                    {
                      idl_global->err ()->anonymous_type_diagnostic ();
                    }
                }
            }

          delete ev;
          ev = 0;
        ;}
    break;

  case 315:
#line 3695 "fe/idl.ypp"
    {
//      | seq_head '>'
          idl_global->set_parse_state (IDL_GlobalData::PS_SequenceQsSeen);

          /*
           * Remove sequence marker from scopes stack.
           */
          if (idl_global->scopes ().top () == 0)
            {
             idl_global->scopes ().pop ();
            }

          UTL_Scope *s = idl_global->scopes ().top_non_null ();

          /*
           * Create a node representing a sequence.
           */
          if ((yyvsp[(1) - (2)].dcval) == 0)
            {
              (yyval.dcval) = 0;
            }
          else
            {
              AST_Type *tp = AST_Type::narrow_from_decl ((yyvsp[(1) - (2)].dcval));

              if (tp == 0)
                {
                  ; // Error will be caught in FE_Declarator.
                }
              else
                {
                  Identifier id ("sequence");
                  UTL_ScopedName sn (&id, 0);
                  ACE_CDR::ULong bound = 0UL;

                  (yyval.dcval) =
                    idl_global->gen ()->create_sequence (
                        idl_global->gen ()->create_expr (
                                                bound,
                                                AST_Expression::EV_ulong
                                              ),
                        tp,
                        &sn,
                        s->is_local (),
                        s->is_abstract ()
                      );

                  if (!idl_global->in_typedef ()
                      && !idl_global->anon_silent ())
                    {
                      idl_global->err ()->anonymous_type_diagnostic ();
                    }
                }
            }
        ;}
    break;

  case 316:
#line 3754 "fe/idl.ypp"
    {
// seq_head : IDL_SEQUENCE
          idl_global->set_parse_state (IDL_GlobalData::PS_SequenceSeen);

          /*
           * Push a sequence marker on scopes stack.
           */
          idl_global->scopes ().push (0);
        ;}
    break;

  case 317:
#line 3764 "fe/idl.ypp"
    {
//      '<'
          idl_global->set_parse_state (IDL_GlobalData::PS_SequenceSqSeen);
        ;}
    break;

  case 318:
#line 3769 "fe/idl.ypp"
    {
//      simple_type_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_SequenceTypeSeen);
          (yyval.dcval) = (yyvsp[(5) - (5)].dcval);
        ;}
    break;

  case 319:
#line 3778 "fe/idl.ypp"
    {
          (yyvsp[(5) - (6)].exval)->evaluate (AST_Expression::EK_positive_int);
          (yyval.dcval) = idl_global->gen ()->create_fixed ((yyvsp[(3) - (6)].exval), (yyvsp[(5) - (6)].exval));
        ;}
    break;

  case 320:
#line 3787 "fe/idl.ypp"
    {
// string_type_spec : string_head '<'
          idl_global->set_parse_state (IDL_GlobalData::PS_StringSqSeen);
        ;}
    break;

  case 321:
#line 3792 "fe/idl.ypp"
    {
//      positive_int_expr
           idl_global->set_parse_state (IDL_GlobalData::PS_StringExprSeen);
        ;}
    break;

  case 322:
#line 3797 "fe/idl.ypp"
    {
//      '>'
          idl_global->set_parse_state (IDL_GlobalData::PS_StringQsSeen);

          /*
           * Create a node representing a string.
           */
          AST_Expression::AST_ExprValue *ev = 0;

          if ((yyvsp[(4) - (6)].exval) != 0)
            {
              ev = (yyvsp[(4) - (6)].exval)->coerce (AST_Expression::EV_ulong);
            }

          if (0 == (yyvsp[(4) - (6)].exval) || 0 == ev)
            {
              idl_global->err ()->coercion_error ((yyvsp[(4) - (6)].exval),
                                                  AST_Expression::EV_ulong);
              (yyval.dcval) = 0;
            }
          else
            {
              (yyval.dcval) = idl_global->gen ()->create_string ((yyvsp[(4) - (6)].exval));
              /*
               * Add this AST_String to the types defined in the global scope.
               */
              (void) idl_global->root ()->fe_add_string (
                                              AST_String::narrow_from_decl (
                                                  (yyval.dcval)
                                                )
                                            );

              if (!idl_global->in_typedef ()
                  && !idl_global->anon_silent ())
                {
                  idl_global->err ()->anonymous_type_diagnostic ();
                }
            }

          delete ev;
          ev = 0;
        ;}
    break;

  case 323:
#line 3840 "fe/idl.ypp"
    {
//      | string_head
          idl_global->set_parse_state (IDL_GlobalData::PS_StringCompleted);
          /*
           * Create a node representing a string.
           */
          ACE_CDR::ULong bound = 0UL;

          (yyval.dcval) =
            idl_global->gen ()->create_string (
                idl_global->gen ()->create_expr (bound,
                                                 AST_Expression::EV_ulong)
              );
          /*
           * Add this AST_String to the types defined in the global scope.
           */
          (void) idl_global->root ()->fe_add_string (
                                          AST_String::narrow_from_decl (
                                              (yyval.dcval)
                                            )
                                        );
        ;}
    break;

  case 324:
#line 3866 "fe/idl.ypp"
    {
// string_head : IDL_STRING
          idl_global->set_parse_state (IDL_GlobalData::PS_StringSeen);
        ;}
    break;

  case 325:
#line 3875 "fe/idl.ypp"
    {
// wstring_type_spec : wstring_head '<'
          idl_global->set_parse_state (IDL_GlobalData::PS_StringSqSeen);
        ;}
    break;

  case 326:
#line 3880 "fe/idl.ypp"
    {
//      positive_int_expr
           idl_global->set_parse_state (IDL_GlobalData::PS_StringExprSeen);
        ;}
    break;

  case 327:
#line 3885 "fe/idl.ypp"
    {
//      '>'
          idl_global->set_parse_state (IDL_GlobalData::PS_StringQsSeen);

          /*
           * Create a node representing a string.
           */
          if ((yyvsp[(4) - (6)].exval) == 0
              || (yyvsp[(4) - (6)].exval)->coerce (AST_Expression::EV_ulong) == 0)
            {
              idl_global->err ()->coercion_error ((yyvsp[(4) - (6)].exval),
                                                  AST_Expression::EV_ulong);
              (yyval.dcval) = 0;
            }
          else
            {
              (yyval.dcval) = idl_global->gen ()->create_wstring ((yyvsp[(4) - (6)].exval));
              /*
               * Add this AST_String to the types defined in the global scope.
               */
              (void) idl_global->root ()->fe_add_string (
                                              AST_String::narrow_from_decl ((yyval.dcval))
                                            );

              if (!idl_global->in_typedef ()
                  && !idl_global->anon_silent ())
                {
                  idl_global->err ()->anonymous_type_diagnostic ();
                }
            }
        ;}
    break;

  case 328:
#line 3917 "fe/idl.ypp"
    {
//      | wstring_head
          idl_global->set_parse_state (IDL_GlobalData::PS_StringCompleted);

          /*
           * Create a node representing a wstring.
           */
          ACE_CDR::ULong bound = 0UL;

          (yyval.dcval) =
            idl_global->gen ()->create_wstring (
                idl_global->gen ()->create_expr (bound,
                                                 AST_Expression::EV_ulong)
              );
          /*
           * Add this AST_String to the types defined in the global scope.
           */
          (void) idl_global->root ()->fe_add_string (
                                          AST_String::narrow_from_decl ((yyval.dcval))
                                        );
        ;}
    break;

  case 329:
#line 3942 "fe/idl.ypp"
    {
// wstring_head : IDL_WSTRING
          idl_global->set_parse_state (IDL_GlobalData::PS_StringSeen);
        ;}
    break;

  case 330:
#line 3950 "fe/idl.ypp"
    {
// array_declarator : id
          idl_global->set_parse_state (IDL_GlobalData::PS_ArrayIDSeen);
        ;}
    break;

  case 331:
#line 3955 "fe/idl.ypp"
    {
//      at_least_one_array_dim
          idl_global->set_parse_state (IDL_GlobalData::PS_ArrayCompleted);

          /*
           * Create a node representing an array.
           */
          if ((yyvsp[(3) - (3)].elval) != 0)
            {
              UTL_ScopedName sn ((yyvsp[(1) - (3)].idval),
                                 0);
              (yyval.dcval) =
                idl_global->gen ()->create_array (
                                        &sn,
                                        (yyvsp[(3) - (3)].elval)->length (),
                                        (yyvsp[(3) - (3)].elval),
                                        0,
                                        0
                                      );

              (yyvsp[(3) - (3)].elval)->destroy ();
              delete (yyvsp[(3) - (3)].elval);
              (yyvsp[(3) - (3)].elval) = 0;

              sn.destroy ();

              if (!idl_global->in_typedef ()
                  && !idl_global->anon_silent ())
                {
                  idl_global->err ()->anonymous_type_diagnostic ();
                }
            }
        ;}
    break;

  case 332:
#line 3992 "fe/idl.ypp"
    {
// at_least_one_array_dim : array_dim array_dims
          ACE_NEW_RETURN ((yyval.elval),
                          UTL_ExprList ((yyvsp[(1) - (2)].exval),
                                        (yyvsp[(2) - (2)].elval)),
                          1);
        ;}
    break;

  case 333:
#line 4003 "fe/idl.ypp"
    {
// array_dims : array_dims array_dim
          UTL_ExprList *el = 0;
          ACE_NEW_RETURN (el,
                          UTL_ExprList ((yyvsp[(2) - (2)].exval),
                                        0),
                          1);

          if ((yyvsp[(1) - (2)].elval) == 0)
            {
              (yyval.elval) = el;
            }
          else
            {
              (yyvsp[(1) - (2)].elval)->nconc (el);
              (yyval.elval) = (yyvsp[(1) - (2)].elval);
            }
        ;}
    break;

  case 334:
#line 4022 "fe/idl.ypp"
    {
/*      |  EMPTY */
          (yyval.elval) = 0;
        ;}
    break;

  case 335:
#line 4030 "fe/idl.ypp"
    {
// array_dim : '['
          idl_global->set_parse_state (IDL_GlobalData::PS_DimSqSeen);
        ;}
    break;

  case 336:
#line 4035 "fe/idl.ypp"
    {
//      positive_int_expr
          idl_global->set_parse_state (IDL_GlobalData::PS_DimExprSeen);
        ;}
    break;

  case 337:
#line 4040 "fe/idl.ypp"
    {
//      ']'
          idl_global->set_parse_state (IDL_GlobalData::PS_DimQsSeen);

          /*
           * Array dimensions are expressions which must be coerced to
           * positive integers.
           */
          AST_Expression::AST_ExprValue *ev = 0;
          AST_Param_Holder *param_holder = 0;

          if ((yyvsp[(3) - (5)].exval) != 0)
            {
              param_holder =
                (yyvsp[(3) - (5)].exval)->param_holder ();

              ev =
                (yyvsp[(3) - (5)].exval)->coerce (AST_Expression::EV_ulong);
            }

          if (0 == (yyvsp[(3) - (5)].exval)
              || (ev == 0 && param_holder == 0))
            {
              idl_global->err ()->coercion_error ((yyvsp[(3) - (5)].exval),
                                                  AST_Expression::EV_ulong);
              (yyval.exval) = 0;
            }
          else
            {
              if (param_holder != 0)
                {
                  AST_Expression::ExprType et =
                    param_holder->info ()->const_type_;

                  // If the bound expression represents a
                  // template parameter, it must be a const
                  // and of type unsigned long.
                  if (et != AST_Expression::EV_ulong)
                    {
                      idl_global->err ()->mismatched_template_param (
                        param_holder->info ()->name_.c_str ());

                      delete ev;
                      ev = 0;
                      return 1;
                    }
                }

              (yyval.exval) = (yyvsp[(3) - (5)].exval);
            }

          delete ev;
          ev = 0;
        ;}
    break;

  case 340:
#line 4103 "fe/idl.ypp"
    {
// attribute_readonly : IDL_READONLY
          idl_global->set_parse_state (IDL_GlobalData::PS_AttrROSeen);
        ;}
    break;

  case 341:
#line 4108 "fe/idl.ypp"
    {
//      IDL_ATTRIBUTE
          idl_global->set_parse_state (IDL_GlobalData::PS_AttrSeen);
        ;}
    break;

  case 342:
#line 4113 "fe/idl.ypp"
    {
//      param_type_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_AttrTypeSeen);
        ;}
    break;

  case 343:
#line 4118 "fe/idl.ypp"
    {
//      at_least_one_simple_declarator
          idl_global->set_parse_state (IDL_GlobalData::PS_AttrDeclsSeen);
        ;}
    break;

  case 344:
#line 4123 "fe/idl.ypp"
    {
//      opt_raises
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Attribute *a = 0;
          FE_Declarator *d = 0;

          idl_global->set_parse_state (IDL_GlobalData::PS_OpRaiseCompleted);

          /*
           * Create nodes representing attributes and add them to the
           * enclosing scope.
           */
          if (s != 0
              && (yyvsp[(5) - (9)].dcval) != 0
              && (yyvsp[(7) - (9)].dlval) != 0)
            {
              for (UTL_DecllistActiveIterator l ((yyvsp[(7) - (9)].dlval));
                   !l.is_done ();
                   l.next ())
                {
                  d = l.item ();

                  if (d == 0)
                    {
                      continue;
                    }

                  AST_Type *tp = d->compose ((yyvsp[(5) - (9)].dcval));

                  if (tp == 0)
                    {
                      continue;
                    }

                  a =
                    idl_global->gen ()->create_attribute (
                                            true,
                                            tp,
                                            d->name (),
                                            s->is_local (),
                                            s->is_abstract ()
                                          );

                  if ((yyvsp[(9) - (9)].nlval) != 0)
                    {
                      (void) a->fe_add_get_exceptions ((yyvsp[(9) - (9)].nlval));

                      (yyvsp[(9) - (9)].nlval)->destroy ();
                      delete (yyvsp[(9) - (9)].nlval);
                      (yyvsp[(9) - (9)].nlval) = 0;
                    }

                  (void) s->fe_add_attribute (a);
                }
            }

          (yyvsp[(7) - (9)].dlval)->destroy ();
          delete (yyvsp[(7) - (9)].dlval);
          (yyvsp[(7) - (9)].dlval) = 0;
        ;}
    break;

  case 345:
#line 4187 "fe/idl.ypp"
    {
// attribute_readwrite : IDL_ATTRIBUTE
          idl_global->set_parse_state (IDL_GlobalData::PS_AttrSeen);
        ;}
    break;

  case 346:
#line 4192 "fe/idl.ypp"
    {
//      param_type_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_AttrTypeSeen);
        ;}
    break;

  case 347:
#line 4197 "fe/idl.ypp"
    {
//      at_least_one_simple_declarator
          idl_global->set_parse_state (IDL_GlobalData::PS_AttrDeclsSeen);
        ;}
    break;

  case 348:
#line 4202 "fe/idl.ypp"
    {
//      opt_getraises
          idl_global->set_parse_state (IDL_GlobalData::PS_OpGetRaiseCompleted);
        ;}
    break;

  case 349:
#line 4207 "fe/idl.ypp"
    {
//      opt_setraises
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Attribute *a = 0;
          FE_Declarator *d = 0;

          idl_global->set_parse_state (IDL_GlobalData::PS_OpSetRaiseCompleted);

          /*
           * Create nodes representing attributes and add them to the
           * enclosing scope.
           */
          if (s != 0
              && (yyvsp[(3) - (9)].dcval) != 0
              && (yyvsp[(5) - (9)].dlval) != 0)
            {
              for (UTL_DecllistActiveIterator l ((yyvsp[(5) - (9)].dlval));
                   !l.is_done ();
                   l.next ())
                {
                  d = l.item ();

                  if (d == 0)
                    {
                      continue;
                    }

                  AST_Type *tp = d->compose ((yyvsp[(3) - (9)].dcval));

                  if (tp == 0)
                    {
                      continue;
                    }

                  a =
                    idl_global->gen ()->create_attribute (
                                            false,
                                            tp,
                                            d->name (),
                                            s->is_local (),
                                            s->is_abstract ()
                                          );

                  if ((yyvsp[(7) - (9)].nlval) != 0)
                    {
                      (void) a->fe_add_get_exceptions ((yyvsp[(7) - (9)].nlval));

                      (yyvsp[(7) - (9)].nlval)->destroy ();
                      delete (yyvsp[(7) - (9)].nlval);
                      (yyvsp[(7) - (9)].nlval) = 0;
                    }

                  if ((yyvsp[(9) - (9)].nlval) != 0)
                    {
                      (void) a->fe_add_set_exceptions ((yyvsp[(9) - (9)].nlval));

                      (yyvsp[(9) - (9)].nlval)->destroy ();
                      delete (yyvsp[(9) - (9)].nlval);
                      (yyvsp[(9) - (9)].nlval) = 0;
                    }

                  (void) s->fe_add_attribute (a);
                }
            }

          (yyvsp[(5) - (9)].dlval)->destroy ();
          delete (yyvsp[(5) - (9)].dlval);
          (yyvsp[(5) - (9)].dlval) = 0;
        ;}
    break;

  case 350:
#line 4280 "fe/idl.ypp"
    {
// exception : IDL_EXCEPTION
          idl_global->set_parse_state (IDL_GlobalData::PS_ExceptSeen);
        ;}
    break;

  case 351:
#line 4285 "fe/idl.ypp"
    {
//      id
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((yyvsp[(3) - (3)].idval),
                            0);
          AST_Exception *e = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_ExceptIDSeen);

          /*
           * Create a node representing an exception and add it to
           * the enclosing scope.
           */
          if (s != 0)
            {
              e = idl_global->gen ()->create_exception (&n,
                                                        s->is_local (),
                                                        s->is_abstract ());
              (void) s->fe_add_exception (e);
            }

          /*
           * Push the exception scope on the scope stack.
           */
          idl_global->scopes ().push (e);

          (yyvsp[(3) - (3)].idval)->destroy ();
          delete (yyvsp[(3) - (3)].idval);
          (yyvsp[(3) - (3)].idval) = 0;
        ;}
    break;

  case 352:
#line 4315 "fe/idl.ypp"
    {
//       '{'
          idl_global->set_parse_state (IDL_GlobalData::PS_ExceptSqSeen);
        ;}
    break;

  case 353:
#line 4320 "fe/idl.ypp"
    {
//      members
          idl_global->set_parse_state (IDL_GlobalData::PS_ExceptBodySeen);
        ;}
    break;

  case 354:
#line 4325 "fe/idl.ypp"
    {
//      '}'
          idl_global->set_parse_state (IDL_GlobalData::PS_ExceptQsSeen);
          /*
           * Done with this exception. Pop its scope from the scope stack.
           */
          idl_global->scopes ().pop ();
        ;}
    break;

  case 355:
#line 4338 "fe/idl.ypp"
    {
// operation : opt_op_attribute op_type_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_OpTypeSeen);
        ;}
    break;

  case 356:
#line 4343 "fe/idl.ypp"
    {
//      IDENTIFIER
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          Identifier id ((yyvsp[(4) - (4)].strval));
          ACE::strdelete ((yyvsp[(4) - (4)].strval));
          (yyvsp[(4) - (4)].strval) = 0;

          UTL_ScopedName n (&id, 0);
          AST_Operation *o = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_OpIDSeen);

          /*
           * Create a node representing an operation on an interface
           * and add it to its enclosing scope.
           */
          if (s != 0 && (yyvsp[(2) - (4)].dcval) != 0)
            {
              AST_Type *tp =
                AST_Type::narrow_from_decl ((yyvsp[(2) - (4)].dcval));

              if (tp == 0)
                {
                  idl_global->err ()->not_a_type ((yyvsp[(2) - (4)].dcval));
                }
              else if (tp->node_type () == AST_Decl::NT_except)
                {
                  idl_global->err ()->not_a_type ((yyvsp[(2) - (4)].dcval));
                }
              else
                {
                  AST_Decl *d = ScopeAsDecl (s);
                  AST_Decl::NodeType nt = d->node_type ();
                  bool local =
                    s->is_local ()
                    || nt == AST_Decl::NT_valuetype
                    || nt == AST_Decl::NT_eventtype;

                  o =
                    idl_global->gen ()->create_operation (
                      tp,
                      (yyvsp[(1) - (4)].ofval),
                      &n,
                      local,
                      s->is_abstract ());

                  if (!local && tp->is_local ())
                    {
                      idl_global->err ()->local_remote_mismatch (tp, o);
                      o->destroy ();
                      delete o;
                      o = 0;
                    }
                  else
                    {
                      (void) s->fe_add_operation (o);
                    }
                }
            }

          /*
           * Push the operation scope onto the scopes stack.
           */
          idl_global->scopes ().push (o);
        ;}
    break;

  case 357:
#line 4408 "fe/idl.ypp"
    {
//      parameter_list
          idl_global->set_parse_state (IDL_GlobalData::PS_OpParsCompleted);
        ;}
    break;

  case 358:
#line 4413 "fe/idl.ypp"
    {
//      opt_raises
          idl_global->set_parse_state (IDL_GlobalData::PS_OpRaiseCompleted);
        ;}
    break;

  case 359:
#line 4418 "fe/idl.ypp"
    {
//      opt_context
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Operation *o = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_OpCompleted);

          /*
           * Add exceptions and context to the operation.
           */
          if (s != 0 && s->scope_node_type () == AST_Decl::NT_op)
            {
              o = AST_Operation::narrow_from_scope (s);

              if ((yyvsp[(8) - (10)].nlval) != 0 && o != 0)
                {
                  (void) o->fe_add_exceptions ((yyvsp[(8) - (10)].nlval));
                }

              if ((yyvsp[(10) - (10)].slval) != 0)
                {
                  (void) o->fe_add_context ((yyvsp[(10) - (10)].slval));
                }
            }

          /*
           * Done with this operation. Pop its scope from the scopes stack.
           */
          idl_global->scopes ().pop ();
        ;}
    break;

  case 360:
#line 4451 "fe/idl.ypp"
    {
// opt_op_attribute : IDL_ONEWAY
          idl_global->set_parse_state (IDL_GlobalData::PS_OpAttrSeen);
          (yyval.ofval) = AST_Operation::OP_oneway;
        ;}
    break;

  case 361:
#line 4457 "fe/idl.ypp"
    {
//      | IDL_IDEMPOTENT
          idl_global->set_parse_state (IDL_GlobalData::PS_OpAttrSeen);
          (yyval.ofval) = AST_Operation::OP_idempotent;
        ;}
    break;

  case 362:
#line 4463 "fe/idl.ypp"
    {
/*      |  EMPTY */
          (yyval.ofval) = AST_Operation::OP_noflags;
        ;}
    break;

  case 364:
#line 4472 "fe/idl.ypp"
    {
// op_type_spec : param_type_spec | IDL_VOID
          (yyval.dcval) =
            idl_global->scopes ().bottom ()->lookup_primitive_type (
                                                  AST_Expression::EV_void
                                                );
        ;}
    break;

  case 365:
#line 4483 "fe/idl.ypp"
    {
// init_decl : IDL_FACTORY
          //@@ PS_FactorySeen?
          idl_global->set_parse_state (IDL_GlobalData::PS_OpTypeSeen);
        ;}
    break;

  case 366:
#line 4489 "fe/idl.ypp"
    {
//      IDENTIFIER
          UTL_Scope *s = idl_global->scopes ().top_non_null ();

          if (s->is_abstract ())
            {
              //@@ Fire error
              ACE_ERROR ((LM_ERROR,
                          ACE_TEXT ("error in %C line %d:\n")
                          ACE_TEXT ("Abstract valuetype can't have a ")
                          ACE_TEXT ("factory construct.\n"),
                          idl_global->filename ()->get_string (),
                          idl_global->lineno ()));

              idl_global->set_err_count (idl_global->err_count () + 1);
            }

          Identifier id ((yyvsp[(3) - (3)].strval));
          ACE::strdelete ((yyvsp[(3) - (3)].strval));
          (yyvsp[(3) - (3)].strval) = 0;

          UTL_ScopedName n (&id,
                            0);
          AST_Factory *factory = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_OpIDSeen);

          /*
           * Create a node representing an factory construct
           * and add it to its enclosing scope
           */
          if (s != 0)
            {
              factory = idl_global->gen ()->create_factory (&n);
              (void) s->fe_add_factory (factory);
            }

          /*
           * Push the operation scope onto the scopes stack.
           */
          idl_global->scopes ().push (factory);
        ;}
    break;

  case 367:
#line 4531 "fe/idl.ypp"
    {
//      init_parameter_list
          idl_global->set_parse_state (IDL_GlobalData::PS_OpParsCompleted);
        ;}
    break;

  case 368:
#line 4536 "fe/idl.ypp"
    {
//      opt_raises
          idl_global->set_parse_state (IDL_GlobalData::PS_OpRaiseCompleted);

          if ((yyvsp[(7) - (7)].nlval) != 0)
            {
              UTL_Scope *s = idl_global->scopes ().top_non_null ();
              AST_Factory *f = AST_Factory::narrow_from_scope (s);
              (void) f->fe_add_exceptions ((yyvsp[(7) - (7)].nlval));
            }

          idl_global->scopes ().pop ();
        ;}
    break;

  case 369:
#line 4553 "fe/idl.ypp"
    {
// init_parameter_list : '('
          idl_global->set_parse_state (IDL_GlobalData::PS_OpSqSeen);
        ;}
    break;

  case 370:
#line 4558 "fe/idl.ypp"
    {
//      ')'
          idl_global->set_parse_state (IDL_GlobalData::PS_OpQsSeen);
        ;}
    break;

  case 371:
#line 4563 "fe/idl.ypp"
    {
//      | '('
          idl_global->set_parse_state (IDL_GlobalData::PS_OpSqSeen);
        ;}
    break;

  case 372:
#line 4569 "fe/idl.ypp"
    {
//      at_least_one_in_parameter ')'
          idl_global->set_parse_state (IDL_GlobalData::PS_OpQsSeen);
        ;}
    break;

  case 374:
#line 4580 "fe/idl.ypp"
    {
// in_parameters : in_parameters ','
          idl_global->set_parse_state (IDL_GlobalData::PS_OpParCommaSeen);
        ;}
    break;

  case 377:
#line 4590 "fe/idl.ypp"
    {
// in_parameter : IDL_IN
          idl_global->set_parse_state (IDL_GlobalData::PS_OpParDirSeen);
        ;}
    break;

  case 378:
#line 4595 "fe/idl.ypp"
    {
//      param_type_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_OpParTypeSeen);
        ;}
    break;

  case 379:
#line 4600 "fe/idl.ypp"
    {
//      declarator
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Argument *a = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_OpParDeclSeen);

          /*
           * Create a node representing an argument to an operation
           * Add it to the enclosing scope (the operation scope).
           */
          if ((yyvsp[(3) - (5)].dcval) != 0
              && (yyvsp[(5) - (5)].deval) != 0 &&
              s != 0)
            {
              AST_Type *tp = (yyvsp[(5) - (5)].deval)->compose ((yyvsp[(3) - (5)].dcval));

              if (tp != 0)
                {
                  a = idl_global->gen ()->create_argument (
                          AST_Argument::dir_IN,
                          tp,
                          (yyvsp[(5) - (5)].deval)->name ()
                        );

                  (void) s->fe_add_argument (a);
                }
            }

          (yyvsp[(5) - (5)].deval)->destroy ();
          delete (yyvsp[(5) - (5)].deval);
          (yyvsp[(5) - (5)].deval) = 0;
        ;}
    break;

  case 380:
#line 4636 "fe/idl.ypp"
    {
// parameter_list : '('
          idl_global->set_parse_state (IDL_GlobalData::PS_OpSqSeen);
        ;}
    break;

  case 381:
#line 4641 "fe/idl.ypp"
    {
//      ')'
          idl_global->set_parse_state (IDL_GlobalData::PS_OpQsSeen);
        ;}
    break;

  case 382:
#line 4646 "fe/idl.ypp"
    {
//      | '('
          idl_global->set_parse_state (IDL_GlobalData::PS_OpSqSeen);
        ;}
    break;

  case 383:
#line 4652 "fe/idl.ypp"
    {
//      at_least_one_parameter ')'
          idl_global->set_parse_state (IDL_GlobalData::PS_OpQsSeen);
        ;}
    break;

  case 385:
#line 4663 "fe/idl.ypp"
    {
// parameters : parameters ','
          idl_global->set_parse_state (IDL_GlobalData::PS_OpParCommaSeen);
        ;}
    break;

  case 388:
#line 4673 "fe/idl.ypp"
    {
// parameter : direction
          idl_global->set_parse_state (IDL_GlobalData::PS_OpParDirSeen);
        ;}
    break;

  case 389:
#line 4678 "fe/idl.ypp"
    {
//      param_type_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_OpParTypeSeen);
        ;}
    break;

  case 390:
#line 4683 "fe/idl.ypp"
    {
//      declarator
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Argument *a = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_OpParDeclSeen);

          /*
           * Create a node representing an argument to an operation
           * Add it to the enclosing scope (the operation scope).
           */
          if ((yyvsp[(3) - (5)].dcval) != 0
              && (yyvsp[(5) - (5)].deval) != 0
              && s != 0)
            {
              AST_Type *tp = (yyvsp[(5) - (5)].deval)->compose ((yyvsp[(3) - (5)].dcval));

              if (tp != 0)
                {
                  if (!s->is_local () && tp->is_local ())
                    {
                      idl_global->err ()->local_remote_mismatch (tp, s);
                    }
                  else
                    {
                      a =
                        idl_global->gen ()->create_argument (
                            (yyvsp[(1) - (5)].dival),
                            tp,
                            (yyvsp[(5) - (5)].deval)->name ()
                          );
                      (void) s->fe_add_argument (a);
                    }
                }
            }

          (yyvsp[(5) - (5)].deval)->destroy ();
          delete (yyvsp[(5) - (5)].deval);
          (yyvsp[(5) - (5)].deval) = 0;
        ;}
    break;

  case 391:
#line 4726 "fe/idl.ypp"
    {
// param_type_spec : base_type_spec
          (yyval.dcval) =
            idl_global->scopes ().bottom ()->lookup_primitive_type (
                                                 (yyvsp[(1) - (1)].etval)
                                               );
        ;}
    break;

  case 394:
#line 4736 "fe/idl.ypp"
    {
//      | string_type_spec
//      | wstring_type_spec
//      | scoped_name
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Decl *d = 0;
          UTL_ScopedName *n = (yyvsp[(1) - (1)].idlist);

          if (s != 0)
            {
              d = s->lookup_by_name (n, false, false);
            }

          if (d == 0)
            {
              idl_global->err ()->lookup_error (n);
              (yyvsp[(1) - (1)].idlist)->destroy ();
              (yyvsp[(1) - (1)].idlist) = 0;

              /* If we don't return here, we'll crash later.*/
              return 1;
            }
          else
            {
              d->last_referenced_as ((yyvsp[(1) - (1)].idlist));
              AST_Decl::NodeType nt = d->node_type ();
              AST_Type *t = AST_Type::narrow_from_decl (d);
              AST_Typedef *td = 0;
              bool can_be_undefined = false;

              if (nt == AST_Decl::NT_typedef)
                {
                  // This code block ensures that a sequence of
                  // as-yet-undefined struct or union isn't used
                  // as a return type or argument.
                  td = AST_Typedef::narrow_from_decl (d);
                  AST_Type *pbt = td->primitive_base_type ();

                  if (pbt->node_type () == AST_Decl::NT_sequence)
                    {
                      t = pbt;
                      AST_Sequence *seq_type =
                        AST_Sequence::narrow_from_decl (pbt);
                      AST_Type *elem_type =
                        seq_type->base_type ();
                      AST_Decl::NodeType elem_nt =
                        elem_type->node_type ();

                      if (elem_nt == AST_Decl::NT_typedef)
                        {
                          AST_Typedef *elem_td =
                            AST_Typedef::narrow_from_decl (elem_type);
                          elem_type = elem_td->primitive_base_type ();
                          elem_nt = elem_type->node_type ();
                        }

                      if (elem_nt == AST_Decl::NT_interface
                          || elem_nt == AST_Decl::NT_interface_fwd
                          || elem_nt == AST_Decl::NT_valuetype
                          || elem_nt == AST_Decl::NT_valuetype_fwd
                          || elem_nt == AST_Decl::NT_component
                          || elem_nt == AST_Decl::NT_component_fwd)
                        {
                          can_be_undefined = true;
                        }
                    }

                  if (! t->is_defined () && ! can_be_undefined)
                    {
                      idl_global->err ()->error1 (
                        UTL_Error::EIDL_ILLEGAL_ADD,
                        (nt == AST_Decl::NT_typedef ? td : t));

                      /* If we don't return here, we'll crash later.*/
                      return 1;
                    }
                }
              else
                {
                  // For forward declared structs and unions, we
                  // want the full definition, but we need to
                  // check that it's been fully defined.
                  AST_StructureFwd *fwd =
                    AST_StructureFwd::narrow_from_decl (d);

                  if (fwd != 0)
                    {
                      t = fwd->full_definition ();

                      if (! t->is_defined ())
                        {
                          idl_global->err ()->error1 (
                            UTL_Error::EIDL_ILLEGAL_ADD,
                            t);

                          /* If we don't return here, we'll crash later.*/
                          return 1;
                        }

                      d = t;
                    }
                }
            }

          (yyval.dcval) = d;
        ;}
    break;

  case 395:
#line 4846 "fe/idl.ypp"
    {
// direction : IDL_IN
          (yyval.dival) = AST_Argument::dir_IN;
        ;}
    break;

  case 396:
#line 4851 "fe/idl.ypp"
    {
//      | IDL_OUT
          (yyval.dival) = AST_Argument::dir_OUT;
        ;}
    break;

  case 397:
#line 4856 "fe/idl.ypp"
    {
//      | IDL_INOUT
          (yyval.dival) = AST_Argument::dir_INOUT;
        ;}
    break;

  case 398:
#line 4864 "fe/idl.ypp"
    {
// opt_raises : IDL_RAISES
          idl_global->set_parse_state (IDL_GlobalData::PS_OpRaiseSeen);
        ;}
    break;

  case 399:
#line 4869 "fe/idl.ypp"
    {
//      '('
          idl_global->set_parse_state (IDL_GlobalData::PS_OpRaiseSqSeen);
        ;}
    break;

  case 400:
#line 4875 "fe/idl.ypp"
    {
//      at_least_one_scoped_name ')'
          idl_global->set_parse_state (IDL_GlobalData::PS_OpRaiseQsSeen);
          (yyval.nlval) = (yyvsp[(5) - (6)].nlval);
        ;}
    break;

  case 401:
#line 4881 "fe/idl.ypp"
    {
          (yyval.nlval) = 0;
/*      |  EMPTY */
        ;}
    break;

  case 402:
#line 4889 "fe/idl.ypp"
    {
// opt_getraises : IDL_GETRAISES
          idl_global->set_parse_state (IDL_GlobalData::PS_OpGetRaiseSeen);
        ;}
    break;

  case 403:
#line 4894 "fe/idl.ypp"
    {
//      '('
          idl_global->set_parse_state (IDL_GlobalData::PS_OpGetRaiseSqSeen);
        ;}
    break;

  case 404:
#line 4900 "fe/idl.ypp"
    {
//      at_least_one_scoped_name ')'
          idl_global->set_parse_state (IDL_GlobalData::PS_OpGetRaiseQsSeen);
          (yyval.nlval) = (yyvsp[(5) - (6)].nlval);
        ;}
    break;

  case 405:
#line 4906 "fe/idl.ypp"
    {
          (yyval.nlval) = 0;
/*      |  EMPTY */
        ;}
    break;

  case 406:
#line 4914 "fe/idl.ypp"
    {
// opt_setraises : IDL_SETRAISES
          idl_global->set_parse_state (IDL_GlobalData::PS_OpSetRaiseSeen);
        ;}
    break;

  case 407:
#line 4919 "fe/idl.ypp"
    {
//      '('
          idl_global->set_parse_state (IDL_GlobalData::PS_OpSetRaiseSqSeen);
        ;}
    break;

  case 408:
#line 4925 "fe/idl.ypp"
    {
//      at_least_one_scoped_name ')'
          idl_global->set_parse_state (IDL_GlobalData::PS_OpSetRaiseQsSeen);
          (yyval.nlval) = (yyvsp[(5) - (6)].nlval);
        ;}
    break;

  case 409:
#line 4931 "fe/idl.ypp"
    {
          (yyval.nlval) = 0;
/*      |  EMPTY */
        ;}
    break;

  case 410:
#line 4939 "fe/idl.ypp"
    {
// opt_context : IDL_CONTEXT
          idl_global->set_parse_state (IDL_GlobalData::PS_OpContextSeen);
        ;}
    break;

  case 411:
#line 4944 "fe/idl.ypp"
    {
          idl_global->set_parse_state (IDL_GlobalData::PS_OpContextSqSeen);
//      '('
        ;}
    break;

  case 412:
#line 4950 "fe/idl.ypp"
    {
//      at_least_one_string_literal ')'
          idl_global->set_parse_state (IDL_GlobalData::PS_OpContextQsSeen);
          (yyval.slval) = (yyvsp[(5) - (6)].slval);
        ;}
    break;

  case 413:
#line 4956 "fe/idl.ypp"
    {
/*      |  EMPTY */
          (yyval.slval) = 0;
        ;}
    break;

  case 414:
#line 4964 "fe/idl.ypp"
    {
// at_least_one_string_literal : IDL_STRING_LITERAL string_literals
          ACE_NEW_RETURN ((yyval.slval),
                          UTL_StrList ((yyvsp[(1) - (2)].sval),
                                       (yyvsp[(2) - (2)].slval)),
                          1);
        ;}
    break;

  case 415:
#line 4976 "fe/idl.ypp"
    {
// string_literals : string_literals ','
          idl_global->set_parse_state (IDL_GlobalData::PS_OpContextCommaSeen);
        ;}
    break;

  case 416:
#line 4981 "fe/idl.ypp"
    {
//      IDL_STRING_LITERAL
          UTL_StrList *sl = 0;
          ACE_NEW_RETURN (sl,
                          UTL_StrList ((yyvsp[(4) - (4)].sval),
                                       0),
                          1);

          if ((yyvsp[(1) - (4)].slval) == 0)
            {
              (yyval.slval) = sl;
            }
          else
            {
              (yyvsp[(1) - (4)].slval)->nconc (sl);
              (yyval.slval) = (yyvsp[(1) - (4)].slval);
            }
        ;}
    break;

  case 417:
#line 5000 "fe/idl.ypp"
    {
/*      |  EMPTY */
          (yyval.slval) = 0;
        ;}
    break;

  case 418:
#line 5008 "fe/idl.ypp"
    {
// typeid_dcl : IDL_TYPEID scoped_name IDL_STRING_LITERAL
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Decl *d =
            s->lookup_by_name ((yyvsp[(2) - (3)].idlist));

          if (d == 0)
            {
              idl_global->err ()->lookup_error ((yyvsp[(2) - (3)].idlist));
            }
          else
            {
              d->set_id_with_typeid (
                     (yyvsp[(3) - (3)].sval)->get_string ()
                   );
            }

          (yyvsp[(2) - (3)].idlist)->destroy ();
          delete (yyvsp[(2) - (3)].idlist);
          (yyvsp[(2) - (3)].idlist) = 0;

          (yyvsp[(3) - (3)].sval)->destroy ();
          delete (yyvsp[(3) - (3)].sval);
          (yyvsp[(3) - (3)].sval) = 0;
        ;}
    break;

  case 419:
#line 5037 "fe/idl.ypp"
    {
// typeprefix_dcl : IDL_TYPEPREFIX scoped_name IDL_STRING_LITERAL
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Decl *d = ScopeAsDecl (s);

          // If we are in a module, we want to avoid a lookup unless the
          // typeprefix is to be applied to some other scope, since we
          // might get a previous opening of the module, and the prefix
          // of this opening would never get checked or set.
          if (d->name ()->compare ((yyvsp[(2) - (3)].idlist)) != 0)
            {
              d =
                s->lookup_by_name ((yyvsp[(2) - (3)].idlist));
            }

          if (d == 0)
            {
              idl_global->err ()->lookup_error ((yyvsp[(2) - (3)].idlist));
            }
          else
            {
              d->set_prefix_with_typeprefix (
                     (yyvsp[(3) - (3)].sval)->get_string ()
                   );
            }

          (yyvsp[(2) - (3)].idlist)->destroy ();
          delete (yyvsp[(2) - (3)].idlist);
          (yyvsp[(2) - (3)].idlist) = 0;

          (yyvsp[(3) - (3)].sval)->destroy ();
          delete (yyvsp[(3) - (3)].sval);
          (yyvsp[(3) - (3)].sval) = 0;
        ;}
    break;

  case 422:
#line 5081 "fe/idl.ypp"
    {
// component_forward_decl : IDL_COMPONENT id
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((yyvsp[(2) - (2)].idval),
                            0);
          AST_ComponentFwd *f = 0;
          idl_global->set_parse_state (
                          IDL_GlobalData::PS_ComponentForwardSeen
                        );

          /*
           * Create a node representing a forward declaration of a
           * component. Store it in the enclosing scope.
           */
          if (s != 0)
            {
              f = idl_global->gen ()->create_component_fwd (&n);
              (void) s->fe_add_component_fwd (f);
            }

          (yyvsp[(2) - (2)].idval)->destroy ();
          delete (yyvsp[(2) - (2)].idval);
          (yyvsp[(2) - (2)].idval) = 0;
        ;}
    break;

  case 423:
#line 5109 "fe/idl.ypp"
    {
// component_decl : component_header
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Component *c = 0;

          /*
           * Make a new component node and add it to the enclosing scope.
           */
          if (s != 0 && (yyvsp[(1) - (1)].chval) != 0)
            {
              c =
                idl_global->gen ()->create_component (
                                        (yyvsp[(1) - (1)].chval)->name (),
                                        (yyvsp[(1) - (1)].chval)->base_component (),
                                        (yyvsp[(1) - (1)].chval)->supports (),
                                        (yyvsp[(1) - (1)].chval)->n_supports (),
                                        (yyvsp[(1) - (1)].chval)->supports_flat (),
                                        (yyvsp[(1) - (1)].chval)->n_supports_flat ()
                                      );
              AST_Interface *i = AST_Interface::narrow_from_decl (c);
              AST_Interface::fwd_redefinition_helper (i,
                                                      s);
              /*
               * Add the component to its definition scope.
               */
              c = AST_Component::narrow_from_decl (i);
              (void) s->fe_add_component (c);

              // This FE_ComponentHeader class isn't destroyed with the AST.
              (yyvsp[(1) - (1)].chval)->destroy ();
              delete (yyvsp[(1) - (1)].chval);
              (yyvsp[(1) - (1)].chval) = 0;
            }

          /*
           * Push it on the scope stack.
           */
          idl_global->scopes ().push (c);
        ;}
    break;

  case 424:
#line 5149 "fe/idl.ypp"
    {
//      '{'
          idl_global->set_parse_state (IDL_GlobalData::PS_ComponentSqSeen);
        ;}
    break;

  case 425:
#line 5154 "fe/idl.ypp"
    {
//      component_exports
          idl_global->set_parse_state (IDL_GlobalData::PS_ComponentBodySeen);
        ;}
    break;

  case 426:
#line 5159 "fe/idl.ypp"
    {
//      '}'
          idl_global->set_parse_state (IDL_GlobalData::PS_ComponentQsSeen);

          /*
           * Done with this component - pop it off the scopes stack.
           */
          idl_global->scopes ().pop ();
        ;}
    break;

  case 427:
#line 5173 "fe/idl.ypp"
    {
//      component_header: IDL_COMPONENT id
          idl_global->set_parse_state (IDL_GlobalData::PS_ComponentIDSeen);
        ;}
    break;

  case 428:
#line 5178 "fe/idl.ypp"
    {
//      component_inheritance_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_InheritSpecSeen);
        ;}
    break;

  case 429:
#line 5183 "fe/idl.ypp"
    {
//      supports_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_SupportSpecSeen);

          /*
           * Create an AST representation of the information in the header
           * part of a component.
           */
          UTL_ScopedName *n = 0;
          ACE_NEW_RETURN (n,
                          UTL_ScopedName ((yyvsp[(2) - (6)].idval),
                                          0),
                          1);
          ACE_NEW_RETURN ((yyval.chval),
                          FE_ComponentHeader (n,
                                              (yyvsp[(4) - (6)].idlist),
                                              (yyvsp[(6) - (6)].nlval),
                                              false),
                          1);

          if (0 != (yyvsp[(6) - (6)].nlval))
            {
              (yyvsp[(6) - (6)].nlval)->destroy ();
              delete (yyvsp[(6) - (6)].nlval);
              (yyvsp[(6) - (6)].nlval) = 0;
            }

          if (0 != (yyvsp[(4) - (6)].idlist))
            {
              (yyvsp[(4) - (6)].idlist)->destroy ();
              delete (yyvsp[(4) - (6)].idlist);
              (yyvsp[(4) - (6)].idlist) = 0;
            }
        ;}
    break;

  case 430:
#line 5221 "fe/idl.ypp"
    {
// component_inheritance_spec : ':'
          idl_global->set_parse_state (IDL_GlobalData::PS_InheritColonSeen);
        ;}
    break;

  case 431:
#line 5226 "fe/idl.ypp"
    {
//      scoped_name
          (yyval.idlist) = (yyvsp[(3) - (3)].idlist);
        ;}
    break;

  case 432:
#line 5231 "fe/idl.ypp"
    {
/*      |  EMPTY */
          (yyval.idlist) = 0;
        ;}
    break;

  case 435:
#line 5244 "fe/idl.ypp"
    {
// component_export : provides_decl
          idl_global->set_parse_state (IDL_GlobalData::PS_ProvidesDeclSeen);
        ;}
    break;

  case 436:
#line 5249 "fe/idl.ypp"
    {
//        ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 437:
#line 5254 "fe/idl.ypp"
    {
//      | uses_decl
          idl_global->set_parse_state (IDL_GlobalData::PS_UsesDeclSeen);
        ;}
    break;

  case 438:
#line 5259 "fe/idl.ypp"
    {
//        ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 439:
#line 5264 "fe/idl.ypp"
    {
//      | emits_decl
          idl_global->set_parse_state (IDL_GlobalData::PS_EmitsDeclSeen);
        ;}
    break;

  case 440:
#line 5269 "fe/idl.ypp"
    {
//        ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 441:
#line 5274 "fe/idl.ypp"
    {
//      | publishes_decl
          idl_global->set_parse_state (IDL_GlobalData::PS_PublishesDeclSeen);
        ;}
    break;

  case 442:
#line 5279 "fe/idl.ypp"
    {
//        ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 443:
#line 5284 "fe/idl.ypp"
    {
//      | consumes_decl
          idl_global->set_parse_state (IDL_GlobalData::PS_ConsumesDeclSeen);
        ;}
    break;

  case 444:
#line 5289 "fe/idl.ypp"
    {
//        ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 445:
#line 5294 "fe/idl.ypp"
    {
//      | attribute
          idl_global->set_parse_state (IDL_GlobalData::PS_AttrDeclSeen);
        ;}
    break;

  case 446:
#line 5299 "fe/idl.ypp"
    {
//        ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 447:
#line 5304 "fe/idl.ypp"
    {
//      | extended_port_decl
          idl_global->set_parse_state (IDL_GlobalData::PS_ExtendedPortDeclSeen);
        ;}
    break;

  case 448:
#line 5309 "fe/idl.ypp"
    {
//        ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 449:
#line 5316 "fe/idl.ypp"
    {
// provides_decl : IDL_PROVIDES interface_type id
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          bool so_far_so_good = true;
          AST_Decl::NodeType nt = AST_Decl::NT_type;
          AST_Param_Holder *ph = 0;

          AST_Decl *d =
            s->lookup_by_name ((yyvsp[(2) - (3)].idlist), true, false);

          if (d == 0)
            {
              idl_global->err ()->lookup_error ((yyvsp[(2) - (3)].idlist));
              so_far_so_good = false;
            }
          else
            {
              int compare = 0;
              nt = d->node_type ();

              switch (nt)
                {
                  case AST_Decl::NT_interface:
                    break;
                  case AST_Decl::NT_param_holder:
                    ph = AST_Param_Holder::narrow_from_decl (d);
                    nt = ph->info ()->type_;

                    if (nt != AST_Decl::NT_type
                       && nt != AST_Decl::NT_interface)
                      {
                        idl_global->err ()->mismatched_template_param (
                          ph->info ()->name_.c_str ());

                        so_far_so_good = false;
                      }

                    break;
                  case AST_Decl::NT_pre_defined:
                    // Nothing else but CORBA::Object can have
                    // this identifier.
                    compare =
                      ACE_OS::strcmp (d->local_name ()->get_string (),
                                      "Object");

                    // Simple provides port must use IDL interface
                    // or CORBA::Object.
                    if (compare != 0)
                      {
                        idl_global->err ()->interface_expected (d);
                        so_far_so_good = false;
                      }

                    break;
                  default:
                    idl_global->err ()->interface_expected (d);
                    so_far_so_good = false;
                    break;
                }
            }

          if (so_far_so_good)
            {
              AST_Type *port_interface_type =
                AST_Type::narrow_from_decl (d);

              // Strip off _cxx_, if any, for port name.
              FE_Utils::original_local_name ((yyvsp[(3) - (3)].idval));

              UTL_ScopedName sn ((yyvsp[(3) - (3)].idval),
                                 0);

              AST_Provides *p =
                idl_global->gen ()->create_provides (&sn,
                                                     port_interface_type);

              (void) s->fe_add_provides (p);
            }

          (yyvsp[(2) - (3)].idlist)->destroy ();
          delete (yyvsp[(2) - (3)].idlist);
          (yyvsp[(2) - (3)].idlist) = 0;

          (yyvsp[(3) - (3)].idval)->destroy ();
          delete (yyvsp[(3) - (3)].idval);
          (yyvsp[(3) - (3)].idval) = 0;
        ;}
    break;

  case 450:
#line 5407 "fe/idl.ypp"
    {
// interface_type : scoped_name
          // Lookups and checking are done where the 'interface_type'
          // token is used, in 'provides_decl' and 'uses_decl'.
          (yyval.idlist) = (yyvsp[(1) - (1)].idlist);
        ;}
    break;

  case 451:
#line 5414 "fe/idl.ypp"
    {
//      | IDL_OBJECT
          Identifier *corba_id = 0;

          ACE_NEW_RETURN (corba_id,
                          Identifier ("Object"),
                          1);

          UTL_IdList *conc_name = 0;
          ACE_NEW_RETURN (conc_name,
                          UTL_IdList (corba_id,
                                      0),
                          1);

          ACE_NEW_RETURN (corba_id,
                          Identifier ("CORBA"),
                          1);

          ACE_NEW_RETURN ((yyval.idlist),
                          UTL_IdList (corba_id,
                                      conc_name),
                          1);
        ;}
    break;

  case 452:
#line 5440 "fe/idl.ypp"
    {
// uses_decl : uses_opt_multiple interface_type id
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          bool so_far_so_good = true;
          AST_Decl::NodeType nt = AST_Decl::NT_type;
          AST_Param_Holder *ph = 0;

          AST_Decl *d =
            s->lookup_by_name ((yyvsp[(2) - (3)].idlist), true, false);

          if (d == 0)
            {
              idl_global->err ()->lookup_error ((yyvsp[(2) - (3)].idlist));
              so_far_so_good = false;
            }
          else
            {
              int compare = 0;
              nt = d->node_type ();

              switch (nt)
                {
                  case AST_Decl::NT_interface:
                    break;
                  case AST_Decl::NT_param_holder:
                    ph = AST_Param_Holder::narrow_from_decl (d);
                    nt = ph->info ()->type_;

                    if (nt != AST_Decl::NT_type
                       && nt != AST_Decl::NT_interface)
                      {
                        idl_global->err ()->mismatched_template_param (
                          ph->info ()->name_.c_str ());

                        so_far_so_good = false;
                      }

                    break;
                  case AST_Decl::NT_pre_defined:
                    // Nothing else but CORBA::Object can have
                    // this identifier.
                    compare =
                      ACE_OS::strcmp (d->local_name ()->get_string (),
                                      "Object");

                    // Simple provides port must use IDL interface
                    // or CORBA::Object.
                    if (compare != 0)
                      {
                        idl_global->err ()->interface_expected (d);
                        so_far_so_good = false;
                      }

                    break;
                  default:
                    idl_global->err ()->interface_expected (d);
                    so_far_so_good = false;
                    break;
                }
            }

          if (so_far_so_good)
            {
              AST_Type *port_interface_type =
                AST_Type::narrow_from_decl (d);

              // Strip off _cxx_, if any, for port name.
              FE_Utils::original_local_name ((yyvsp[(3) - (3)].idval));

              UTL_ScopedName sn ((yyvsp[(3) - (3)].idval),
                                 0);

              AST_Uses *u =
                idl_global->gen ()->create_uses (&sn,
                                                 port_interface_type,
                                                 (yyvsp[(1) - (3)].bval));

              (void) s->fe_add_uses (u);

              AST_Component *c =
                AST_Component::narrow_from_scope (s);

              if (c != 0
                  && u->is_multiple ()
                  && !idl_global->using_ifr_backend ()
                  && !idl_global->ignore_idl3 ()
                  && nt != AST_Decl::NT_param_holder)
                {
                  // These datatypes must be created in the
                  // front end so they can be looked up
                  // when compiling the generated executor IDL.
                  FE_Utils::create_uses_multiple_stuff (c, u);
                }
            }

          (yyvsp[(2) - (3)].idlist)->destroy ();
          delete (yyvsp[(2) - (3)].idlist);
          (yyvsp[(2) - (3)].idlist) = 0;

          (yyvsp[(3) - (3)].idval)->destroy ();
          delete (yyvsp[(3) - (3)].idval);
          (yyvsp[(3) - (3)].idval) = 0;
        ;}
    break;

  case 453:
#line 5547 "fe/idl.ypp"
    {
// uses_opt_multiple : IDL_USES opt_multiple
          // We use this extra rule here to use in both uses_decl and
          // extended_uses_decl, so the LALR(1) parser can avoid conflicts.
          (yyval.bval) = (yyvsp[(2) - (2)].bval);
        ;}
    break;

  case 454:
#line 5557 "fe/idl.ypp"
    {
// opt_multiple : IDL_MULTIPLE
          (yyval.bval) = true;
        ;}
    break;

  case 455:
#line 5562 "fe/idl.ypp"
    {
/*      |  EMPTY */
          (yyval.bval) = false;
        ;}
    break;

  case 456:
#line 5569 "fe/idl.ypp"
    {
// emits_decl : IDL_EMITS scoped_name id
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          bool so_far_so_good = true;
          AST_Decl::NodeType nt = AST_Decl::NT_type;
          AST_Param_Holder *ph = 0;

          AST_Decl *d =
            s->lookup_by_name ((yyvsp[(2) - (3)].idlist), true, false);

          if (0 == d)
            {
              idl_global->err ()->lookup_error ((yyvsp[(2) - (3)].idlist));
              so_far_so_good = false;
            }
          else
            {
              nt = d->node_type ();

              switch (nt)
                {
                  case AST_Decl::NT_eventtype:
                    break;
                  case AST_Decl::NT_param_holder:
                    ph = AST_Param_Holder::narrow_from_decl (d);
                    nt = ph->info ()->type_;

                    if (nt != AST_Decl::NT_type
                       && nt != AST_Decl::NT_eventtype)
                      {
                        idl_global->err ()->mismatched_template_param (
                          ph->info ()->name_.c_str ());

                        so_far_so_good = false;
                      }

                    break;
                  default:
                    idl_global->err ()->eventtype_expected (d);
                    so_far_so_good = false;
                    break;
                }
            }

          if (so_far_so_good)
            {
              AST_Type *event_type =
                AST_Type::narrow_from_decl (d);

              // Strip off _cxx_, if any, for port name.
              FE_Utils::original_local_name ((yyvsp[(3) - (3)].idval));

              UTL_ScopedName sn ((yyvsp[(3) - (3)].idval),
                                 0);

              AST_Emits *e =
                idl_global->gen ()->create_emits (&sn,
                                                  event_type);

              (void) s->fe_add_emits (e);
            }

          (yyvsp[(2) - (3)].idlist)->destroy ();
          delete (yyvsp[(2) - (3)].idlist);
          (yyvsp[(2) - (3)].idlist) = 0;

          (yyvsp[(3) - (3)].idval)->destroy ();
          delete (yyvsp[(3) - (3)].idval);
          (yyvsp[(3) - (3)].idval) = 0;
        ;}
    break;

  case 457:
#line 5642 "fe/idl.ypp"
    {
// publishes_decl : IDL_PUBLISHES scoped_name id
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          bool so_far_so_good = true;
          AST_Decl::NodeType nt = AST_Decl::NT_type;
          AST_Param_Holder *ph = 0;

          AST_Decl *d =
            s->lookup_by_name ((yyvsp[(2) - (3)].idlist), true, false);

          if (0 == d)
            {
              idl_global->err ()->lookup_error ((yyvsp[(2) - (3)].idlist));
              so_far_so_good = false;
            }
          else
            {
              nt = d->node_type ();

              switch (nt)
                {
                  case AST_Decl::NT_eventtype:
                    break;
                  case AST_Decl::NT_param_holder:
                    ph = AST_Param_Holder::narrow_from_decl (d);
                    nt = ph->info ()->type_;

                    if (nt != AST_Decl::NT_type
                       && nt != AST_Decl::NT_eventtype)
                      {
                        idl_global->err ()->mismatched_template_param (
                          ph->info ()->name_.c_str ());

                        so_far_so_good = false;
                      }

                    break;
                  default:
                    idl_global->err ()->eventtype_expected (d);
                    so_far_so_good = false;
                    break;
                }
            }

          if (so_far_so_good)
            {
              AST_Type *event_type =
                AST_Type::narrow_from_decl (d);

              // Strip off _cxx_, if any, for port name.
              FE_Utils::original_local_name ((yyvsp[(3) - (3)].idval));

              UTL_ScopedName sn ((yyvsp[(3) - (3)].idval),
                                 0);

              AST_Publishes *p =
                idl_global->gen ()->create_publishes (&sn,
                                                      event_type);

              (void) s->fe_add_publishes (p);
            }

          (yyvsp[(2) - (3)].idlist)->destroy ();
          delete (yyvsp[(2) - (3)].idlist);
          (yyvsp[(2) - (3)].idlist) = 0;

          (yyvsp[(3) - (3)].idval)->destroy ();
          delete (yyvsp[(3) - (3)].idval);
          (yyvsp[(3) - (3)].idval) = 0;
        ;}
    break;

  case 458:
#line 5715 "fe/idl.ypp"
    {
// consumes_decl : IDL_CONSUMES scoped_name id
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          bool so_far_so_good = true;
          AST_Decl::NodeType nt = AST_Decl::NT_type;
          AST_Param_Holder *ph = 0;

          AST_Decl *d =
            s->lookup_by_name ((yyvsp[(2) - (3)].idlist), true, false);

          if (0 == d)
            {
              idl_global->err ()->lookup_error ((yyvsp[(2) - (3)].idlist));
              so_far_so_good = false;
            }
          else
            {
              nt = d->node_type ();

              switch (nt)
                {
                  case AST_Decl::NT_eventtype:
                    break;
                  case AST_Decl::NT_param_holder:
                    ph = AST_Param_Holder::narrow_from_decl (d);
                    nt = ph->info ()->type_;

                    if (nt != AST_Decl::NT_type
                       && nt != AST_Decl::NT_eventtype)
                      {
                        idl_global->err ()->mismatched_template_param (
                          ph->info ()->name_.c_str ());

                        so_far_so_good = false;
                      }

                    break;
                  default:
                    idl_global->err ()->eventtype_expected (d);
                    so_far_so_good = false;
                    break;
                }
            }

          if (so_far_so_good)
            {
              AST_Type *event_type =
                AST_Type::narrow_from_decl (d);

              // Strip off _cxx_, if any, for port name.
              FE_Utils::original_local_name ((yyvsp[(3) - (3)].idval));

              UTL_ScopedName sn ((yyvsp[(3) - (3)].idval),
                                 0);

              AST_Consumes *c =
                idl_global->gen ()->create_consumes (&sn,
                                                     event_type);

              (void) s->fe_add_consumes (c);
            }

          (yyvsp[(2) - (3)].idlist)->destroy ();
          delete (yyvsp[(2) - (3)].idlist);
          (yyvsp[(2) - (3)].idlist) = 0;

          (yyvsp[(3) - (3)].idval)->destroy ();
          delete (yyvsp[(3) - (3)].idval);
          (yyvsp[(3) - (3)].idval) = 0;
       ;}
    break;

  case 459:
#line 5789 "fe/idl.ypp"
    {
// home_decl : home_header
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Home *h = 0;

          /*
           * Make a new home node and add it to the enclosing scope.
           */
          if (s != 0 && (yyvsp[(1) - (1)].hhval) != 0)
            {
              h =
                idl_global->gen ()->create_home (
                                        (yyvsp[(1) - (1)].hhval)->name (),
                                        (yyvsp[(1) - (1)].hhval)->base_home (),
                                        (yyvsp[(1) - (1)].hhval)->managed_component (),
                                        (yyvsp[(1) - (1)].hhval)->primary_key (),
                                        (yyvsp[(1) - (1)].hhval)->supports (),
                                        (yyvsp[(1) - (1)].hhval)->n_supports (),
                                        (yyvsp[(1) - (1)].hhval)->supports_flat (),
                                        (yyvsp[(1) - (1)].hhval)->n_supports_flat ()
                                      );
              /*
               * Add the home to its definition scope.
               */
              (void) s->fe_add_home (h);

              // This FE_HomeHeader class isn't destroyed with the AST.
              (yyvsp[(1) - (1)].hhval)->destroy ();
              delete (yyvsp[(1) - (1)].hhval);
              (yyvsp[(1) - (1)].hhval) = 0;
            }

          /*
           * Push it on the scope stack.
           */
          idl_global->scopes ().push (h);
        ;}
    break;

  case 460:
#line 5827 "fe/idl.ypp"
    {
//      home_body
          /*
           * Done with this component - pop it off the scopes stack.
           */
          idl_global->scopes ().pop ();
        ;}
    break;

  case 461:
#line 5838 "fe/idl.ypp"
    {
// home_header : IDL_HOME
          idl_global->set_parse_state (IDL_GlobalData::PS_HomeSeen);
        ;}
    break;

  case 462:
#line 5843 "fe/idl.ypp"
    {
//      id
          idl_global->set_parse_state (IDL_GlobalData::PS_HomeIDSeen);
        ;}
    break;

  case 463:
#line 5848 "fe/idl.ypp"
    {
//      home_inheritance_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_InheritSpecSeen);
        ;}
    break;

  case 464:
#line 5853 "fe/idl.ypp"
    {
//      supports_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_SupportSpecSeen);
        ;}
    break;

  case 465:
#line 5858 "fe/idl.ypp"
    {
//      IDL_MANAGES
          idl_global->set_parse_state (IDL_GlobalData::PS_ManagesSeen);
        ;}
    break;

  case 466:
#line 5863 "fe/idl.ypp"
    {
//      scoped_name
          idl_global->set_parse_state (IDL_GlobalData::PS_ManagesIDSeen);
        ;}
    break;

  case 467:
#line 5868 "fe/idl.ypp"
    {
//      primary_key_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_PrimaryKeySpecSeen);

          /*
           * Create an AST representation of the information in the header
           * part of a component home.
           */
          UTL_ScopedName *n = 0;
          ACE_NEW_RETURN (n,
                          UTL_ScopedName ((yyvsp[(3) - (13)].idval), 0),
                          1);

          ACE_NEW_RETURN ((yyval.hhval),
                          FE_HomeHeader (n,
                                         (yyvsp[(5) - (13)].idlist),
                                         (yyvsp[(7) - (13)].nlval),
                                         (yyvsp[(11) - (13)].idlist),
                                         (yyvsp[(13) - (13)].idlist)),
                          1);

          (yyvsp[(11) - (13)].idlist)->destroy ();
          delete (yyvsp[(11) - (13)].idlist);
          (yyvsp[(11) - (13)].idlist) = 0;

          if (0 != (yyvsp[(5) - (13)].idlist))
            {
              (yyvsp[(5) - (13)].idlist)->destroy ();
              delete (yyvsp[(5) - (13)].idlist);
              (yyvsp[(5) - (13)].idlist) = 0;
            }

          if (0 != (yyvsp[(13) - (13)].idlist))
            {
              (yyvsp[(13) - (13)].idlist)->destroy ();
              delete (yyvsp[(13) - (13)].idlist);
              (yyvsp[(13) - (13)].idlist) = 0;
            }

          if (0 != (yyvsp[(7) - (13)].nlval))
            {
              (yyvsp[(7) - (13)].nlval)->destroy ();
              delete (yyvsp[(7) - (13)].nlval);
              (yyvsp[(7) - (13)].nlval) = 0;
            }
        ;}
    break;

  case 468:
#line 5918 "fe/idl.ypp"
    {
// home_inheritance_spec ':'
          idl_global->set_parse_state (IDL_GlobalData::PS_InheritColonSeen);
        ;}
    break;

  case 469:
#line 5923 "fe/idl.ypp"
    {
//      scoped_name
          (yyval.idlist) = (yyvsp[(3) - (3)].idlist);
        ;}
    break;

  case 470:
#line 5928 "fe/idl.ypp"
    {
/*      |  EMPTY */
          (yyval.idlist) = 0;
        ;}
    break;

  case 471:
#line 5937 "fe/idl.ypp"
    {
// primary_key_spec : IDL_PRIMARYKEY scoped_name
          (yyval.idlist) = (yyvsp[(2) - (2)].idlist);
        ;}
    break;

  case 472:
#line 5942 "fe/idl.ypp"
    {
/*      |  EMPTY */
          (yyval.idlist) = 0;
        ;}
    break;

  case 473:
#line 5950 "fe/idl.ypp"
    {
// home_body : '{'
          idl_global->set_parse_state (IDL_GlobalData::PS_HomeSqSeen);
        ;}
    break;

  case 474:
#line 5955 "fe/idl.ypp"
    {
//      home_exports
          idl_global->set_parse_state (IDL_GlobalData::PS_HomeBodySeen);
        ;}
    break;

  case 475:
#line 5960 "fe/idl.ypp"
    {
//      '}'
          idl_global->set_parse_state (IDL_GlobalData::PS_HomeQsSeen);
        ;}
    break;

  case 479:
#line 5974 "fe/idl.ypp"
    {
// home_export : factory_decl
          idl_global->set_parse_state (IDL_GlobalData::PS_FactoryDeclSeen);
        ;}
    break;

  case 480:
#line 5979 "fe/idl.ypp"
    {
//      | ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 481:
#line 5984 "fe/idl.ypp"
    {
//      | finder_decl
          idl_global->set_parse_state (IDL_GlobalData::PS_FinderDeclSeen);
        ;}
    break;

  case 482:
#line 5989 "fe/idl.ypp"
    {
//      | ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 483:
#line 5998 "fe/idl.ypp"
    {
// factory_decl : IDL_FACTORY id
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((yyvsp[(2) - (2)].idval),
                            0);
          idl_global->set_parse_state (IDL_GlobalData::PS_OpIDSeen);

          /*
           * Create a node representing a factory operation
           * and add it to the enclosing scope.
           */
          AST_Factory *f = idl_global->gen ()->create_factory (&n);
          (void) s->fe_add_factory (f);

          (yyvsp[(2) - (2)].idval)->destroy ();
          delete (yyvsp[(2) - (2)].idval);
          (yyvsp[(2) - (2)].idval) = 0;

          /*
           * Push the factory scope onto the scopes stack.
           */
          idl_global->scopes ().push (f);
        ;}
    break;

  case 484:
#line 6022 "fe/idl.ypp"
    {
//      init_parameter_list
          idl_global->set_parse_state (IDL_GlobalData::PS_OpParsCompleted);
        ;}
    break;

  case 485:
#line 6027 "fe/idl.ypp"
    {
//      opt_raises
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          idl_global->set_parse_state (IDL_GlobalData::PS_OpRaiseCompleted);

          /*
           * Add exceptions and context to the factory.
           */
          if ((yyvsp[(6) - (6)].nlval) != 0)
            {
              (void) s->fe_add_exceptions ((yyvsp[(6) - (6)].nlval));
            }

          /*
           * Done with this factory. Pop its scope from the scopes stack.
           */
          idl_global->scopes ().pop ();
        ;}
    break;

  case 486:
#line 6050 "fe/idl.ypp"
    {
// finder_decl : IDL_FINDER id
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((yyvsp[(2) - (2)].idval),
                            0);

          idl_global->set_parse_state (IDL_GlobalData::PS_OpIDSeen);

          /*
           * Create a node representing a home finder
           * and add it to the enclosing scope.
           */
          AST_Finder *f =
            idl_global->gen ()->create_finder (&n);

          (void) s->fe_add_finder (f);


          (yyvsp[(2) - (2)].idval)->destroy ();
          delete (yyvsp[(2) - (2)].idval);
          (yyvsp[(2) - (2)].idval) = 0;

          /*
           * Push the operation scope onto the scopes stack.
           */
          idl_global->scopes ().push (f);
        ;}
    break;

  case 487:
#line 6078 "fe/idl.ypp"
    {
//      init_parameter_list
          idl_global->set_parse_state (IDL_GlobalData::PS_OpParsCompleted);
        ;}
    break;

  case 488:
#line 6083 "fe/idl.ypp"
    {
//      opt_raises
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          idl_global->set_parse_state (IDL_GlobalData::PS_OpRaiseCompleted);

          /*
           * Add exceptions and context to the finder.
           */
          if ((yyvsp[(6) - (6)].nlval) != 0)
            {
              (void) s->fe_add_exceptions ((yyvsp[(6) - (6)].nlval));
            }

          /*
           * Done with this operation. Pop its scope from the scopes stack.
           */
          idl_global->scopes ().pop ();
        ;}
    break;

  case 494:
#line 6117 "fe/idl.ypp"
    {
// event_concrete_forward_decl : IDL_EVENTTYPE id
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((yyvsp[(2) - (2)].idval),
                            0);
          AST_EventTypeFwd *f = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_EventTypeForwardSeen);

          /*
           * Create a node representing a forward declaration of an
           * eventtype. Store it in the enclosing scope
           */
          if (s != 0)
            {
              f = idl_global->gen ()->create_eventtype_fwd (&n,
                                                            false);
              (void) s->fe_add_valuetype_fwd (f);
            }

          (yyvsp[(2) - (2)].idval)->destroy ();
          delete (yyvsp[(2) - (2)].idval);
          (yyvsp[(2) - (2)].idval) = 0;
        ;}
    break;

  case 495:
#line 6146 "fe/idl.ypp"
    {
// event_abs_forward_decl : IDL_ABSTRACT IDL_EVENTTYPE id
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          UTL_ScopedName n ((yyvsp[(3) - (3)].idval),
                            0);
          AST_EventTypeFwd *f = 0;
          idl_global->set_parse_state (IDL_GlobalData::PS_EventTypeForwardSeen);

          /*
           * Create a node representing a forward declaration of an
           * eventtype. Store it in the enclosing scope
           */
          if (s != 0)
            {
              f = idl_global->gen ()->create_eventtype_fwd (&n,
                                                            true);
              (void) s->fe_add_valuetype_fwd (f);
            }

          (yyvsp[(3) - (3)].idval)->destroy ();
          delete (yyvsp[(3) - (3)].idval);
          (yyvsp[(3) - (3)].idval) = 0;
        ;}
    break;

  case 496:
#line 6174 "fe/idl.ypp"
    {
// event_abs_decl : event_abs_header event_rest_of_header
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_EventType *e = 0;
          AST_Interface *i = 0;

          if (s != 0 && (yyvsp[(1) - (2)].idval) != 0)
            {
              UTL_ScopedName sn ((yyvsp[(1) - (2)].idval),
                                 0);
              e =
                idl_global->gen ()->create_eventtype (
                    &sn,
                    (yyvsp[(2) - (2)].vhval)->inherits (),
                    (yyvsp[(2) - (2)].vhval)->n_inherits (),
                    (yyvsp[(2) - (2)].vhval)->inherits_concrete (),
                    (yyvsp[(2) - (2)].vhval)->inherits_flat (),
                    (yyvsp[(2) - (2)].vhval)->n_inherits_flat (),
                    (yyvsp[(2) - (2)].vhval)->supports (),
                    (yyvsp[(2) - (2)].vhval)->n_supports (),
                    (yyvsp[(2) - (2)].vhval)->supports_concrete (),
                    true,
                    false,
                    false
                  );
              i = AST_Interface::narrow_from_decl (e);
              AST_Interface::fwd_redefinition_helper (i,
                                                      s);
              /*
               * Add the eventetype to its definition scope
               */
              e = AST_EventType::narrow_from_decl (i);
              (void) s->fe_add_eventtype (e);
            }

          /*
           * Push it on the scope stack.
           */
          idl_global->scopes ().push (e);

          (yyvsp[(1) - (2)].idval)->destroy ();
          delete (yyvsp[(1) - (2)].idval);
          (yyvsp[(1) - (2)].idval) = 0;
        ;}
    break;

  case 497:
#line 6219 "fe/idl.ypp"
    {
//      '{'
          idl_global->set_parse_state (IDL_GlobalData::PS_EventTypeSqSeen);
        ;}
    break;

  case 498:
#line 6224 "fe/idl.ypp"
    {
//      exports
          idl_global->set_parse_state (IDL_GlobalData::PS_EventTypeBodySeen);
        ;}
    break;

  case 499:
#line 6229 "fe/idl.ypp"
    {
//      '}'
          idl_global->set_parse_state (IDL_GlobalData::PS_EventTypeQsSeen);

          /*
           * Done with this eventtype - pop it off the scopes stack.
           */
          idl_global->scopes ().pop ();
        ;}
    break;

  case 500:
#line 6244 "fe/idl.ypp"
    {
// event_abs_header : IDL_ABSTRACT IDL_EVENTTYPE id
          (yyval.idval) = (yyvsp[(3) - (3)].idval);
        ;}
    break;

  case 501:
#line 6254 "fe/idl.ypp"
    {
// event_custom_header : IDL_CUSTOM IDL_EVENTTYPE id
          idl_global->set_parse_state (IDL_GlobalData::PS_EventTypeIDSeen);

          ACE_DEBUG ((LM_DEBUG,
                      ACE_TEXT ("error in %C line %d\n"),
                      idl_global->filename ()->get_string (),
                      idl_global->lineno ()));
          ACE_DEBUG ((LM_DEBUG,
                      ACE_TEXT ("Sorry, I (TAO_IDL) can't handle")
                      ACE_TEXT (" custom yet\n")));
          (yyval.idval) = 0;
        ;}
    break;

  case 502:
#line 6272 "fe/idl.ypp"
    {
// event_plain_header : IDL_EVENTTYPE id
          idl_global->set_parse_state (IDL_GlobalData::PS_EventTypeIDSeen);

          (yyval.idval) = (yyvsp[(2) - (2)].idval);
        ;}
    break;

  case 503:
#line 6282 "fe/idl.ypp"
    {
// event_rest_of_header : inheritance_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_InheritSpecSeen);
        ;}
    break;

  case 504:
#line 6287 "fe/idl.ypp"
    {
//      supports_spec
          idl_global->set_parse_state (IDL_GlobalData::PS_SupportSpecSeen);

          ACE_NEW_RETURN ((yyval.vhval),
                          FE_OBVHeader (
                            0,
                            (yyvsp[(1) - (3)].nlval),
                            (yyvsp[(3) - (3)].nlval),
                            (yyvsp[(1) - (3)].nlval)
                              ? (yyvsp[(1) - (3)].nlval)->truncatable ()
                              : false,
                            true),
                          1);

          if (0 != (yyvsp[(3) - (3)].nlval))
            {
              (yyvsp[(3) - (3)].nlval)->destroy ();
              delete (yyvsp[(3) - (3)].nlval);
              (yyvsp[(3) - (3)].nlval) = 0;
            }

          if (0 != (yyvsp[(1) - (3)].nlval))
            {
              (yyvsp[(1) - (3)].nlval)->destroy ();
              delete (yyvsp[(1) - (3)].nlval);
              (yyvsp[(1) - (3)].nlval) = 0;
            }
        ;}
    break;

  case 505:
#line 6321 "fe/idl.ypp"
    {
// event_decl : event_header event_rest_of_header
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_EventType *e = 0;
          AST_Interface *i = 0;

          if (s != 0 && (yyvsp[(1) - (2)].idval) != 0)
            {
              // We create the scoped name here instead of with the
              // FE_EventHeader because there is a token for it only here.
              UTL_ScopedName sn ((yyvsp[(1) - (2)].idval),
                                 0);
              e =
                idl_global->gen ()->create_eventtype (
                    &sn,
                    (yyvsp[(2) - (2)].vhval)->inherits (),
                    (yyvsp[(2) - (2)].vhval)->n_inherits (),
                    (yyvsp[(2) - (2)].vhval)->inherits_concrete (),
                    (yyvsp[(2) - (2)].vhval)->inherits_flat (),
                    (yyvsp[(2) - (2)].vhval)->n_inherits_flat (),
                    (yyvsp[(2) - (2)].vhval)->supports (),
                    (yyvsp[(2) - (2)].vhval)->n_supports (),
                    (yyvsp[(2) - (2)].vhval)->supports_concrete (),
                    false,
                    (yyvsp[(2) - (2)].vhval)->truncatable (),
                    false
                  );
              i = AST_Interface::narrow_from_decl (e);
              AST_Interface::fwd_redefinition_helper (i,
                                                      s);
              /*
               * Add the eventetype to its definition scope
               */
              e = AST_EventType::narrow_from_decl (i);
              (void) s->fe_add_eventtype (e);

              // FE_EventHeader is not automatically destroyed in the AST
              (yyvsp[(2) - (2)].vhval)->destroy ();
              delete (yyvsp[(2) - (2)].vhval);
              (yyvsp[(2) - (2)].vhval) = 0;

              sn.destroy ();
            }

          /*
           * Push it on the scope stack.
           */
          idl_global->scopes ().push (e);
        ;}
    break;

  case 506:
#line 6371 "fe/idl.ypp"
    {
//      '{'
          idl_global->set_parse_state (IDL_GlobalData::PS_EventTypeSqSeen);
        ;}
    break;

  case 507:
#line 6376 "fe/idl.ypp"
    {
//      value_elements
          idl_global->set_parse_state (IDL_GlobalData::PS_EventTypeBodySeen);
        ;}
    break;

  case 508:
#line 6381 "fe/idl.ypp"
    {
//      '}'
          idl_global->set_parse_state (IDL_GlobalData::PS_EventTypeQsSeen);

          /*
           * Done with this eventtype - pop it off the scopes stack.
           */
          idl_global->scopes ().pop ();
        ;}
    break;

  case 509:
#line 6394 "fe/idl.ypp"
    {
// event_header : event_custom_header
          (yyval.idval) = (yyvsp[(1) - (1)].idval);
        ;}
    break;

  case 510:
#line 6399 "fe/idl.ypp"
    {
// event_header : event_plain_header
          (yyval.idval) = (yyvsp[(1) - (1)].idval);
        ;}
    break;

  case 511:
#line 6407 "fe/idl.ypp"
    {
// formal_parameter_type : IDL_TYPENAME
          (yyval.ntval) = AST_Decl::NT_type;
        ;}
    break;

  case 512:
#line 6412 "fe/idl.ypp"
    {
//        IDL_STRUCT
          (yyval.ntval) = AST_Decl::NT_struct;
        ;}
    break;

  case 513:
#line 6417 "fe/idl.ypp"
    {
//        IDL_UNION
          (yyval.ntval) = AST_Decl::NT_union;
        ;}
    break;

  case 514:
#line 6422 "fe/idl.ypp"
    {
//        IDL_EVENTTYPE
          (yyval.ntval) = AST_Decl::NT_eventtype;
        ;}
    break;

  case 515:
#line 6427 "fe/idl.ypp"
    {
//        IDL_SEQUENCE
          (yyval.ntval) = AST_Decl::NT_sequence;
        ;}
    break;

  case 516:
#line 6432 "fe/idl.ypp"
    {
//        IDL_INTERFACE
          (yyval.ntval) = AST_Decl::NT_interface;
        ;}
    break;

  case 517:
#line 6437 "fe/idl.ypp"
    {
//        IDL_VALUETYPE
          (yyval.ntval) = AST_Decl::NT_valuetype;
        ;}
    break;

  case 518:
#line 6442 "fe/idl.ypp"
    {
//        IDL_ENUM
          (yyval.ntval) = AST_Decl::NT_enum;
        ;}
    break;

  case 519:
#line 6447 "fe/idl.ypp"
    {
//        IDL_EXCEPTION
          (yyval.ntval) = AST_Decl::NT_except;
        ;}
    break;

  case 520:
#line 6452 "fe/idl.ypp"
    {
//        IDL_CONST const_type
          (yyval.ntval) = AST_Decl::NT_const;
          t_param_const_type = (yyvsp[(2) - (2)].etval);
        ;}
    break;

  case 521:
#line 6461 "fe/idl.ypp"
    {
// at_least_one_formal_parameter : formal_parameter formal_parameters
          if ((yyvsp[(2) - (2)].plval) == 0)
            {
              ACE_NEW_RETURN ((yyvsp[(2) - (2)].plval),
                              FE_Utils::T_PARAMLIST_INFO,
                              1);
            }

          (yyvsp[(2) - (2)].plval)->enqueue_head (*(yyvsp[(1) - (2)].pival));
          delete (yyvsp[(1) - (2)].pival);
          (yyvsp[(1) - (2)].pival) = 0;

          // The param added above is always the last one parsed,
          // so we check for matches between sequence<T> & T here.
          ACE_CString bad_id =
            FE_Utils::check_for_seq_of_param (
              (yyvsp[(2) - (2)].plval));

          if (!bad_id.empty ())
            {
              delete (yyvsp[(2) - (2)].plval);
              (yyvsp[(2) - (2)].plval) = 0;

              idl_global->err ()->mismatch_seq_of_param (bad_id.c_str ());
              return 1;
            }

          (yyval.plval) = (yyvsp[(2) - (2)].plval);
        ;}
    break;

  case 522:
#line 6495 "fe/idl.ypp"
    {
// formal_parameters : formal_parameters ','
          // Maybe add a new parse state to set here.
        ;}
    break;

  case 523:
#line 6500 "fe/idl.ypp"
    {
//        formal_parameter
          if ((yyvsp[(1) - (4)].plval) == 0)
            {
              ACE_NEW_RETURN ((yyvsp[(1) - (4)].plval),
                              FE_Utils::T_PARAMLIST_INFO,
                              1);
            }

          (yyvsp[(1) - (4)].plval)->enqueue_tail (*(yyvsp[(4) - (4)].pival));
          (yyval.plval) = (yyvsp[(1) - (4)].plval);

          delete (yyvsp[(4) - (4)].pival);
          (yyvsp[(4) - (4)].pival) = 0;
        ;}
    break;

  case 524:
#line 6516 "fe/idl.ypp"
    {
//        /* EMPTY */
          (yyval.plval) = 0;
        ;}
    break;

  case 525:
#line 6524 "fe/idl.ypp"
    {
// formal_parameter : formal_parameter_type IDENTIFIER

          ACE_NEW_RETURN ((yyval.pival),
                          FE_Utils::T_Param_Info,
                          1);

          AST_Decl::NodeType nt = (yyvsp[(1) - (2)].ntval);

          (yyval.pival)->type_ = nt;
          (yyval.pival)->name_ = (yyvsp[(2) - (2)].strval);
          ACE::strdelete ((yyvsp[(2) - (2)].strval));
          (yyvsp[(2) - (2)].strval) = 0;

          if (nt == AST_Decl::NT_const)
            {
              (yyval.pival)->const_type_ = t_param_const_type;
              (yyval.pival)->enum_const_type_decl_ =
                tao_enum_constant_decl;

              // Reset these values.
              t_param_const_type = AST_Expression::EV_none;
              tao_enum_constant_decl = 0;
            }
        ;}
    break;

  case 526:
#line 6550 "fe/idl.ypp"
    {
          ACE_NEW_RETURN ((yyval.pival),
                          FE_Utils::T_Param_Info,
                          1);

          (yyval.pival)->type_ = AST_Decl::NT_sequence;
          (yyval.pival)->seq_param_ref_  = (yyvsp[(3) - (5)].strval);
          (yyval.pival)->name_ += (yyvsp[(5) - (5)].strval);

          ACE::strdelete ((yyvsp[(3) - (5)].strval));
          (yyvsp[(3) - (5)].strval) = 0;
          ACE::strdelete ((yyvsp[(5) - (5)].strval));
          (yyvsp[(5) - (5)].strval) = 0;
        ;}
    break;

  case 527:
#line 6568 "fe/idl.ypp"
    {
// at_least_one_formal_parameter_name : formal_parameter_name formal_parameter_names
          ACE_NEW_RETURN ((yyval.slval),
                          UTL_StrList ((yyvsp[(1) - (2)].sval),
                                       (yyvsp[(2) - (2)].slval)),
                          1);
        ;}
    break;

  case 528:
#line 6579 "fe/idl.ypp"
    {
// formal_parameter_names : formal_parameter_names ',' formal_parameter_name
          UTL_StrList *sl = 0;
          ACE_NEW_RETURN (sl,
                          UTL_StrList ((yyvsp[(3) - (3)].sval),
                                       0),
                          1);

          if ((yyvsp[(1) - (3)].slval) == 0)
            {
              (yyval.slval) = sl;
            }
          else
            {
              (yyvsp[(1) - (3)].slval)->nconc (sl);
              (yyval.slval) = (yyvsp[(1) - (3)].slval);
            }
        ;}
    break;

  case 529:
#line 6598 "fe/idl.ypp"
    {
//        /* EMPTY */
          (yyval.slval) = 0;
        ;}
    break;

  case 530:
#line 6606 "fe/idl.ypp"
    {
// formal_parameter_name : IDENTIFIER
          ACE_NEW_RETURN ((yyval.sval),
                          UTL_String ((yyvsp[(1) - (1)].strval), true),
                          1);
        ;}
    break;

  case 531:
#line 6616 "fe/idl.ypp"
    {
// porttype_decl : IDL_PORTTYPE
          idl_global->set_parse_state (IDL_GlobalData::PS_PorttypeSeen);
        ;}
    break;

  case 532:
#line 6621 "fe/idl.ypp"
    {
//        IDENTIFIER
          idl_global->set_parse_state (IDL_GlobalData::PS_PorttypeIDSeen);
          UTL_Scope *s = idl_global->scopes ().top_non_null ();

          Identifier id ((yyvsp[(3) - (3)].strval));
          ACE::strdelete ((yyvsp[(3) - (3)].strval));
          (yyvsp[(3) - (3)].strval) = 0;

          UTL_ScopedName sn (&id, 0);
          AST_PortType *p =
            idl_global->gen ()->create_porttype (&sn);

          (void) s->fe_add_porttype (p);

          // Push it on the scopes stack.
          idl_global->scopes ().push (p);
        ;}
    break;

  case 533:
#line 6640 "fe/idl.ypp"
    {
//        '{'
          idl_global->set_parse_state (IDL_GlobalData::PS_PorttypeSqSeen);
        ;}
    break;

  case 534:
#line 6645 "fe/idl.ypp"
    {
//        at_least_one_port_export
          idl_global->set_parse_state (IDL_GlobalData::PS_PorttypeBodySeen);
        ;}
    break;

  case 535:
#line 6650 "fe/idl.ypp"
    {
//        '}'
          idl_global->set_parse_state (IDL_GlobalData::PS_PorttypeQsSeen);

          // Done with this port type - pop it off the scopes stack.
          idl_global->scopes ().pop ();
        ;}
    break;

  case 536:
#line 6661 "fe/idl.ypp"
    {
// at_least_one_port_export : port_export port_exports
        ;}
    break;

  case 537:
#line 6668 "fe/idl.ypp"
    {
// port_exports : port_exports port_export
        ;}
    break;

  case 538:
#line 6672 "fe/idl.ypp"
    {
//        | /* EMPTY */
        ;}
    break;

  case 539:
#line 6679 "fe/idl.ypp"
    {
// port_export : provides_decl
        ;}
    break;

  case 540:
#line 6683 "fe/idl.ypp"
    {
//        ';'
        ;}
    break;

  case 541:
#line 6687 "fe/idl.ypp"
    {
//        | uses_decl
        ;}
    break;

  case 542:
#line 6691 "fe/idl.ypp"
    {
//        ';'
        ;}
    break;

  case 543:
#line 6695 "fe/idl.ypp"
    {
//        | attribute
          idl_global->set_parse_state (IDL_GlobalData::PS_AttrDeclSeen);
        ;}
    break;

  case 544:
#line 6700 "fe/idl.ypp"
    {
//        ';'
        ;}
    break;

  case 545:
#line 6707 "fe/idl.ypp"
    {
// extended_port_decl : IDL_PORT scoped_name IDENTIFIER
          idl_global->set_parse_state (IDL_GlobalData::PS_ExtendedPortDeclSeen);
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Decl *d =
            s->lookup_by_name ((yyvsp[(2) - (3)].idlist));
          AST_PortType *pt = 0;
          bool so_far_so_good = true;

          if (d == 0)
            {
              idl_global->err ()->lookup_error ((yyvsp[(2) - (3)].idlist));
              so_far_so_good = false;
            }
          else
            {
              pt = AST_PortType::narrow_from_decl (d);

              if (pt == 0)
                {
                  idl_global->err ()->error1 (UTL_Error::EIDL_PORTTYPE_EXPECTED,
                                              d);
                  so_far_so_good = false;
                }
            }

          if (so_far_so_good)
            {
              Identifier id ((yyvsp[(3) - (3)].strval));
              ACE::strdelete ((yyvsp[(3) - (3)].strval));
              (yyvsp[(3) - (3)].strval) = 0;

              UTL_ScopedName sn (&id,
                                 0);

              AST_Extended_Port *ep =
                idl_global->gen ()->create_extended_port (
                  &sn,
                  pt);

              (void) s->fe_add_extended_port (ep);

              // Create (in the AST) the struct(s) and sequence(s)
              // needed for multiplex uses ports, if any.
              for (UTL_ScopeActiveIterator i (pt, UTL_Scope::IK_decls);
                   !i.is_done ();
                   i.next ())
                {
                  d = i.item ();

                  AST_Uses *u = AST_Uses::narrow_from_decl (d);

                  if (u != 0 && u->is_multiple ())
                    {
                      AST_Component *c =
                        AST_Component::narrow_from_scope (s);

                      FE_Utils::create_uses_multiple_stuff (
                        c,
                        u,
                        id.get_string ());
                    }
                }
            }

          (yyvsp[(2) - (3)].idlist)->destroy ();
          delete (yyvsp[(2) - (3)].idlist);
          (yyvsp[(2) - (3)].idlist) = 0;
        ;}
    break;

  case 546:
#line 6777 "fe/idl.ypp"
    {
//        | IDL_MIRRORPORT scoped_name IDENTIFIER
          idl_global->set_parse_state (IDL_GlobalData::PS_MirrorPortDeclSeen);
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Decl *d =
            s->lookup_by_name ((yyvsp[(2) - (3)].idlist));
          AST_PortType *pt = 0;
          bool so_far_so_good = true;

          if (d == 0)
            {
              idl_global->err ()->lookup_error ((yyvsp[(2) - (3)].idlist));
              so_far_so_good = false;
            }
           else
             {
               pt = AST_PortType::narrow_from_decl (d);

               if (pt == 0)
                 {
                   idl_global->err ()->error1 (UTL_Error::EIDL_PORTTYPE_EXPECTED,
                                               d);
                   so_far_so_good = false;
                 }
             }

          if (so_far_so_good)
            {
              Identifier id ((yyvsp[(3) - (3)].strval));
              ACE::strdelete ((yyvsp[(3) - (3)].strval));
              (yyvsp[(3) - (3)].strval) = 0;

              UTL_ScopedName sn (&id,
                                 0);

              AST_Mirror_Port *mp =
                idl_global->gen ()->create_mirror_port (
                  &sn,
                  pt);

              (void) s->fe_add_mirror_port (mp);
            }

          (yyvsp[(2) - (3)].idlist)->destroy ();
          delete (yyvsp[(2) - (3)].idlist);
          (yyvsp[(2) - (3)].idlist) = 0;
        ;}
    break;

  case 547:
#line 6828 "fe/idl.ypp"
    {
// at_least_one_actual_parameter : actual_parameter actual_parameters
          if ((yyvsp[(2) - (2)].alval) == 0)
            {
              ACE_NEW_RETURN ((yyvsp[(2) - (2)].alval),
                              FE_Utils::T_ARGLIST,
                              1);
            }

          (yyvsp[(2) - (2)].alval)->enqueue_head ((yyvsp[(1) - (2)].dcval));
          (yyval.alval) = (yyvsp[(2) - (2)].alval);
        ;}
    break;

  case 548:
#line 6844 "fe/idl.ypp"
    {
// actual_parameters : actual_parameters ',' actual_parameter
          if ((yyvsp[(1) - (3)].alval) == 0)
            {
              ACE_NEW_RETURN ((yyvsp[(1) - (3)].alval),
                              FE_Utils::T_ARGLIST,
                              1);
            }

          (yyvsp[(1) - (3)].alval)->enqueue_tail ((yyvsp[(3) - (3)].dcval));
          (yyval.alval) = (yyvsp[(1) - (3)].alval);
        ;}
    break;

  case 549:
#line 6857 "fe/idl.ypp"
    {
//         | /* EMPTY */
          (yyval.alval) = 0;
        ;}
    break;

  case 550:
#line 6865 "fe/idl.ypp"
    {
// actual_parameter : expression
          // To avoid grammar conflicts with this LALR(1) parser,
          // we take advantage of the fact that an expression can
          // be a scoped name. At that lower level, we create an
          // expression containing the scoped name, and at a
          // higher lever, deduce that it's not supposed to be
          // a constant and look up the type to add to the template
          // arg list.
          AST_Expression *ex = (yyvsp[(1) - (1)].exval);
          UTL_ScopedName *sn = ex->n ();
          AST_Decl *d = 0;
          UTL_Scope *s = idl_global->scopes ().top_non_null ();

          if (sn != 0)
            {
              d = s->lookup_by_name (sn);

              if (d == 0)
                {
                  idl_global->err ()->lookup_error (sn);
                  return 1;
                }
              else
                {
                  AST_Decl::NodeType nt = d->node_type ();

                  if (nt == AST_Decl::NT_enum_val)
                    {
                      (yyvsp[(1) - (1)].exval)->evaluate (
                        AST_Expression::EK_const);

                      (yyval.dcval) =
                        idl_global->gen ()->create_constant (
                          (yyvsp[(1) - (1)].exval)->ev ()->et,
                          (yyvsp[(1) - (1)].exval),
                          sn);
                    }
                  else
                    {
                      (yyval.dcval) = d;
                    }
                }
            }
          else
            {
              (yyvsp[(1) - (1)].exval)->evaluate (
                AST_Expression::EK_const);

              (yyval.dcval) =
                idl_global->gen ()->create_constant (
                  (yyvsp[(1) - (1)].exval)->ev ()->et,
                  (yyvsp[(1) - (1)].exval),
                  0);
            }
        ;}
    break;

  case 552:
#line 6929 "fe/idl.ypp"
    {
// connector_header : IDL_CONNECTOR
          idl_global->set_parse_state (IDL_GlobalData::PS_ConnectorSeen);
        ;}
    break;

  case 553:
#line 6934 "fe/idl.ypp"
    {
//        IDENTIFIER
          idl_global->set_parse_state (IDL_GlobalData::PS_ConnectorIDSeen);
        ;}
    break;

  case 554:
#line 6939 "fe/idl.ypp"
    {
//        component_inheritance_spec
          UTL_Scope *s = idl_global->scopes ().top_non_null ();
          AST_Connector *parent = 0;
          bool so_far_so_good = true;

          Identifier id ((yyvsp[(3) - (5)].strval));
          ACE::strdelete ((yyvsp[(3) - (5)].strval));
          (yyvsp[(3) - (5)].strval) = 0;

          UTL_ScopedName sn (&id, 0);

          if ((yyvsp[(5) - (5)].idlist) != 0)
            {
              AST_Decl *d =
                s->lookup_by_name ((yyvsp[(5) - (5)].idlist));

              if (d == 0)
                {
                  idl_global->err ()->lookup_error ((yyvsp[(5) - (5)].idlist));
                  so_far_so_good = false;
                }

              parent =
                AST_Connector::narrow_from_decl (d);

              if (parent == 0)
                {
                  idl_global->err ()->error1 (
                    UTL_Error::EIDL_CONNECTOR_EXPECTED,
                    d);

                  so_far_so_good = false;
                }

              (yyvsp[(5) - (5)].idlist)->destroy ();
              delete (yyvsp[(5) - (5)].idlist);
              (yyvsp[(5) - (5)].idlist) = 0;
            }

          if (so_far_so_good)
            {
              AST_Connector *c =
                idl_global->gen ()->create_connector (&sn,
                                                      parent);

              (void) s->fe_add_connector (c);

              // Push it on the scopes stack.
              idl_global->scopes ().push (c);
           }
        ;}
    break;

  case 555:
#line 6995 "fe/idl.ypp"
    {
// connector_body " '{'
          idl_global->set_parse_state (IDL_GlobalData::PS_ConnectorSqSeen);
        ;}
    break;

  case 556:
#line 7000 "fe/idl.ypp"
    {
//        connector_exports
          idl_global->set_parse_state (IDL_GlobalData::PS_ConnectorBodySeen);
        ;}
    break;

  case 557:
#line 7005 "fe/idl.ypp"
    {
//        '}
          idl_global->set_parse_state (IDL_GlobalData::PS_ConnectorQsSeen);

          // Done with this connector - pop it off the scope stack.
          idl_global->scopes ().pop ();
        ;}
    break;

  case 560:
#line 7021 "fe/idl.ypp"
    {
// connector_export : provides_decl
          idl_global->set_parse_state (IDL_GlobalData::PS_ProvidesDeclSeen);
        ;}
    break;

  case 561:
#line 7026 "fe/idl.ypp"
    {
//        ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 562:
#line 7031 "fe/idl.ypp"
    {
//        | uses_decl
          idl_global->set_parse_state (IDL_GlobalData::PS_UsesDeclSeen);
        ;}
    break;

  case 563:
#line 7036 "fe/idl.ypp"
    {
//        ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 564:
#line 7041 "fe/idl.ypp"
    {
//      | attribute
          idl_global->set_parse_state (IDL_GlobalData::PS_AttrDeclSeen);
        ;}
    break;

  case 565:
#line 7046 "fe/idl.ypp"
    {
//        ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;

  case 566:
#line 7051 "fe/idl.ypp"
    {
//      | extended_port_decl
          idl_global->set_parse_state (IDL_GlobalData::PS_ExtendedPortDeclSeen);
        ;}
    break;

  case 567:
#line 7056 "fe/idl.ypp"
    {
//        ';'
          idl_global->set_parse_state (IDL_GlobalData::PS_NoState);
        ;}
    break;


/* Line 1267 of yacc.c.  */
#line 10050 "fe/idl.tab.cpp"
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


#line 7062 "fe/idl.ypp"

/* programs */

/*
 * ???
 */
int
tao_yywrap (void)
{
  return 1;
}

/*
 * Report an error situation discovered in a production
 */
void
tao_yyerror (const char *msg)
{
  ACE_ERROR ((LM_ERROR,
              "%C\n",
              msg));
}

