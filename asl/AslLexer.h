
// Generated from Asl.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  AslLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, ASSIGN = 5, EQUAL = 6, PLUS = 7, 
    MUL = 8, DIV = 9, MINUS = 10, AND = 11, OR = 12, NOT = 13, NE = 14, 
    GT = 15, GE = 16, LT = 17, LE = 18, VAR = 19, INT = 20, FLOAT = 21, 
    BOOL = 22, CHAR = 23, IF = 24, THEN = 25, ELSE = 26, ENDIF = 27, FUNC = 28, 
    ENDFUNC = 29, READ = 30, WRITE = 31, ID = 32, INTVAL = 33, FLOATVAL = 34, 
    CHARVAL = 35, STRING = 36, COMMENT = 37, WS = 38
  };

  explicit AslLexer(antlr4::CharStream *input);

  ~AslLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

