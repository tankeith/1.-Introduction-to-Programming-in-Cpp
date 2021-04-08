// The Fibonacci sequence is a series of numbers in which each number is the sum of the preceding two numbers. 
// The first two numbers in the series are the number 1. // <-- specific to assignment. Fibs start with 0
// Write a program to print the first n Fibonacci numbers.
// Please enter a positive integer greater than 1: 4
// 1
// 1
// 2
// 3

#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;
    int userInput;
    int i;

    cout << "Please enter a positive integer greater than 1: ";
    cin >> userInput;

    n1 = 1;
    n2 = 1;
    cout << n1 << endl;
    cout << n2 << endl;
    for (i = 2; i < userInput; i++) {
        n3 = n1 + n2;
        cout << n3 << endl;
        n1 = n2;
        n2 = n3;
    }

    return 0;
}