#include <iostream>
using namespace std;

// global scope variable
int global_number = 11;

void sum() {
   cout << global_number;
}

int main () {

   // local scope variable
    int local_number = 25;

   sum();

   return 0;
}