#include <iostream>
#include <string>
using namespace std;

class Binary{
    string s;
    
    public:
    void read(){
        cout << "Enter a binary number" << endl;
        cin >> s;
    }

    void checkBinary(){
        for (int i = 0; i < s.length(); i++){
            if(s.at(i) != '0' && s.at(i) != '1'){
                cout << "Incorrect binary format" << endl;
                exit(0);
            }
        }
    }
};

int main () {
    /*
    OOP Classes and Objects
    C++ --> initially called 'C with classes' by Stroustroup

    Class --> extension of structures (in C)

    structure had some limitations like -->
    1. No data hiding system (public, private)
    2. No methods (function) support
    So, Classes are structures + more!

    Nesting of member functions -->
    */

    Binary binaryObj;
    binaryObj.read();
    binaryObj.checkBinary();

    return 0;
}