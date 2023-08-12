#include <iostream>
using namespace std;

int main () {
    // ******** break *********
     for (int i = 0; i < 100; i++)
     {
         cout << i << endl;
         if(i == 10)
             break;
             // break keyword will terminate the loop if the condition is satisfy.
     }

    // ******* continue *******
     for (int j = 0; j < 20; j++)
     {
         cout << j << endl;
         if(j == 10)
             continue;
             // continue keyword will skip the current iteration and move to next and continue the loop.
     }
     
     


    return 0;
}