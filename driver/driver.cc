#include "driver.hh"

namespace yy {
    
Driver::Driver(std::istream& in, std::ostream& out) {
    m_lexer = std::make_unique<yyFlexLexer>(in, out);
    m_codegenCtx.initGraphics(m_currentScope);
}

bool Driver::parse() {
    parser parser(this);
    bool res = parser.parse();
    return !res;
}

parser::token_type Driver::yylex(parser::semantic_type* yylval) {
    parser::token_type token = static_cast<parser::token_type>(m_lexer->yylex());
    if(token == yy::parser::token_type::IDENTIFIER) {
        std::string name(m_lexer->YYText());
        parser::semantic_type tmp;
        tmp.as<std::string>() = name;
        yylval->swap<std::string>(tmp);
    } 
    else if(token == yy::parser::token_type::INTEGER) {
        yylval->as<int>() = std::atoi(m_lexer->YYText());
    }

    return token;
}

void Driver::codegen() {
    m_currentScope->codegen(m_codegenCtx);
}

void Driver::dumpIR(std::ostream& out) {
    std::string s;
    llvm::raw_string_ostream os(s);
    m_codegenCtx.m_module->print(os, nullptr);
    os.flush();
    out << s;
}

} // namespace yy