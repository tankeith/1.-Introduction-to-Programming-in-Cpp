// Write a program that reads from the user a positive integer, and determines its parity (odd or even)
// Two-way if statement
//  Created by Keith Tan on 28/3/21.

#include <iostream>
using namespace std;

int main() {
    int userInput;
    
    cout << "Please enter a positive integer:\n";
    cin >> userInput;
    
    if(userInput % 2 == 0)
        cout << userInput << " is even\n";
    else
        cout << userInput << " is odd\n";
        
    return 0;
}
