#include <iostream>
using namespace std;

class C2;

class C1
{
    int val1;

public:
    void setData(int value)
    {
        val1 = value;
    }

    void displayData()
    {
        cout << "Value1: " << val1 << endl;
    }

    friend void exchangeData(C1 &, C2 &);
};

class C2
{
    int val2;

public:
    void setData(int value)
    {
        val2 = value;
    }

    void displayData()
    {
        cout << "Value2: " << val2 << endl;
    }

    friend void exchangeData(C1 &, C2 &);
};

void exchangeData(C1& o1, C2 & o2)
{
    int temp = o1.val1;
    o1.val1 = o2.val2;
    o2.val2 = temp;
}

int main()
{
    C1 o1;
    o1.setData(25);
    o1.displayData();

    C2 o2;
    o2.setData(50);
    o2.displayData();

    exchangeData(o1, o2);

    o1.displayData();
    o2.displayData();

    return 0;
}