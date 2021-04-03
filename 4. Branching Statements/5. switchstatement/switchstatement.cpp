// A program that reads from user a simple mathematical expression (+ - * /) and prints its value
// Uses switch statement (even though this could be done using if-else statements). 
// If-else statements are more powerful than switch statements.
// There are things that we can implement using if-else that can't be done using switch statements.

#include <iostream>
using namespace std;

int main() {
    double arg1, arg2;
    double result;
    char op;


    cout << "Please enter an expression of the form arg1 operator arg2:\n";
    cin >> arg1 >> op >> arg2;

    switch (op)
    {
    case '+':
        result = arg1 + arg2;
        cout << result << endl;
        break;
    case '-':
        result = arg1 - arg2;
        cout << result << endl;
        break;
    case '*':
        result = arg1 * arg2;
        cout << result << endl;
        break;
    case '/':
        if(arg2 != 0) {
            result = arg1 / arg2;
            cout << result << endl;
        }
        else
            cout << "Illegal expression\n";
        break;
    default:
        cout << "Illegal expression\n";
        break;
    }

    return 0;
}