// A program that reads from the user a character and classifies it into lower case, upper case, digit, not alphanumeric character
//  classifycharcase
//
//  Created by Keith Tan on 2/4/21.
//

#include <iostream>
using namespace std;

int main() {
    char userInput;
    
    cout << "Please enter a character:\n";
    cin >> userInput;
    
    if(userInput >= 'a' && userInput <= 'z')
        cout << userInput << " is a lower case letter\n";
    else if(userInput >= 'A' && userInput <= 'Z')
        cout << userInput << " is a upper case letter\n";
    else if (userInput >= '0' && userInput <= '9') // can't compare with 0 and 9 cos these are integers. We need to use C++ literals so with single quotations
        cout << userInput << " is a digit\n";
    else
        cout << userInput << " is not an alphanumeric character\n";
    
    return 0;
}
