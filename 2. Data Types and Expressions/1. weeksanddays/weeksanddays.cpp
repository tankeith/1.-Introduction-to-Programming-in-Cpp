#include <iostream>
using namespace std;

const int DAYS_IN_A_WEEK = 7;
int main() {
    int daysTraveled;
    int fullWeeks, remainingDays;

    cout << "Please enter the number of days you traveled:\n";
    cin >> daysTraveled;

    fullWeeks = daysTraveled / DAYS_IN_A_WEEK;
    remainingDays = daysTraveled % DAYS_IN_A_WEEK;

    cout << daysTraveled << " days are " << fullWeeks << " weeks and " << remainingDays << " days.\n";

    return 0;
}