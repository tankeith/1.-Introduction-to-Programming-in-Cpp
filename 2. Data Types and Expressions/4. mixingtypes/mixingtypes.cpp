/* Shows what happens if we mix the types int and double */
#include <iostream>
using namespace std;

int main() {
    int x;
    double y;

    cout << 5 / 2 << endl; //  prints 2. The / operator has the meaning of div (fractional part removed)
    cout << 5.0 / 2.0 << endl; // prints 2.5. The / operator has meaning of division.
    cout << 5.0 / 2 << endl; // prints 2.5. Compiler tries to resolve mixed types and tries to implicitly cast the two operands to the same type, and int 2 is cast to a double 2.0.

    x = 5 / 2; // x = 2. Both 5 and 2 are ints, so we get the value 2, which is assigned to x.  
    y = 5 / 2; // y = 2.0. RHS is first evaluated and since data type isn't considered at this stage, 5 / 2 gives 2, which is cast into 2.0 as y is a double.

    return 0;
}