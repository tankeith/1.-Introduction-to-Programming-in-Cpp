/* This program reads two integers from the user and prints their sum */
#include <iostream>
using namespace std;

int main() {
  int num1; // holds the first input
  int num2; // holds the second input 
  int sum; // holds the sum

  cout << "Please enter two numbers separated by a space:" << endl;
  cin >> num1 >> num2;

  sum = num1 + num2;

  cout << num1 << " + " << num2 << " = " << sum << endl;

  return 0;
}