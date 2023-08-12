#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int a = 2, b = 23, c = 4343;

    // ********** Maniputators **********
    // Manipulators are special functions that can be included in the I/O stream to alter the format parameter of a stream.

    // Manipulators are operators that are used to format the data display.

    // endl, ends, ws, setw, flush are the examples of manipulator operators.
    cout << "The value of a without setw is: " << a << endl;
    cout << "The value of b without setw is: " << b << endl;
    cout << "The value of c without setw is: " << c << endl;

    cout << "The value of a with setw is: "<<setw(4) << a << endl;
    cout << "The value of b with setw is: "<<setw(4) << b << endl;
    cout << "The value of c with setw is: "<<setw(4) << c << endl;

// ********** Operator Precedence **********
    int x = 3, y = 4;
    int z = ((((x*y)+y)-45)+87);
    cout << z;

    return 0;
}