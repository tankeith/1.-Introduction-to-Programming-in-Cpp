/* The formula for BMI is
    Weight/Height^2
Where weight is in kilograms and height is in meters.

Write a program that prompts for weight in pounds and height in inches, 
converts the values to metric, and then calculates the BMI with two decimal places.
Note: 1 pound is  0.453592  kilograms and 1 inch is 0.0254 meters.

For example, an execution could look like  this:
Please enter weight in pounds: 135
Please enter height in inches: 71
BMI is: 18.83 */

#include <iostream>
#include <iomanip> // required for rounding off in line 38. << std::fixed << std::setprecision(n) (see Horton & Van Weert p. 51-52)
using namespace std;

const double ONE_POUND_IN_KILOS = 0.453592;
const double ONE_INCH_IN_METERS = 0.0254;

int main() {
    double weightInPounds;
    double weightInKilos;
    double heightInInches;
    double heightInMeters;
    double bmi;

    cout << "Please enter weight in pounds: ";
    cin >> weightInPounds;
    cout << "Please enter height in inches: ";
    cin >> heightInInches;

    weightInKilos = weightInPounds * ONE_POUND_IN_KILOS;
    heightInMeters = heightInInches * ONE_INCH_IN_METERS;

    bmi = weightInKilos / (heightInMeters * heightInMeters);

    cout << "BMI is: " << std::fixed << std::setprecision(2) << bmi << endl; // n in std::fixed << std::setprecision(n) specifies number of digits after the decimal point

    return 0;
}