#include "Token.hpp"
#include "Tokenizer.hpp"

using namespace std;

int main(int argc, char* argv[]) {
  if (argc != 1) {
    cerr << "Invalid number of arguments\nUsage: java Tokenizer <core input file>\n";
    exit(1);
  }

  Tokenizer* t = new Tokenizer();
  t->tokenize(argv[0]);
  while (t->hasNext()) {
    Token* token = t->currentToken();
    cout << *token << endl;
    t->nextToken();
  }

  return 0;
}
