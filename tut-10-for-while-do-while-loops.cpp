#include <iostream>
using namespace std;

int main () {
    /*
    Loops in C++:
    There are three types of loops in C++:
    1. for loop
    2. while loop
    3. do-while loop
    */

   // ******** for loop *********
    for (int i = 0; i <= 100; i=i+2) {
        cout << i << endl;
    }

    // ******** while loop ********
    int j = 0;
    while (j < 100) {
        cout << j << endl;
        j++;
    }

    // ******** do-while loop ********
    int k = 1;
    do{
        cout << k * k << endl;
        k++;
    } while (k < 100);
    return 0;
}