// Write a program that reads a positive integer n and prints the first n even numbers
// IO is as follows:
// Please enter a positive integer: 3
// 2
// 4
// 6

#include <iostream>
using namespace std;

int main() {
    int n;
    int start;

    cout << "Please enter a positive integer: ";
    cin >> n;

    for (start = 1; start <= n; start++)
        cout << start * 2 << endl;

    return 0;
}