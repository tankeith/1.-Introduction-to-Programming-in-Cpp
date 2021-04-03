/* Write program that reads int from user and prints its absolute value */
// One-way if statement
//  Created by Keith Tan on 28/3/21.

#include <iostream>
using namespace std;

int main() {
    int userInput, absValue;
    
    cout << "Please enter an integer:\n";
    cin >> userInput;
    
    absValue = userInput;
    if(userInput < 0)
        absValue = userInput * (-1);
    
    cout << "|" << userInput << "| = " << absValue << endl;
        
    return 0;
}
