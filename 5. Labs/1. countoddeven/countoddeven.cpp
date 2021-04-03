// Write a program that inputs four numbers separated by spaces
// It should count how many odd and even numbers there are
// It should then output one of three possibilities depending on how many even and odd numbers are entered
// 1. more evens, 2. more odds, 3. same number of evens and odds

#include <iostream>
using namespace std;

int main() {
    int one, two, three, four;
    int evenCount, oddCount;

    cout << "Please enter 4 positive integers, separated by a space: ";
    cin >> one >> two >> three >> four;

    // Check whether each input is even or odd and increment respective counter
    if (one % 2 == 0)
        evenCount++;
    else
        oddCount++;
    if (two % 2 == 0)
        evenCount++;
    else
        oddCount++;
    if (three % 2 == 0)
        evenCount++;
    else
        oddCount++;
    if (four % 2 == 0)
        evenCount++;
    else
        oddCount++;

    // Compares even and odd counters
    if (evenCount > oddCount)
        cout << "more evens\n";
    else if (oddCount == evenCount)
        cout << "same number of evens and odds\n";
    else 
        cout << "more odds\n";

    return 0;
}