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
#include <sstream>
#include "square.hpp"

int main(int argc, const char * argv[])
{
  // get size from args
  std::istringstream ss(argv[1]);
  int size;
  ss >> size;
  printSquare(size);
  return 0;
}
