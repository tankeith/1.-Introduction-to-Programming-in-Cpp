// Write a program that inputs two grades separated by a space.
// If both grades are below a score of 60 then the program outputs: Student Failed:(
// If both grades are >= 95 then the program outputs: Student Graduated with Honors:)
// Otherwise the program outputs: Student Graduated!

#include <iostream>
using namespace std;

int main() {
    double grade1, grade2;

    cout << "Please enter 2 grades, separated by a space: ";
    cin >> grade1 >> grade2;

    if (grade1 < 60 && grade2 < 60)
        cout << "Student Failed:(\n";
    else if (grade1 >= 95 && grade2 >= 95)
        cout << "Student Graduated with Honors:)\n";
    else
        cout << "Student Graduated!\n";

    return 0;
}