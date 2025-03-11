
// Generated from Asl.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  AslLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    ASSIGN = 8, EQUAL = 9, PLUS = 10, MUL = 11, DIV = 12, MINUS = 13, AND = 14, 
    OR = 15, NOT = 16, NE = 17, GT = 18, GE = 19, LT = 20, LE = 21, VAR = 22, 
    INT = 23, FLOAT = 24, BOOL = 25, CHAR = 26, IF = 27, THEN = 28, ELSE = 29, 
    ENDIF = 30, FUNC = 31, ENDFUNC = 32, READ = 33, WRITE = 34, WHILE = 35, 
    DO = 36, ENDWHILE = 37, RETURN = 38, BOOLVAL = 39, ID = 40, INTVAL = 41, 
    FLOATVAL = 42, CHARVAL = 43, STRING = 44, COMMENT = 45, WS = 46
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

