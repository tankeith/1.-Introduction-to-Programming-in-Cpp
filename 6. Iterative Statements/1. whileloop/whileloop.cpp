// Write a program that reads a positive integer n, and prints the numbers from 1 up to n

#include <iostream>
using namespace std;

int main() {
    int n;
    int counter;

    cout << "Please enter a positive integer:\n";
    cin >> n;

    counter = 1;
    while (counter <= n) {
        cout << counter << endl;
        counter++;
    }

    return 0;
}