#include <iostream>
#include <map>
#include <string>
using namespace std;

int main () {
    map<string, int> phoneMap;
    phoneMap["Mizan"] = 54586;
    phoneMap["Badhon"] = 89523;
    phoneMap["Niloy"] = 42658;
    phoneMap["Santo"] = 369855;

    map<string, int>::iterator iter;

    for (iter = phoneMap.begin(); iter != phoneMap.end(); iter++){
        cout << (*iter).first << " " << (*iter).second << endl;
    }

        return 0;
}