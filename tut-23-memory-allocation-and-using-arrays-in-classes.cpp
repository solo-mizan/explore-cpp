#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    static int counter;

public:
    void setItem();
    void displayItem();
};

void Shop ::setItem()
{
    cout << "Enter the Id of your item no " << counter + 1 << " : ";
    cin >> itemId[counter];
    cout << "Enter the price of your item : ";
    cin >> itemPrice[counter];
    cout << endl;
    counter++;
}

void Shop ::displayItem()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Price of itemId " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int Shop::counter = 0;

int main()
{
    Shop dokan;

    dokan.setItem();
    dokan.setItem();
    dokan.setItem();

    dokan.displayItem();

    return 0;
}