/* This program reads a character input by the user and prints its ASCII value */
#include <iostream>
using namespace std;

int main() {
    char inputChar;
    int asciiValue;
    
    cout << "Please enter a character:\n";
    cin >> inputChar;

    asciiValue = (int)inputChar; // This is an implicit cast where (int) is optional because the ASCII value is stored.

    cout << "The ASCII value of " << inputChar << " is " << asciiValue << endl;
    
    return 0;
}