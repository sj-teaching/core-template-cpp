#ifndef __TOKEN__
#define __TOKEN__
#include<iostream>

class Token {
  enum Type {
             PROGRAM = 1, BEGIN = 2, END = 3, INT = 4, IF = 5,
             THEN = 6, ELSE = 7, WHILE = 8, LOOP = 9, READ = 10, WRITE = 11,
             AND = 12, OR = 13, SEMICOL = 14, COMMA = 15, ASSIGN = 16, NOT = 17,
             LBRACK = 18, RBRACK = 19, LPAREN = 20, RPAREN = 21, PLUS = 22,
             MINUS = 23, STAR = 24, NEQ = 25, EQ = 26, GEQ = 27, LEQ = 28, GT = 29,
             LT = 30, NUM = 31, ID = 32, EOS = 33
  };

public:
  const std::string name;
  const Type code;
  const int line;

  Token(std::string, Type, int);

private:
  friend std::ostream& operator <<( std::ostream&, const Token&);

  // Note: Since none of the three fields should be changed once the token is
  // created, they are made `public const` and no getter methods are provided.
};

#endif
