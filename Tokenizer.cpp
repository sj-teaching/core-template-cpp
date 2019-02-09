#include "Tokenizer.hpp"

Tokenizer::Tokenizer() {
  // TODO implement the construtor
}

Tokenizer::~Tokenizer() {
  // TODO implement the destructor
}

Token* Tokenizer::currentToken() {
  // TODO implement the method

  return NULL; // FIXME
}

void Tokenizer::nextToken() {
  // TODO implement the method
}

bool Tokenizer::hasNext() {
  // TODO implement the method

  return false; // FIXME
}

void Tokenizer::tokenize(std::string filePath) {
  // TODO Declare the appropriate File handlers and open them.
  // TODO Make sure you handle any exceptions this may lead to.

  // TODO Implement the tokenizer per the algorithm given below

  // 1. Get a character from the input stream
  // 2. While it's a valid character (What does this mean?)
  // 2.1. Track the line numbers and ignore white-spaces
  // 2.2. If it's a lowercase, check if it results in a reserved word
  // 2.3. If it's uppercase, check if it's a valid ID
  // 2.4. If it's a digit, check if it's a valid NUMBER
  // 2.5. Otherwise, check if it's one of the valid special characters
  //       Note: be extra careful about tokens like '==' and '='.
  //             You should always extract a '==' first if it exists.
  // 3. Once the entire input stream is tokenized, add the special
  //    End-of-stream (33) token to the list of Tokens
}
