/* Write a program that asks the user to enter an amount of money in the format of dollars and remaining cents. 
The program should calculate and print the minimum number of coins (quarters, dimes, nickels and pennies) that are equivalent to the given amount.
Hint: In order to find the minimum number of coins, first find the maximum number of quarters that fit in the given amount of money, then find the maximum number of dimes that fit in the remaining amount, and so on.

For example, an execution should look like this:
Please enter the amount of money to convert:
# of dollars: 2
# of cents: 37
The coins are 9 quarters, 1 dimes, 0 nickels and 2 pennies */

#include <iostream>
using namespace std;

const int QUARTER = 25;
const int DIME = 10;
const int NICKEL = 5;
const int PENNY = 1;
const int CENTS_IN_A_DOLLAR = 100;
int main() {
    int numQuarters;
    int numDimes;
    int numNickels;
    int numPennies;
    int totalInCents;
    int dollars;
    int cents;

    cout << "Please enter the amount of money to convert:\n";
    cout << "# of dollars: ";
    cin >> dollars;
    cout << "# of cents: ";
    cin >> cents;

    totalInCents = (dollars * CENTS_IN_A_DOLLAR) + cents;

    numQuarters = totalInCents / QUARTER;
    numDimes = (totalInCents % QUARTER) / DIME;
    numNickels = ((totalInCents % QUARTER) % DIME) / NICKEL;
    numPennies = (((totalInCents % QUARTER) % DIME) % NICKEL) / PENNY; 

    cout << "The coins are " << numQuarters << " quarters, " << numDimes << " dimes, " << numNickels << " nickels and " << numPennies << " pennies\n";

    return 0;
}