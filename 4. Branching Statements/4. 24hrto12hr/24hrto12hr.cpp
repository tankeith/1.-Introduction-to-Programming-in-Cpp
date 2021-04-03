//  Program that reads from the user a time entered in a 24h format and prints the equivalent time in 12h format.
//  main.cpp
//  24hrto12hr
//
//  Created by Keith Tan on 2/4/21.
//

#include <iostream>
using namespace std;

int main() {
    int hour24, minutes24;
    int hour12, minutes12;
    string period;
    char temp;
       
    cout << "Please enter a time in a 24-hour format:\n";
    cin >> hour24 >> temp >> minutes24;
    
    minutes12 = minutes24; // sets the minutes to be the same anyway
    
    if(hour24 >= 0 && hour24 <= 11) {
        period = "am";
        if(hour24 == 0)
            hour12 = 12;
        else
            hour12 = hour24;
    }
    else {
        period = "pm";
        if(hour24 == 12)
            hour12 = 12;
        else
            hour12 = hour24 - 12;
    }
    
    cout << hour24 << ":" << minutes24 << " is " << hour12 << ":" << minutes12 << " " << period << endl;
    
    return 0;
}
