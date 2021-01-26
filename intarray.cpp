/*
Scott Foreman
2324296
sforeman@chapman.edu
CPSC 298-01
Assignment 2
*/

#include <iostream>
#include <string>
using namespace std;

bool verifyStringToInt(string checkedString);

int main (int argc, char **argv) {
  int inputNum = -1;
  int counter = 0;
  int numberArray[10];
  // for collecting each input line
  string inputString;
  cout << "Enter 10 nonnegative integers." << endl;
  while (counter < 10) {
    getline(cin, inputString);
    if (verifyStringToInt(inputString)) {
      // converting input string to an integer
      inputNum = stoi(inputString);
    }
    else {
      cout << "Please enter a valid nonnegative integer." << endl;
      continue;
    }
    if (inputNum > -1) {
      cout << inputNum << " is a valid number." << endl;
      numberArray[counter] = inputNum;
      ++counter;
    }
    else {
      cout << inputNum << " is an invalid number. Enter a nonnegative integer." << endl;
    }
  }

  cout << "Printing integers in array." << endl;
  for (int i = 0; i < 10; ++i) {
    cout << numberArray[i] << endl;
  }

  return 0;
}

// verifies that the value in the parameter is capable to be converted to an integer.
bool verifyStringToInt(string checkedString) {
  // check if there is a negative sign
  if (checkedString.find('-') != string::npos) {
    // if not first position, invalid
    if (checkedString.find('-') != 0) {
      return false;
    }
    else {
      // creation of string without first negative sign
      string parsedString = checkedString.substr(checkedString.find('-') + 1, checkedString.length() - 1);
      // checking if the new string has a negative sign (i.e. the original has 2)
      if (parsedString.find('-') != string::npos) {
        return false;
      }
    }
  }
  // checking that each character is a digit or a negative sign
  for (int i = 0; i < checkedString.length(); ++i) {
    if (!(isdigit(checkedString.at(i))) && checkedString.at(i) != '-') {
      return false;
    }
  }
  return true;
}
