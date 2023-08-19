#include <iostream>
using namespace std;

// create a student class
class Student{

    // data hiding
private:
    string gfName;
    float cgpa;

    // public data
public:
    string name;
    int id;
    void getData(){
        cout << "Enter student name: \n";
        cin >> name;
        cout << "Enter student ID: " << endl;
        cin >> id;
        cout << "Enter your friend name: " << endl;
        cin >> gfName;
        cout << "Enter your CGPA: " << endl;
        cin >> cgpa;
    }

    void printData(){
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Friend name: " << gfName << endl;
        cout << "CGPA: " << cgpa << endl;
    };
};

int main () {

    // create a student class object
    Student Mizan;
    Mizan.getData();
    Mizan.printData();

    return 0;
}