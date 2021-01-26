/*
Scott Foreman
2324296
sforeman@chapman.edu
CPSC 298-01
Assignment 2
*/

#include <iostream>
using namespace std;

float addTax(float taxRate, float cost) {
  // updates the cost
  float updatedCost = cost + (taxRate / 100) * cost;
  return (updatedCost);
}

int main (int argc, char **argv) {
  float taxRate;
  float cost;
  cout << "Enter a tax rate: ";
  cin >> taxRate;
  cout << "Enter a cost: ";
  cin >> cost;
  cout << "New cost: " << addTax(taxRate, cost) << endl;
}
