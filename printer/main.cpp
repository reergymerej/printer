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

std::string getRow(int size, bool isEdge) {
  std::string row = "";
  std::string side = isEdge ? "+" : "|";
  std::string middle = isEdge ? "-" : " ";
  row += side;
  for (int column = 1; column < size - 1; column++) {
    row += middle;
  }
  row += side;
  row += "\n";
  return row;
}

void printRow(int size, bool isEdge) {
  std::string row = getRow(size, isEdge);
  std::cout << row;
}

void printSquare(int size) {
  for (int row = 0; row < size; row++) {
    if (row == 0 || row == size - 1) {
      printRow(size, true);
    } else {
      printRow(size, false);
    }
  }
}

int main(int argc, const char * argv[]) {
  printSquare(5);
  printSquare(15);
  return 0;
}
