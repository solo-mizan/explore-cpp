#include <iostream>
using namespace std;

// return multiple values from a function using array
void findGreaterSmaller(int a, int b, int arr[]){

    // store the greater element at 0th index of the array
    if(a > b){
        arr[0] = a;
        arr[1] = b;
    }
    else{
        arr[0] = b;
        arr[1] = a;
    }
}

// return multiple values using structure
struct StructResult {
    int firstValue;
    int secondValue;
};

StructResult swapValues(int x, int y){
    StructResult result;
    result.firstValue = y;
    result.secondValue = x;
    return result;
}

int main () {
    int x = 20, y = 10;
    int array[2];
    findGreaterSmaller(x, y, array);

    // retrieve the greater and smaller number from array
    cout << "The greater number is " << array[0] << endl;
    cout << "The smaller number is " << array[1] << endl;

    StructResult swapped = swapValues(x, y);
    cout << "The swapped value of x is " << swapped.firstValue << endl;
    cout << "The swapped value of y is " << swapped.secondValue << endl;

    return 0;
}