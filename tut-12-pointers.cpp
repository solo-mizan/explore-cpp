  #include <iostream>
  using namespace std;
  
  int main () {

    // pointers ----> data type which holds the address of other data types.
    int x = 5;
    int *b = &x;

    // & ----> (address of) operator
    cout << "The address of x is " <<& x << endl;
    cout << "The address of x is " << b << endl;

    // * ----> (value at) dereference operator
    cout << "The value at address b is " << *b << endl;
    cout << "The value of address x is " << x << endl;

    // pointer to pointer
    int **c = &b;
    
    return 0;
  }