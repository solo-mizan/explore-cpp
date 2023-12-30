#include <iostream>
using namespace std;

class Complex{
    int a, b;

    public:
    void setData(int v1, int v2){
        a = v1;
        b = v2;
    }
    void sumComplexNumbers(Complex o1, Complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printData(){
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

int main () {
    Complex c1, c2, c3;

    c1.setData(2, 4);
    c1.printData();

    c2.setData(5, 7);
    c2.printData();

    c3.sumComplexNumbers(c1, c2);
    c3.printData();
    
    return 0;
}