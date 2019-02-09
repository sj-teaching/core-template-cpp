#include "Token.hpp"

Token::Token(std::string _name, Type _code, int _line)
  : name(_name), code(_code), line(_line) {}

std::ostream& operator << (std::ostream& os, const Token& t) {
  os << t.code;
  return os;
}
