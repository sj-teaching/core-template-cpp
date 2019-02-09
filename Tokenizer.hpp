#ifndef __TOKENIZER__
#define __TOKENIZER__
#include "Token.hpp"

#include <list>

class Tokenizer {
private:
  /**
   * List of tokens from the language.
   */
  std::list<std::string> tokens;

  /**
   * The token stream to be generated.
   */
  std::list<Token> tokenStream;

  /**
   * Index of the current token in the {@code tokenStream}.
   */
  int currentIndex;

  // Note: Feel free to add any additional member variables you may need

public:
  Tokenizer();
  ~Tokenizer();

  /**
   * Returns the current {@code Token} from the generated token stream.
   *
   * @return current {@code Token}.
   */
  Token* currentToken();

  /**
   * Advances to the next {@code Token} in the stream.
   */
  void nextToken();

  /**
   * Reports whether there is another {@code Token} on the stream.
   */
  bool hasNext();

  /**
   * Removes all white spaces and generates the complete token-stream from the
   * given file.
   *
   * @param filePath Full or relative path of the input CORE program file.
   */
  void tokenize(std::string filePath);
};

#endif
