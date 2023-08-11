#include <iostream>
using namespace std;

int c = 45;

int main() {
    int a, b, c;
    cout << "Enter the value of a: " << endl;
    cin >> a;
    cout << "Enter the value of a: " << endl;
    cin >> b;
    c = a + b;
    cout << "The sum c: "<< c << endl;
    cout << "The sum in global scope: " << ::c << endl; /* :: is called scope resolution operator. */

// ********** float, double and long double Literals ************
    float x; // 4 byte
    double y; // 8 byte
    long double z; // 12 byte

    cout << sizeof(x) << endl
         << sizeof(y) << endl
         << sizeof(z) << endl;

    // ********** Reference Variables ************
    // Mizanur ---> Mizan ---> Lodo (All are the same person)
    float kg = 10.0;
    float &kilogram = kg; // & (address of operator) indecate the same location of new variable. That's why kilogram is also 10.0

    // *********** Typecasting ************
    int e = 45;
    float f = 45.56;
    float sum = (int)f + e;
    cout << sum;
}