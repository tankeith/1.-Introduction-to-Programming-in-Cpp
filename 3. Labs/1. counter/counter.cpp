/* Write a program that asks the user to enter a number of quarters, dimes, nickels and pennies and then outputs the monetary value of the coins in the format of dollars and remaining cents.
Your program should interact with the user exactly as it shows in the following example:
Please enter the number of coins:
# of quarters: 20
# of dimes: 4
# of nickels: 13
# of pennies: 17
The total is 6 dollars and 22 cents
*/

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

    cout << "Please enter the number of coins:\n";
    cout << "# of quarters: ";
    cin >> numQuarters;
    cout << "# of dimes: ";
    cin >> numDimes;
    cout << "# of nickels: ";
    cin >> numNickels;
    cout << "# of pennies: ";
    cin >> numPennies;

    totalInCents = (numQuarters * QUARTER) + (numDimes * DIME) + (numNickels * NICKEL) + (numPennies * PENNY);
    dollars = totalInCents / CENTS_IN_A_DOLLAR;
    cents = totalInCents % CENTS_IN_A_DOLLAR;

    cout << "The total is " << dollars << " dollars" << " and " << cents << " cents\n";

    return 0;
}