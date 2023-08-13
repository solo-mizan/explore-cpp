#include <iostream>
using namespace std;

// structure
    struct Employee {
        int eId;
        char favChar;
        float salary;
    };

int main () {
    struct Employee harry;
    harry.eId = 1;
    harry.favChar = 'A';
    harry.salary = 250;

    cout <<"The value is "<< harry.salary << endl;
    cout <<"The value is "<< harry.favChar << endl;
    cout <<"The value is "<< harry.eId << endl;

    // using typedef
    typedef struct Student
    {
        int id;
        float tutionFee;
        char favChar;
    } stdnt;

    stdnt mizan;
    mizan.id = 223311206;
    mizan.favChar = 'M';
    mizan.tutionFee = 20000;

    return 0;
}