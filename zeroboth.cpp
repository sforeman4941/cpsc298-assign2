/*
Scott Foreman
2324296
sforeman@chapman.edu
CPSC 298-01
Assignment 2
*/

#include <iostream>
using namespace std;

void zeroBoth(int& num1, int& num2) {
  num1 = 0;
  num2 = 0;
}

int main(int argc, char **argv) {
  int number1;
  int number2;
  cout << "Enter a first number: ";
  cin >> number1;
  cout << "Enter a second number: ";
  cin >> number2;
  // setting both numbers to 0
  zeroBoth(number1, number2);
  cout << "First number: " << number1 << endl;
  cout << "Second number: " << number2 << endl;
}
