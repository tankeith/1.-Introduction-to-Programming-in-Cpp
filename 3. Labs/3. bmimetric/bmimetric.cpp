/* Body mass index (BMI) is a number calculated from a person’s weight and height.
According to the Centers for Disease Control and Prevention, the BMI is a fairly
reliable indicator of body fatness for most people. BMI does not measure body fat
directly, but research has shown that BMI correlates to direct measures of body fat,  
such as underwater weighing and dual-energy X-ray absorptiometry. The formula for BMI is
    Weight/Height^2
Where weight is in kilograms and height is in meters.

Write a program that prompts for metric weight and height and outputs the BMI with two decimal places.

For example, an execution could look like this:
Please enter weight in kilograms: 50
Please enter height in meters: 1.58
BMI is: 20.03
*/

#include <iostream>
#include <iomanip> // required for rounding off in line 38. << std::fixed << std::setprecision(n) (see Horton & Van Weert p. 51, 52)
using namespace std;

int main() {
    double weight;
    double height;
    double bmi;

    cout << "Please enter weight in kilograms: ";
    cin >> weight;
    cout << "Please enter height in meters: ";
    cin >> height;

    bmi = weight / (height * height);

    cout << "BMI is: " << std::fixed << std::setprecision(2) << bmi << endl; // n in std::fixed << std::setprecision(n) specifies number of digits after the decimal point

    return 0;
}