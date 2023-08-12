#include <iostream>
using namespace std;

int main () {

    // ********* if, else if and else statement *********
    int age;
    cout << "Enter your age below:" << endl;
    cin >> age;
    
    if (age < 18){
        cout << "You are still a teenager.";
    }
    else if(age == 18){
        cout << "Congrats! You are adult now." << endl;
    }
    else{
        cout << "Welcome to the party." << endl;
    }

return 0;
}