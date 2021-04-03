// Write a program that reads grades of students in a class and prints the average

#include <iostream>
using namespace std;

int main() {
    int numOfStudents;
    int count;
    int current, sum;
    double average;

    cout << "Please enter the number of students in the class:\n";
    cin >> numOfStudents;

    cout << "Enter the students' grades (separated by a space):\n";
    sum = 0;
    for (count = 1; count <= numOfStudents; count++) {
        cin >> current;
        sum += current;
    }

    average = (double)sum / (double)numOfStudents; // casts both numbers first as doubles as the average may have decimal
        
    cout << "The average is: " << average << endl;

    return 0;
}