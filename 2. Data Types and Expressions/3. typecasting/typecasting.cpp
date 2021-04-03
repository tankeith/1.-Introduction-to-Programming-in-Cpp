/* Shows what happens if we mix the types int and double */
#include <iostream>
using namespace std;

int main() {
    int x1, x2;
    double y1, y2;

    x1 = 6;
    y1 = 6.7;

    y2 = 6; // when we assign an int literal 6 into a double y2, this is formally illegal. But compiler will figure out a way to deal with it
    y2 = (double)6; // type casting: converts int 6 into a double, and assigns into y2, making this a legal assignment. Converts 32-bit two's complement representation into a 64-bit floating point
    x2 = (int)6.7; // int can't represent 6.7, so compiler will convert it into 6 -- the fractional part is simply removed.

    return 0;
}