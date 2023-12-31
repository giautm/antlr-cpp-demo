/* Copyright (c) 2012-2017 The ANTLR Project. All rights reserved.
 * Use of this file is governed by the BSD 3-clause license that
 * can be found in the LICENSE.txt file in the project root.
 */

//
//  main.cpp
//  antlr4-cpp-demo
//
//  Created by Mike Lischke on 13.03.16.
//

#include <iostream>

#include <antlr4-runtime.h>
#include <TSqlLexer.h>
#include <TSqlParser.h>

int main(int , const char **) {
  antlr4::ANTLRInputStream input(u8"CREATE PROCEDURE HumanResources.uspGetEmployees\n    @LastName NVARCHAR(50),\n    @FirstName NVARCHAR(50)\nAS\n    SET NOCOUNT ON;\n    SELECT FirstName, LastName, JobTitle, Department\n    FROM HumanResources.vEmployeeDepartment\n    WHERE FirstName = @FirstName AND LastName = @LastName;");
  tsqlparser::TSqlLexer lexer(&input);
  antlr4::CommonTokenStream tokens(&lexer);

  tokens.fill();
  for (auto token : tokens.getTokens()) {
    std::cout << token->toString() << std::endl;
  }

  tsqlparser::TSqlParser parser(&tokens);
  auto tree = parser.tsql_file();

  std::cout << tree->toStringTree(&parser) << std::endl;

  return 0;
}