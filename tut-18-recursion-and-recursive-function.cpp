#include <iostream>
using namespace std;

// recursion function
int factorial(int n){
    if(n<=1 && n>-1){
        return 1;
    }
    return n * factorial(n - 1);
}

int main () {

    return 0;
}