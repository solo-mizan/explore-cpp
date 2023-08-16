#include <iostream>
using namespace std;

/*
advantages of declaring a inline function:
1. No function call overhead occurs; hence enhanced program speed is obtained.
*/

// inline function 
inline int product(int x, int y){
    static int c = 0; // This line will execute only once.
    c = c + 1;        // This function will remember last "c" value.
    return (x * y) + c;
}

int main () {
    int a, b;
    cout << "Enter the value of a and b" << endl;
    cin >> a >> b;
    cout << "The product of a and b is " << product(a, b)<< endl;
    cout << "The product of a and b is " << product(a, b)<< endl;
    cout << "The product of a and b is " << product(a, b)<< endl;
    cout << "The product of a and b is " << product(a, b)<< endl;
    cout << "The product of a and b is " << product(a, b)<< endl;
    cout << "The product of a and b is " << product(a, b)<< endl;
    cout << "The product of a and b is " << product(a, b)<< endl;
    cout << "The product of a and b is " << product(a, b)<< endl;
    cout << "The product of a and b is " << product(a, b)<< endl;
    cout << "The product of a and b is " << product(a, b)<< endl;
    cout << "The product of a and b is " << product(a, b)<< endl;

    return 0;
}