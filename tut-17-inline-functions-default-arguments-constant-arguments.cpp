#include <iostream>
using namespace std;

/*
advantages of declaring a inline function:
1. No function call overhead occurs; hence enhanced program speed is obtained.
*/

// inline function 
inline int product(int x, int y){
    return x * y;
}

int main () {
    int a, b;
    cout << "Enter the value of a and b" << endl;
    cin >> a >> b;
    cout << "The product of a and b is " << product(a, b);
    return 0;
}