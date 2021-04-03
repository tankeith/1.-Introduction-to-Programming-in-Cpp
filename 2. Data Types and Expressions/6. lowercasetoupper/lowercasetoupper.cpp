/* This program reads a user-input lower case letter and prints its corresponding upper case letter */
#include <iostream>
using namespace std;

int main() {
    char lowerCaseLetter, upperCaseLetter;
    int offset;

    cout << "Please enter a lower case letter:\n";
    cin >> lowerCaseLetter;

    offset = (int)(lowerCaseLetter - 'a'); // ASCII value of 'a' is 97.
    upperCaseLetter = (char)('A' + offset);

    cout << "The upper case of " << lowerCaseLetter << " is " << upperCaseLetter << endl;

    return 0;
}