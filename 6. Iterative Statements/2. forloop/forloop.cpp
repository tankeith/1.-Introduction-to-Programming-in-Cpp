// Write a program that reads a positive integer n, and prints the numbers from 1 up to n

#include <iostream>
using namespace std;

int main() {
    int n;
    int counter;

    cout << "Please enter a positive integer:\n";
    cin >> n;

    for (counter = 1; counter <= n; counter++)
        cout << counter << endl;

    return 0;
}