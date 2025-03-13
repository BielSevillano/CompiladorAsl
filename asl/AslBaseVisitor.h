
// Generated from Asl.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "AslVisitor.h"


/**
 * This class provides an empty implementation of AslVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  AslBaseVisitor : public AslVisitor {
public:

  virtual std::any visitProgram(AslParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction(AslParser::FunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameters(AslParser::ParametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameter(AslParser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclarations(AslParser::DeclarationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariable_decl(AslParser::Variable_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(AslParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBasic_type(AslParser::Basic_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArray_type(AslParser::Array_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatements(AslParser::StatementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignStmt(AslParser::AssignStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStmt(AslParser::IfStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProcCall(AslParser::ProcCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReadStmt(AslParser::ReadStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWriteExpr(AslParser::WriteExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWriteString(AslParser::WriteStringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileStmt(AslParser::WhileStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnStmt(AslParser::ReturnStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLeftIdent(AslParser::LeftIdentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLeftArray(AslParser::LeftArrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParent(AslParser::ParentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArray(AslParser::ArrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExprIdent(AslParser::ExprIdentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArithmetic(AslParser::ArithmeticContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelational(AslParser::RelationalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnary(AslParser::UnaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncCall(AslParser::FuncCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValue(AslParser::ValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogical(AslParser::LogicalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdent(AslParser::IdentContext *ctx) override {
    return visitChildren(ctx);
  }


};

