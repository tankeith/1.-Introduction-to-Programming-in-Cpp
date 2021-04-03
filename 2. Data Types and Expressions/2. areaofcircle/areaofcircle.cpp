#include <iostream>
#include <cmath> // C numerics library, from which the constant M_PI used in line 11 is called.
using namespace std;

int main() {
    double radius, area;
    
    cout << "Please enter the radius:\n";
    cin >> radius;

    area = M_PI * (radius * radius);
    cout << "The area of a circle with radius of " << radius << " is " << area << endl;

    return 0;
}