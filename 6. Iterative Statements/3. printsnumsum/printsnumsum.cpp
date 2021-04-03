// Write a program that reads a positive integer num, prints the number of digits in num and their sum

#include <iostream>
using namespace std;

int main() {
    int num, workingNum;
    int countDigits, sumDigits;
    int currentDigit;

    cout << "Please enter a positive integer:\n";
    cin >> num;

    workingNum = num;
    countDigits = 0;
    sumDigits = 0;

    while (workingNum > 0) {
        currentDigit = workingNum % 10;
        countDigits++;
        sumDigits += currentDigit;
        workingNum = workingNum / 10;
    }

    cout << num << " has " << countDigits << " digits and their sum is " << sumDigits << endl;

    return 0;
}