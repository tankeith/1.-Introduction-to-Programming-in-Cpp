/* This program shows operations with strings using the + operator. */
#include <iostream>
#include <string>
using namespace std;

int main() {
    int x;
    double y;
    string s;

    x = 5;
    y = 7.3;
    s = "Hello";

    /* These 4 lines result in compilation errors, showing that we can't implicitly cast int or double into a string or by using (string).
    cout << s + x << endl;
    cout << s + y << endl;
    cout << s + (string)x << endl;
    cout << s + (string)y << endl; */

    // Using std::to_string() is the right way to convert an int or double into a string
    cout << s + std::to_string(x) << endl;
    cout << s + std::to_string(y) << endl;

    cout << s << endl; // prints the string itself
    cout << s + " world" << endl; // prints the string concatenated with another
    s = s + " world"; // updates s variable with concatenated string
    cout << s << endl; // prints updated s variable

    return 0;
}