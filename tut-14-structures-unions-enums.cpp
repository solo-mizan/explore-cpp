#include <iostream>
using namespace std;

// structure
    struct Employee {
        int eId;
        char favChar;
        float salary;
    };

        // using typedef
    typedef struct Student
    {
        int id;
        float tutionFee;
        char favChar;
    } stdnt;

    // union
    union Money
    {
        int rice;
        char letter;
        float gold;
    };

    // enum
    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };

    int main()
    {
        struct Employee harry;
        harry.eId = 1;
        harry.favChar = 'A';
        harry.salary = 250;

        cout << "The value is " << harry.salary << endl;
        cout << "The value is " << harry.favChar << endl;
        cout << "The value is " << harry.eId << endl;

        // for using typedef we don't need to write "struct Student Mizan", instead we can access the Student strcut by calling stdnt.
        stdnt mizan;
        mizan.id = 223311206;
        mizan.favChar = 'M';
        mizan.tutionFee = 20000;

        union Money Rakib;
        Rakib.gold = 25.02;
        Rakib.letter = 'R';
        Rakib.rice = 545;

        // We can't access all values of a union type data at the same time.
        cout << Rakib.gold << endl
             << Rakib.letter << endl
             << Rakib.rice;

        return 0;
}