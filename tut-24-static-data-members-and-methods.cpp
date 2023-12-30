#include <iostream>
using namespace std;

class Employee{
    int id;

    // count is the static data member of class Employee
    static int count;

    public:
    void setData(){
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }

    void getData(){
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(){
        cout << "The value of count is " << count << endl;
    }
};

int Employee::count; // default value is 0

int main () {

    Employee mizan, faisal, jibon;

    mizan.setData();
    mizan.getData();
    Employee::getCount();

    faisal.setData();
    faisal.getData();
    Employee::getCount();

    jibon.setData();
    jibon.getData();
    Employee::getCount();

    return 0;
}