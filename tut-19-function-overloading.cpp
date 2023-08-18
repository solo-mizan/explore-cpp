#include <iostream>
using namespace std;

/*
function overloading -->
Function overloading is a feature of object-oriented programming where two or more functions can have the same name but different parameters. When a function name is overloaded with different jobs it is called Function Overloading.
*/
int sum(int a, int b){
    return a + b;
}

double sum(int x, int y, int z){
    return x + y + z;
}

// overloading function of calculating volume of a cube
int volume(int h){
    return (h * h * h);
}

// overloading function of calculating volume of a cylinder
int volume(int h, int w, int r){
    return (h * w * r);
}

// overloading function of calculating volume of a rectangle
int volume(int h, int w){
    return (h * w);
}

int main () {

    int a, b, c;
    cout << "Enter numbers: " << endl;
    cin >> a >> b >> c;

    cout << "Sum of first 2 numbers: " << sum(a, b) << endl;
    cout << "Sum of 3 numbers: " << sum(a, b, c) << endl;

    return 0;
}