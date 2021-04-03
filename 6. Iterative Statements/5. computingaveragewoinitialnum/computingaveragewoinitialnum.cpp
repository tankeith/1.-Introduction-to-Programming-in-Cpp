// Write a program that reads a sequence of grades until -1 is entered and prints the average
// Introduces flag variables which has two states: down or up == false or true
// Test: 90 87 76 89 -1 = 85.5

#include <iostream>
using namespace std;

int main() {
    bool endOfInputSeen;
    int sum, numOfStudents;
    int current;
    double average;

    cout << "Enter the grades separated by a space" << endl;
    cout << "End your sequence by typing -1:\n";

    sum = 0;
    numOfStudents = 0;
    endOfInputSeen = false;
    while (endOfInputSeen == false) { // a while loop is typically chosen if we don't know what the length of the range is
        cin >> current;
        if (current == -1) {
            endOfInputSeen = true;
        }
        else {
            sum += current;
            numOfStudents++;
        }
    }

    average = (double)sum / (double)numOfStudents; // casts both numbers first as doubles as the average may have decimal
        
    cout << "The class average is: " << average << endl;

    return 0;
}
