#include <iostream>
using namespace std;

struct StructResult {
    int greater;
    int smaller;
};

StructResult findGreaterSmaller(int x, int y){
    StructResult result;
    if(x > y){
        result.greater = x;
        result.smaller = y;
    }
    else {
    result.greater = y;
    result.smaller = x;
    }

    return result;
}

int main () {
    int a, b;
    cout << "Enter two integer: " << endl;
    cin >> a >> b;
    StructResult findResult = findGreaterSmaller(a, b);

    cout << "The greater number is " << findResult.greater << endl;
    cout << "The smaller number is " << findResult.smaller << endl;

    return 0;
}