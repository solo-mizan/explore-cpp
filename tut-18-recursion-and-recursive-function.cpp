#include <iostream>
using namespace std;

// recursion function
int factorial(int n){
    if(n<=1 && n>-1){
        return 1;
    }
    return n * factorial(n - 1);
}

// fibonacci series using recursion function
int fibonacci(int n){
    if (n < 2){
        return 1;
    }
    
    return fibonacci(n-2) + fibonacci(n -1);
}


int main () {
    int a;
    cout << "Enter a positive integer" << endl;
    cin >> a;
    cout << "Fibonacci = " << fibonacci(a);

    return 0;
}