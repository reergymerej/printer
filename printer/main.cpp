//
//  main.cpp
//  printer
//
//  Created by Jeremy Greer on 5/11/17.
//  Copyright © 2017 Grizzle. All rights reserved.
//
//  This program is going to print stuff for us to the terminal.
//

#include <iostream>

void printSquare() {
  std::cout << "+---------+" << std::endl;
  std::cout << "|         |" << std::endl;
  std::cout << "|         |" << std::endl;
  std::cout << "|         |" << std::endl;
  std::cout << "|         |" << std::endl;
  std::cout << "|         |" << std::endl;
  std::cout << "+---------+" << std::endl;
}

int main(int argc, const char * argv[]) {
  printSquare();
  return 0;
}
