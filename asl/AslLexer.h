
// Generated from Asl.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  AslLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    ASSIGN = 8, EQUAL = 9, PLUS = 10, MUL = 11, DIV = 12, MINUS = 13, AND = 14, 
    OR = 15, NOT = 16, NE = 17, GT = 18, GE = 19, LT = 20, LE = 21, VAR = 22, 
    INT = 23, FLOAT = 24, BOOL = 25, CHAR = 26, ARRAY = 27, OF = 28, IF = 29, 
    THEN = 30, ELSE = 31, ENDIF = 32, FUNC = 33, ENDFUNC = 34, READ = 35, 
    WRITE = 36, WHILE = 37, DO = 38, ENDWHILE = 39, RETURN = 40, BOOLVAL = 41, 
    ID = 42, INTVAL = 43, FLOATVAL = 44, CHARVAL = 45, STRING = 46, COMMENT = 47, 
    WS = 48
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

