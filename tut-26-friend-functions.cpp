#include <iostream>
using namespace std;

class Data{
    double id;
    string name;
    int age;

    public:
    void setData(){
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your ID: ";
        cin >> id;
        cout << "How old are you? ";
        cin >> age;
    }

    friend void displayData(Data obj);
};

void displayData(Data obj){
    cout << "Name: " << obj.name << endl;
    cout << "id: " << obj.id << endl;
    cout << "age: " << obj.age << endl;
}

int main () {

    Data data;
    data.setData();
    displayData(data);

    return 0;
}