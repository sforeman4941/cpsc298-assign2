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

float feetToMeters = 0.3048;
int metersToCentimeters = 100;
int feetToInches = 12;

void readUserInput(float& feet, float& inches) {
  cout << "Enter how many feet: ";
  cin >> feet;
  cout << "Enter how many inches: ";
  cin >> inches;
}

// constant pass by reference so parameters are not changed
void convertFtInToMCm(const float& feet, const float& inches, float& meters, float& centimeters) {
  meters = (feet + inches / feetToInches) * feetToMeters;
  centimeters = meters * metersToCentimeters;
}

void outputConversions(const float meters, const float centimeters) {
  cout << "In meters: " << meters << endl;
  cout << "In centimeters: " << centimeters << endl;
}

int main (int argc, char **argv) {
  float feet;
  float inches;
  float meters;
  float centimeters;
  string userContinueInput;
  while (userContinueInput != "Exit") {
    readUserInput(feet, inches);
    convertFtInToMCm(feet, inches, meters, centimeters);
    outputConversions(meters, centimeters);
    cout << "Type \"Exit\" to quit converting or anything else to continue." << endl;
    // gets rid of previous line's return character 
    getline(cin, userContinueInput);
    getline(cin, userContinueInput);
  }
}
