#include <iostream>
using namespace std;

int main (){
    int a = 4, b = 3;
    cout << "a = " << a << "b = " << b << endl;

    // Arithmetic operators in C++
    cout << "The value of a / b is " << a / b << endl;
    cout << "The value of a * b is " << a * b << endl;
    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a - b is " << a - b << endl;
    cout << "The value of a % b is " << a % b << endl;
    cout << "The value of a++ is " << a++ << endl; /*First print the value then increment the value of the variable*/
    cout << "The value of a-- is " << a-- << endl; /*First print the value then decrement the value of the variable*/
    cout << "The value of ++a is " << ++a << endl; /*First increment and then print the value of the variable*/
    cout << "The value of --a is " << --a << endl; /*First decrement the value and then print the value of the variable*/

    // Comparison operators
    cout << "The value of a == b is " << (a == b) << endl;
    cout << "The value of a != b is " << (a != b) << endl;
    cout << "The value of a > b is " << (a > b) << endl;
    cout << "The value of a < b is " << (a < b) << endl;
    cout << "The value of a <= b is " << (a <= b) << endl;
    cout << "The value of a >= b is " << (a >= b) << endl;

    /* There are more operators in Programming Language such as ==>
    Logical Operator,
    Assignment Operator
     */

    return 0;
}