// A Bison parser, made by GNU Bison 3.5.1.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2020 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// Undocumented macros, especially those whose name start with YY_,
// are private implementation details.  Do not rely on them.





#include "parser.hh"


// Unqualified %code blocks.
#line 14 "/home/vasilii/programming/lang/parser/parser.y"

    #include "driver.hh"
    #include "node.hh"
    namespace yy {parser::token_type yylex(parser::semantic_type* yylval, Driver* driver);}

#line 51 "/home/vasilii/programming/lang/parser/parser.cc"


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif



// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

namespace yy {
#line 123 "/home/vasilii/programming/lang/parser/parser.cc"


  /// Build a parser object.
  parser::parser (Driver* driver_yyarg)
#if YYDEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr),
#else
    :
#endif
      driver (driver_yyarg)
  {}

  parser::~parser ()
  {}

  parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------------.
  | Symbol types.  |
  `---------------*/

  // basic_symbol.
#if 201103L <= YY_CPLUSPLUS
  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (basic_symbol&& that)
    : Base (std::move (that))
    , value ()
  {
    switch (this->type_get ())
    {
      case 4: // INTEGER
        value.move< int > (std::move (that.value));
        break;

      case 41: // funcSign
        value.move< std::shared_ptr<glang::FuncDeclN> > (std::move (that.value));
        break;

      case 40: // func
      case 42: // argList
      case 43: // stm
      case 44: // declVar
      case 45: // lval
      case 46: // if
      case 47: // while
      case 48: // expr2
      case 49: // expr3
      case 50: // expr4
      case 51: // expr6
      case 52: // expr7
      case 53: // expr11
      case 54: // expr12
      case 55: // expr0
      case 56: // startExpr
      case 57: // output
      case 58: // stms
      case 59: // return
      case 60: // funcCall
      case 61: // globalArrDecl
      case 62: // arrAccess
        value.move< std::shared_ptr<glang::INode> > (std::move (that.value));
        break;

      case 36: // globalScope
      case 37: // scope
      case 38: // closeSc
      case 39: // openSc
        value.move< std::shared_ptr<glang::ScopeN> > (std::move (that.value));
        break;

      case 3: // IDENTIFIER
        value.move< std::string > (std::move (that.value));
        break;

      default:
        break;
    }

  }
#endif

  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (const basic_symbol& that)
    : Base (that)
    , value ()
  {
    switch (this->type_get ())
    {
      case 4: // INTEGER
        value.copy< int > (YY_MOVE (that.value));
        break;

      case 41: // funcSign
        value.copy< std::shared_ptr<glang::FuncDeclN> > (YY_MOVE (that.value));
        break;

      case 40: // func
      case 42: // argList
      case 43: // stm
      case 44: // declVar
      case 45: // lval
      case 46: // if
      case 47: // while
      case 48: // expr2
      case 49: // expr3
      case 50: // expr4
      case 51: // expr6
      case 52: // expr7
      case 53: // expr11
      case 54: // expr12
      case 55: // expr0
      case 56: // startExpr
      case 57: // output
      case 58: // stms
      case 59: // return
      case 60: // funcCall
      case 61: // globalArrDecl
      case 62: // arrAccess
        value.copy< std::shared_ptr<glang::INode> > (YY_MOVE (that.value));
        break;

      case 36: // globalScope
      case 37: // scope
      case 38: // closeSc
      case 39: // openSc
        value.copy< std::shared_ptr<glang::ScopeN> > (YY_MOVE (that.value));
        break;

      case 3: // IDENTIFIER
        value.copy< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

  }



  template <typename Base>
  bool
  parser::basic_symbol<Base>::empty () const YY_NOEXCEPT
  {
    return Base::type_get () == empty_symbol;
  }

  template <typename Base>
  void
  parser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move (s);
    switch (this->type_get ())
    {
      case 4: // INTEGER
        value.move< int > (YY_MOVE (s.value));
        break;

      case 41: // funcSign
        value.move< std::shared_ptr<glang::FuncDeclN> > (YY_MOVE (s.value));
        break;

      case 40: // func
      case 42: // argList
      case 43: // stm
      case 44: // declVar
      case 45: // lval
      case 46: // if
      case 47: // while
      case 48: // expr2
      case 49: // expr3
      case 50: // expr4
      case 51: // expr6
      case 52: // expr7
      case 53: // expr11
      case 54: // expr12
      case 55: // expr0
      case 56: // startExpr
      case 57: // output
      case 58: // stms
      case 59: // return
      case 60: // funcCall
      case 61: // globalArrDecl
      case 62: // arrAccess
        value.move< std::shared_ptr<glang::INode> > (YY_MOVE (s.value));
        break;

      case 36: // globalScope
      case 37: // scope
      case 38: // closeSc
      case 39: // openSc
        value.move< std::shared_ptr<glang::ScopeN> > (YY_MOVE (s.value));
        break;

      case 3: // IDENTIFIER
        value.move< std::string > (YY_MOVE (s.value));
        break;

      default:
        break;
    }

  }

  // by_type.
  parser::by_type::by_type ()
    : type (empty_symbol)
  {}

#if 201103L <= YY_CPLUSPLUS
  parser::by_type::by_type (by_type&& that)
    : type (that.type)
  {
    that.clear ();
  }
#endif

  parser::by_type::by_type (const by_type& that)
    : type (that.type)
  {}

  parser::by_type::by_type (token_type t)
    : type (yytranslate_ (t))
  {}

  void
  parser::by_type::clear ()
  {
    type = empty_symbol;
  }

  void
  parser::by_type::move (by_type& that)
  {
    type = that.type;
    that.clear ();
  }

  int
  parser::by_type::type_get () const YY_NOEXCEPT
  {
    return type;
  }


  // by_state.
  parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  parser::symbol_number_type
  parser::by_state::type_get () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[+state];
  }

  parser::stack_symbol_type::stack_symbol_type ()
  {}

  parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state))
  {
    switch (that.type_get ())
    {
      case 4: // INTEGER
        value.YY_MOVE_OR_COPY< int > (YY_MOVE (that.value));
        break;

      case 41: // funcSign
        value.YY_MOVE_OR_COPY< std::shared_ptr<glang::FuncDeclN> > (YY_MOVE (that.value));
        break;

      case 40: // func
      case 42: // argList
      case 43: // stm
      case 44: // declVar
      case 45: // lval
      case 46: // if
      case 47: // while
      case 48: // expr2
      case 49: // expr3
      case 50: // expr4
      case 51: // expr6
      case 52: // expr7
      case 53: // expr11
      case 54: // expr12
      case 55: // expr0
      case 56: // startExpr
      case 57: // output
      case 58: // stms
      case 59: // return
      case 60: // funcCall
      case 61: // globalArrDecl
      case 62: // arrAccess
        value.YY_MOVE_OR_COPY< std::shared_ptr<glang::INode> > (YY_MOVE (that.value));
        break;

      case 36: // globalScope
      case 37: // scope
      case 38: // closeSc
      case 39: // openSc
        value.YY_MOVE_OR_COPY< std::shared_ptr<glang::ScopeN> > (YY_MOVE (that.value));
        break;

      case 3: // IDENTIFIER
        value.YY_MOVE_OR_COPY< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s)
  {
    switch (that.type_get ())
    {
      case 4: // INTEGER
        value.move< int > (YY_MOVE (that.value));
        break;

      case 41: // funcSign
        value.move< std::shared_ptr<glang::FuncDeclN> > (YY_MOVE (that.value));
        break;

      case 40: // func
      case 42: // argList
      case 43: // stm
      case 44: // declVar
      case 45: // lval
      case 46: // if
      case 47: // while
      case 48: // expr2
      case 49: // expr3
      case 50: // expr4
      case 51: // expr6
      case 52: // expr7
      case 53: // expr11
      case 54: // expr12
      case 55: // expr0
      case 56: // startExpr
      case 57: // output
      case 58: // stms
      case 59: // return
      case 60: // funcCall
      case 61: // globalArrDecl
      case 62: // arrAccess
        value.move< std::shared_ptr<glang::INode> > (YY_MOVE (that.value));
        break;

      case 36: // globalScope
      case 37: // scope
      case 38: // closeSc
      case 39: // openSc
        value.move< std::shared_ptr<glang::ScopeN> > (YY_MOVE (that.value));
        break;

      case 3: // IDENTIFIER
        value.move< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

#if YY_CPLUSPLUS < 201103L
  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    switch (that.type_get ())
    {
      case 4: // INTEGER
        value.copy< int > (that.value);
        break;

      case 41: // funcSign
        value.copy< std::shared_ptr<glang::FuncDeclN> > (that.value);
        break;

      case 40: // func
      case 42: // argList
      case 43: // stm
      case 44: // declVar
      case 45: // lval
      case 46: // if
      case 47: // while
      case 48: // expr2
      case 49: // expr3
      case 50: // expr4
      case 51: // expr6
      case 52: // expr7
      case 53: // expr11
      case 54: // expr12
      case 55: // expr0
      case 56: // startExpr
      case 57: // output
      case 58: // stms
      case 59: // return
      case 60: // funcCall
      case 61: // globalArrDecl
      case 62: // arrAccess
        value.copy< std::shared_ptr<glang::INode> > (that.value);
        break;

      case 36: // globalScope
      case 37: // scope
      case 38: // closeSc
      case 39: // openSc
        value.copy< std::shared_ptr<glang::ScopeN> > (that.value);
        break;

      case 3: // IDENTIFIER
        value.copy< std::string > (that.value);
        break;

      default:
        break;
    }

    return *this;
  }

  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.type_get ())
    {
      case 4: // INTEGER
        value.move< int > (that.value);
        break;

      case 41: // funcSign
        value.move< std::shared_ptr<glang::FuncDeclN> > (that.value);
        break;

      case 40: // func
      case 42: // argList
      case 43: // stm
      case 44: // declVar
      case 45: // lval
      case 46: // if
      case 47: // while
      case 48: // expr2
      case 49: // expr3
      case 50: // expr4
      case 51: // expr6
      case 52: // expr7
      case 53: // expr11
      case 54: // expr12
      case 55: // expr0
      case 56: // startExpr
      case 57: // output
      case 58: // stms
      case 59: // return
      case 60: // funcCall
      case 61: // globalArrDecl
      case 62: // arrAccess
        value.move< std::shared_ptr<glang::INode> > (that.value);
        break;

      case 36: // globalScope
      case 37: // scope
      case 38: // closeSc
      case 39: // openSc
        value.move< std::shared_ptr<glang::ScopeN> > (that.value);
        break;

      case 3: // IDENTIFIER
        value.move< std::string > (that.value);
        break;

      default:
        break;
    }

    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
#if defined __GNUC__ && ! defined __clang__ && ! defined __ICC && __GNUC__ * 100 + __GNUC_MINOR__ <= 408
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
#endif
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " (";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  void
  parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  parser::yypop_ (int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  parser::state_type
  parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  bool
  parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::operator() ()
  {
    return parse ();
  }

  int
  parser::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            yyla.type = yytranslate_ (yylex (&yyla.value, driver));
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      {
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case 4: // INTEGER
        yylhs.value.emplace< int > ();
        break;

      case 41: // funcSign
        yylhs.value.emplace< std::shared_ptr<glang::FuncDeclN> > ();
        break;

      case 40: // func
      case 42: // argList
      case 43: // stm
      case 44: // declVar
      case 45: // lval
      case 46: // if
      case 47: // while
      case 48: // expr2
      case 49: // expr3
      case 50: // expr4
      case 51: // expr6
      case 52: // expr7
      case 53: // expr11
      case 54: // expr12
      case 55: // expr0
      case 56: // startExpr
      case 57: // output
      case 58: // stms
      case 59: // return
      case 60: // funcCall
      case 61: // globalArrDecl
      case 62: // arrAccess
        yylhs.value.emplace< std::shared_ptr<glang::INode> > ();
        break;

      case 36: // globalScope
      case 37: // scope
      case 38: // closeSc
      case 39: // openSc
        yylhs.value.emplace< std::shared_ptr<glang::ScopeN> > ();
        break;

      case 3: // IDENTIFIER
        yylhs.value.emplace< std::string > ();
        break;

      default:
        break;
    }



      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2:
#line 83 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { driver->codegen(); }
#line 938 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 3:
#line 85 "/home/vasilii/programming/lang/parser/parser.y"
                                                    {
                                                        auto&& scope = driver->m_currentScope;
                                                        scope->insertChild(yystack_[0].value.as < std::shared_ptr<glang::INode> > ());
                                                    }
#line 947 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 4:
#line 89 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { 
                                                        auto&& scope = driver->m_currentScope;
                                                        scope->insertChild(yystack_[0].value.as < std::shared_ptr<glang::INode> > ());
                                                    }
#line 956 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 5:
#line 93 "/home/vasilii/programming/lang/parser/parser.y"
                                                    {}
#line 962 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 6:
#line 95 "/home/vasilii/programming/lang/parser/parser.y"
                                                    {
                                                        auto&& scope = driver->m_currentScope;
                                                        auto&& node = std::make_shared<glang::DeclGlobalArrN>(yystack_[2].value.as < int > ());
                                                        node->setName(yystack_[4].value.as < std::string > ());
                                                        yylhs.value.as < std::shared_ptr<glang::INode> > () = node;
                                                        scope->insertDecl(yystack_[4].value.as < std::string > (), node);
                                                    }
#line 974 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 7:
#line 103 "/home/vasilii/programming/lang/parser/parser.y"
                                                    {
                                                        auto&& scope = driver->m_currentScope;
                                                        yylhs.value.as < std::shared_ptr<glang::INode> > () = std::make_shared<glang::FuncN>(yystack_[0].value.as < std::shared_ptr<glang::ScopeN> > (), yystack_[2].value.as < std::shared_ptr<glang::FuncDeclN> > ());
                                                        auto&& fnName = yystack_[2].value.as < std::shared_ptr<glang::FuncDeclN> > ()->getName();
                                                        assert(scope->getDeclIfVisible(fnName) == nullptr && "decl with same name exists"); // TODO: fix
                                                        scope->insertDecl(fnName, yystack_[2].value.as < std::shared_ptr<glang::FuncDeclN> > ());
                                                    }
#line 986 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 8:
#line 110 "/home/vasilii/programming/lang/parser/parser.y"
                                                    {
                                                        auto&& scope = driver->m_currentScope;
                                                        scope = std::make_shared<glang::ScopeN>(scope);
                                                        auto&& currentFunctionArgs = driver->m_currentFunctionArgs;

                                                        for(const std::string& name : currentFunctionArgs) {
                                                            auto&& node = std::make_shared<glang::DeclVarN>();
                                                            scope->insertDecl(name, node);
                                                        }

                                                        yylhs.value.as < std::shared_ptr<glang::FuncDeclN> > () = std::make_shared<glang::FuncDeclN>(yystack_[4].value.as < std::string > (), currentFunctionArgs);
                                                        scope->setParentFunc(yylhs.value.as < std::shared_ptr<glang::FuncDeclN> > ());
                                                        currentFunctionArgs.clear();
                                                    }
#line 1005 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 9:
#line 125 "/home/vasilii/programming/lang/parser/parser.y"
                                                    {
                                                        auto&& currentFunctionArgs = driver->m_currentFunctionArgs;
                                                        currentFunctionArgs.push_back(yystack_[0].value.as < std::string > ()); 
                                                    }
#line 1014 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 10:
#line 129 "/home/vasilii/programming/lang/parser/parser.y"
                                                    {
                                                        auto&& currentFunctionArgs = driver->m_currentFunctionArgs;
                                                        currentFunctionArgs.push_back(yystack_[0].value.as < std::string > ()); 
                                                    }
#line 1023 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 11:
#line 133 "/home/vasilii/programming/lang/parser/parser.y"
                                                    {}
#line 1029 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 12:
#line 135 "/home/vasilii/programming/lang/parser/parser.y"
                                                    {yylhs.value.as < std::shared_ptr<glang::ScopeN> > () = yystack_[0].value.as < std::shared_ptr<glang::ScopeN> > ();}
#line 1035 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 13:
#line 137 "/home/vasilii/programming/lang/parser/parser.y"
                                                    {
                                                        auto&& scope = driver->m_currentScope;
                                                        scope = std::make_shared<glang::ScopeN>(scope);
                                                    }
#line 1044 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 14:
#line 142 "/home/vasilii/programming/lang/parser/parser.y"
                                                    {
                                                        auto&& scope = driver->m_currentScope;
                                                        yylhs.value.as < std::shared_ptr<glang::ScopeN> > () = scope;
                                                        scope = scope->getParent();
                                                    }
#line 1054 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 15:
#line 148 "/home/vasilii/programming/lang/parser/parser.y"
                                                    {
                                                        auto&& scope = driver->m_currentScope;
                                                        scope->insertChild(yystack_[0].value.as < std::shared_ptr<glang::INode> > ());
                                                    }
#line 1063 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 16:
#line 153 "/home/vasilii/programming/lang/parser/parser.y"
                                                    {
                                                        auto&& scope = driver->m_currentScope;
                                                        scope->insertChild(yystack_[0].value.as < std::shared_ptr<glang::INode> > ());
                                                    }
#line 1072 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 17:
#line 158 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { yylhs.value.as < std::shared_ptr<glang::INode> > () = yystack_[0].value.as < std::shared_ptr<glang::INode> > (); }
#line 1078 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 18:
#line 159 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { yylhs.value.as < std::shared_ptr<glang::INode> > () = yystack_[0].value.as < std::shared_ptr<glang::INode> > (); }
#line 1084 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 19:
#line 160 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { yylhs.value.as < std::shared_ptr<glang::INode> > () = yystack_[0].value.as < std::shared_ptr<glang::INode> > (); }
#line 1090 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 20:
#line 161 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { yylhs.value.as < std::shared_ptr<glang::INode> > () = yystack_[0].value.as < std::shared_ptr<glang::INode> > (); }
#line 1096 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 21:
#line 162 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { yylhs.value.as < std::shared_ptr<glang::INode> > () = yystack_[0].value.as < std::shared_ptr<glang::INode> > (); }
#line 1102 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 22:
#line 163 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { yylhs.value.as < std::shared_ptr<glang::INode> > () = yystack_[1].value.as < std::shared_ptr<glang::INode> > (); }
#line 1108 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 23:
#line 164 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { yylhs.value.as < std::shared_ptr<glang::INode> > () = std::make_shared<glang::BreakN>(); }
#line 1114 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 24:
#line 166 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { yylhs.value.as < std::shared_ptr<glang::INode> > () = std::make_shared<glang::BinOpN>(yystack_[3].value.as < std::shared_ptr<glang::INode> > (), glang::BinOp::Assign, yystack_[1].value.as < std::shared_ptr<glang::INode> > ()); }
#line 1120 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 25:
#line 168 "/home/vasilii/programming/lang/parser/parser.y"
                                                    {
                                                        auto&& scope = driver->m_currentScope;
                                                        auto&& node = scope->getDeclIfVisible(yystack_[0].value.as < std::string > ());
                                                        if(!node) {
                                                            node = std::make_shared<glang::DeclVarN>();
                                                            scope->insertDecl(yystack_[0].value.as < std::string > (), node);
                                                        }
                                                        yylhs.value.as < std::shared_ptr<glang::INode> > () = node;
                                                    }
#line 1134 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 26:
#line 177 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { yylhs.value.as < std::shared_ptr<glang::INode> > () = yystack_[0].value.as < std::shared_ptr<glang::INode> > (); }
#line 1140 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 27:
#line 179 "/home/vasilii/programming/lang/parser/parser.y"
                                                    {
                                                        auto&& scope = driver->m_currentScope;
                                                        auto&& node = scope->getDeclIfVisible(yystack_[3].value.as < std::string > ());
                                                        assert(node != nullptr && "undeclared");
                                                        yylhs.value.as < std::shared_ptr<glang::INode> > () = std::make_shared<glang::ArrAccessN>(yystack_[1].value.as < std::shared_ptr<glang::INode> > (), node);
                                                    }
#line 1151 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 28:
#line 186 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { yylhs.value.as < std::shared_ptr<glang::INode> > () = yystack_[0].value.as < std::shared_ptr<glang::INode> > (); }
#line 1157 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 29:
#line 188 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { yylhs.value.as < std::shared_ptr<glang::INode> > () = std::make_shared<glang::BinOpN>(yystack_[2].value.as < std::shared_ptr<glang::INode> > (), glang::BinOp::Or, yystack_[0].value.as < std::shared_ptr<glang::INode> > ()); }
#line 1163 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 30:
#line 189 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { yylhs.value.as < std::shared_ptr<glang::INode> > () = yystack_[0].value.as < std::shared_ptr<glang::INode> > (); }
#line 1169 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 31:
#line 191 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { yylhs.value.as < std::shared_ptr<glang::INode> > () = std::make_shared<glang::BinOpN>(yystack_[2].value.as < std::shared_ptr<glang::INode> > (), glang::BinOp::And, yystack_[0].value.as < std::shared_ptr<glang::INode> > ()); }
#line 1175 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 32:
#line 192 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { yylhs.value.as < std::shared_ptr<glang::INode> > () = yystack_[0].value.as < std::shared_ptr<glang::INode> > (); }
#line 1181 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 33:
#line 194 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { yylhs.value.as < std::shared_ptr<glang::INode> > () = std::make_shared<glang::BinOpN>(yystack_[2].value.as < std::shared_ptr<glang::INode> > (), glang::BinOp::Equal, yystack_[0].value.as < std::shared_ptr<glang::INode> > ()); }
#line 1187 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 34:
#line 195 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { yylhs.value.as < std::shared_ptr<glang::INode> > () = std::make_shared<glang::BinOpN>(yystack_[2].value.as < std::shared_ptr<glang::INode> > (), glang::BinOp::NotEqual, yystack_[0].value.as < std::shared_ptr<glang::INode> > ()); }
#line 1193 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 35:
#line 196 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { yylhs.value.as < std::shared_ptr<glang::INode> > () = yystack_[0].value.as < std::shared_ptr<glang::INode> > (); }
#line 1199 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 36:
#line 198 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { yylhs.value.as < std::shared_ptr<glang::INode> > () = std::make_shared<glang::BinOpN>(yystack_[2].value.as < std::shared_ptr<glang::INode> > (), glang::BinOp::Greater, yystack_[0].value.as < std::shared_ptr<glang::INode> > ()); }
#line 1205 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 37:
#line 199 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { yylhs.value.as < std::shared_ptr<glang::INode> > () = std::make_shared<glang::BinOpN>(yystack_[2].value.as < std::shared_ptr<glang::INode> > (), glang::BinOp::Less, yystack_[0].value.as < std::shared_ptr<glang::INode> > ()); }
#line 1211 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 38:
#line 200 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { yylhs.value.as < std::shared_ptr<glang::INode> > () = std::make_shared<glang::BinOpN>(yystack_[2].value.as < std::shared_ptr<glang::INode> > (), glang::BinOp::GreaterOrEqual, yystack_[0].value.as < std::shared_ptr<glang::INode> > ()); }
#line 1217 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 39:
#line 201 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { yylhs.value.as < std::shared_ptr<glang::INode> > () = std::make_shared<glang::BinOpN>(yystack_[2].value.as < std::shared_ptr<glang::INode> > (), glang::BinOp::LessOrEqual, yystack_[0].value.as < std::shared_ptr<glang::INode> > ()); }
#line 1223 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 40:
#line 202 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { yylhs.value.as < std::shared_ptr<glang::INode> > () = yystack_[0].value.as < std::shared_ptr<glang::INode> > (); }
#line 1229 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 41:
#line 204 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { yylhs.value.as < std::shared_ptr<glang::INode> > () = std::make_shared<glang::BinOpN>(yystack_[2].value.as < std::shared_ptr<glang::INode> > (), glang::BinOp::Plus, yystack_[0].value.as < std::shared_ptr<glang::INode> > ()); }
#line 1235 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 42:
#line 205 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { yylhs.value.as < std::shared_ptr<glang::INode> > () = std::make_shared<glang::BinOpN>(yystack_[2].value.as < std::shared_ptr<glang::INode> > (), glang::BinOp::Minus, yystack_[0].value.as < std::shared_ptr<glang::INode> > ()); }
#line 1241 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 43:
#line 206 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { yylhs.value.as < std::shared_ptr<glang::INode> > () = yystack_[0].value.as < std::shared_ptr<glang::INode> > (); }
#line 1247 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 44:
#line 208 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { yylhs.value.as < std::shared_ptr<glang::INode> > () = std::make_shared<glang::BinOpN>(yystack_[2].value.as < std::shared_ptr<glang::INode> > (), glang::BinOp::Mult, yystack_[0].value.as < std::shared_ptr<glang::INode> > ()); }
#line 1253 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 45:
#line 209 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { yylhs.value.as < std::shared_ptr<glang::INode> > () = std::make_shared<glang::BinOpN>(yystack_[2].value.as < std::shared_ptr<glang::INode> > (), glang::BinOp::Div, yystack_[0].value.as < std::shared_ptr<glang::INode> > ()); }
#line 1259 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 46:
#line 210 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { yylhs.value.as < std::shared_ptr<glang::INode> > () = std::make_shared<glang::BinOpN>(yystack_[2].value.as < std::shared_ptr<glang::INode> > (), glang::BinOp::Mod, yystack_[0].value.as < std::shared_ptr<glang::INode> > ()); }
#line 1265 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 47:
#line 211 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { yylhs.value.as < std::shared_ptr<glang::INode> > () = yystack_[0].value.as < std::shared_ptr<glang::INode> > (); }
#line 1271 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 48:
#line 213 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { yylhs.value.as < std::shared_ptr<glang::INode> > () = std::make_shared<glang::UnOpN>(glang::UnOp::Not, yystack_[0].value.as < std::shared_ptr<glang::INode> > ()); }
#line 1277 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 49:
#line 214 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { yylhs.value.as < std::shared_ptr<glang::INode> > () = yystack_[0].value.as < std::shared_ptr<glang::INode> > (); }
#line 1283 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 50:
#line 216 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { yylhs.value.as < std::shared_ptr<glang::INode> > () = yystack_[1].value.as < std::shared_ptr<glang::INode> > (); }
#line 1289 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 51:
#line 218 "/home/vasilii/programming/lang/parser/parser.y"
                                                    {
                                                        auto&& scope = driver->m_currentScope;
                                                        auto&& node = scope->getDeclIfVisible(yystack_[0].value.as < std::string > ());
                                                        assert(node != nullptr);
                                                        yylhs.value.as < std::shared_ptr<glang::INode> > () = node;
                                                    }
#line 1300 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 52:
#line 224 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { yylhs.value.as < std::shared_ptr<glang::INode> > () = std::make_shared<glang::I32N>(yystack_[0].value.as < int > ()); }
#line 1306 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 53:
#line 225 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { yylhs.value.as < std::shared_ptr<glang::INode> > () = std::make_shared<glang::UnOpN>(glang::UnOp::Input, nullptr); }
#line 1312 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 54:
#line 226 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { yylhs.value.as < std::shared_ptr<glang::INode> > () = yystack_[0].value.as < std::shared_ptr<glang::INode> > (); }
#line 1318 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 55:
#line 227 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { yylhs.value.as < std::shared_ptr<glang::INode> > () = yystack_[0].value.as < std::shared_ptr<glang::INode> > (); }
#line 1324 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 56:
#line 229 "/home/vasilii/programming/lang/parser/parser.y"
                                                    {
                                                        auto&& scope = driver->m_currentScope;
                                                        auto&& currentFunctionArgs = driver->m_currentFunctionArgs;
                                                        auto&& node = scope->getDeclIfVisible(yystack_[3].value.as < std::string > ());
                                                        assert(node != nullptr);
                                                        yylhs.value.as < std::shared_ptr<glang::INode> > () = std::make_shared<glang::FuncCallN>(node, scope, currentFunctionArgs);
                                                        currentFunctionArgs.clear();
                                                    }
#line 1337 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 57:
#line 238 "/home/vasilii/programming/lang/parser/parser.y"
                                                    {
                                                        auto&& scope = driver->m_currentScope;
                                                        yylhs.value.as < std::shared_ptr<glang::INode> > () = std::make_shared<glang::IfN>(yystack_[0].value.as < std::shared_ptr<glang::ScopeN> > (), yystack_[2].value.as < std::shared_ptr<glang::INode> > (), scope);
                                                    }
#line 1346 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 58:
#line 243 "/home/vasilii/programming/lang/parser/parser.y"
                                                    {
                                                        auto&& scope = driver->m_currentScope;
                                                        yylhs.value.as < std::shared_ptr<glang::INode> > () = std::make_shared<glang::WhileN>(yystack_[0].value.as < std::shared_ptr<glang::ScopeN> > (), yystack_[2].value.as < std::shared_ptr<glang::INode> > (), scope);
                                                    }
#line 1355 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 59:
#line 248 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { yylhs.value.as < std::shared_ptr<glang::INode> > () = std::make_shared<glang::UnOpN>(glang::UnOp::Output, yystack_[1].value.as < std::shared_ptr<glang::INode> > ()); }
#line 1361 "/home/vasilii/programming/lang/parser/parser.cc"
    break;

  case 60:
#line 250 "/home/vasilii/programming/lang/parser/parser.y"
                                                    { yylhs.value.as < std::shared_ptr<glang::INode> > () = std::make_shared<glang::RetN>(yystack_[1].value.as < std::shared_ptr<glang::INode> > ()); }
#line 1367 "/home/vasilii/programming/lang/parser/parser.cc"
    break;


#line 1371 "/home/vasilii/programming/lang/parser/parser.cc"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yysyntax_error_ (yystack_[0].state, yyla));
      }


    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[+yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yy_error_token_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yy_error_token_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }


      // Shift the error token.
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
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


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  parser::error (const syntax_error& yyexc)
  {
    error (yyexc.what ());
  }

  // Generate an error message.
  std::string
  parser::yysyntax_error_ (state_type, const symbol_type&) const
  {
    return YY_("syntax error");
  }


  const signed char parser::yypact_ninf_ = -31;

  const signed char parser::yytable_ninf_ = -1;

  const signed char
  parser::yypact_[] =
  {
     -31,     2,     4,    -3,     5,   -31,   -31,   -31,    45,    50,
      27,    51,    64,    24,    55,     3,    59,    57,     3,   -31,
     -31,    52,   -31,   -31,   -31,    22,   -31,    62,   -31,    63,
     -31,    32,    64,     3,     3,    24,   -31,   -31,     3,     6,
      20,    28,    -5,    36,    53,    56,   -31,   -31,    65,   -31,
     -31,   -31,     3,    67,     3,   -31,   -31,   -31,   -31,   -31,
      68,    76,    33,    66,    69,    70,   -31,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     -31,    72,   -31,    71,   -31,   -31,   -31,   -31,    77,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,    77,   -31,   -31,   -31,    27,   -31,    22,
     -31
  };

  const signed char
  parser::yydefact_[] =
  {
       5,     2,     0,     0,     0,     4,     3,     1,     0,     0,
       0,     0,    11,    25,     0,     0,     0,     0,     0,    15,
      17,     0,    18,    19,    20,     0,    21,     0,    26,     0,
      10,     0,    11,     0,     0,    51,    52,    53,     0,     0,
      47,    43,    40,    35,    32,    30,    28,    49,     0,    54,
      55,    23,     0,     0,     0,    14,     7,    16,    22,     6,
       0,     0,     0,     0,     0,     0,    48,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      60,     0,    59,     0,     8,     9,    56,    27,     0,    50,
      44,    45,    46,    41,    42,    36,    37,    39,    38,    33,
      34,    31,    29,     0,    24,    13,    58,     0,    57,     0,
      12
  };

  const signed char
  parser::yypgoto_[] =
  {
     -31,   -31,   -22,   -21,   -31,   -31,   -31,    58,   -23,   -31,
     -31,   -31,   -31,   -12,    -8,   -30,   -11,    13,    14,    54,
      73,   -15,   -31,   -13,   -31,   -10,   -31,    -9,   -31
  };

  const signed char
  parser::yydefgoto_[] =
  {
      -1,     1,   106,    56,   107,     5,    10,    31,    19,    20,
      21,    22,    23,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    24,    25,    26,    49,     6,    50,     2
  };

  const signed char
  parser::yytable_[] =
  {
      27,    28,    57,    53,     7,     3,    35,    36,     9,    35,
      36,    37,     4,     8,    37,    27,    28,    38,    63,    64,
      38,    72,    73,    74,    75,    13,    39,    14,    15,    16,
      13,    17,    14,    15,    16,    55,    17,    81,    32,    83,
      33,    18,    95,    96,    97,    98,    18,    60,    86,    11,
      61,    61,    67,    68,    69,    90,    91,    92,    70,    71,
      76,    77,    93,    94,    12,    99,   100,    30,    29,    34,
      51,    52,    54,    58,    59,    78,    80,    79,    82,    85,
      84,   108,   104,    87,    88,    89,    57,   103,   110,   105,
      62,   101,    65,   102,   109,     0,     0,    27,    28,    27,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    66
  };

  const signed char
  parser::yycheck_[] =
  {
      10,    10,    25,    18,     0,     3,     3,     4,     3,     3,
       4,     8,    10,    16,     8,    25,    25,    14,    33,    34,
      14,    26,    27,    28,    29,     3,    23,     5,     6,     7,
       3,     9,     5,     6,     7,    13,     9,    52,    14,    54,
      16,    19,    72,    73,    74,    75,    19,    15,    15,     4,
      18,    18,    32,    33,    34,    67,    68,    69,    30,    31,
      24,    25,    70,    71,    14,    76,    77,     3,    17,    14,
      11,    14,    20,    11,    11,    22,    11,    21,    11,     3,
      12,   103,    11,    17,    15,    15,   109,    15,   109,    12,
      32,    78,    38,    79,   107,    -1,    -1,   107,   107,   109,
     109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39
  };

  const signed char
  parser::yystos_[] =
  {
       0,    36,    63,     3,    10,    40,    61,     0,    16,     3,
      41,     4,    14,     3,     5,     6,     7,     9,    19,    43,
      44,    45,    46,    47,    57,    58,    59,    60,    62,    17,
       3,    42,    14,    16,    14,     3,     4,     8,    14,    23,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    60,
      62,    11,    14,    56,    20,    13,    38,    43,    11,    11,
      15,    18,    42,    56,    56,    54,    55,    32,    33,    34,
      30,    31,    26,    27,    28,    29,    24,    25,    22,    21,
      11,    56,    11,    56,    12,     3,    15,    17,    15,    15,
      48,    48,    48,    49,    49,    50,    50,    50,    50,    51,
      51,    52,    53,    15,    11,    12,    37,    39,    37,    58,
      38
  };

  const signed char
  parser::yyr1_[] =
  {
       0,    35,    63,    36,    36,    36,    61,    40,    41,    42,
      42,    42,    37,    39,    38,    58,    58,    43,    43,    43,
      43,    43,    43,    43,    44,    45,    45,    62,    56,    54,
      54,    53,    53,    52,    52,    52,    51,    51,    51,    51,
      51,    50,    50,    50,    49,    49,    49,    49,    48,    48,
      55,    55,    55,    55,    55,    55,    60,    46,    47,    57,
      59
  };

  const signed char
  parser::yyr2_[] =
  {
       0,     2,     1,     2,     2,     0,     5,     4,     5,     3,
       1,     0,     3,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     2,     2,     4,     1,     1,     4,     1,     3,
       1,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     1,     2,     1,
       3,     1,     1,     1,     1,     1,     4,     5,     5,     3,
       3
  };


#if YYDEBUG
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const parser::yytname_[] =
  {
  "$end", "error", "$undefined", "IDENTIFIER", "INTEGER", "\"while\"",
  "\"return\"", "\"break\"", "\"?\"", "\"if\"", "\"fn\"", "\";\"", "\"{\"",
  "\"}\"", "\"(\"", "\")\"", "\"[\"", "\"]\"", "\",\"", "\"print\"",
  "\"=\"", "\"||\"", "\"&&\"", "\"!\"", "\"==\"", "\"!=\"", "\">\"",
  "\"<\"", "\"<=\"", "\">=\"", "\"+\"", "\"-\"", "\"*\"", "\"/\"", "\"%\"",
  "$accept", "globalScope", "scope", "closeSc", "openSc", "func",
  "funcSign", "argList", "stm", "declVar", "lval", "if", "while", "expr2",
  "expr3", "expr4", "expr6", "expr7", "expr11", "expr12", "expr0",
  "startExpr", "output", "stms", "return", "funcCall", "globalArrDecl",
  "arrAccess", "program", YY_NULLPTR
  };


  const unsigned char
  parser::yyrline_[] =
  {
       0,    83,    83,    85,    89,    93,    95,   103,   110,   125,
     129,   133,   135,   137,   142,   148,   153,   158,   159,   160,
     161,   162,   163,   164,   166,   168,   177,   179,   186,   188,
     189,   191,   192,   194,   195,   196,   198,   199,   200,   201,
     202,   204,   205,   206,   208,   209,   210,   211,   213,   214,
     216,   217,   224,   225,   226,   227,   229,   238,   243,   248,
     250
  };

  // Print the state stack on the debug stream.
  void
  parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  parser::yy_reduce_print_ (int yyrule)
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG

  parser::token_number_type
  parser::yytranslate_ (int t)
  {
    // YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to
    // TOKEN-NUM as returned by yylex.
    static
    const token_number_type
    translate_table[] =
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
    };
    const int user_token_number_max_ = 289;

    if (t <= 0)
      return yyeof_;
    else if (t <= user_token_number_max_)
      return translate_table[t];
    else
      return yy_undef_token_;
  }

} // yy
#line 1788 "/home/vasilii/programming/lang/parser/parser.cc"

#line 252 "/home/vasilii/programming/lang/parser/parser.y"


namespace yy {

    parser::token_type yylex (parser::semantic_type* yylval, Driver* driver) {
		return driver->yylex(yylval);
	}

    void parser::error (const std::string& msg) {
        std::cout << msg << " in line: " << std::endl;
	}
}
