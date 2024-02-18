#include <iostream>
#include <map>
#include <string>
using namespace std;

int main () {

    // declare and initial a map -->
    map<string, int> phoneMap;
    phoneMap["Mizan"] = 54586;
    phoneMap["Badhon"] = 89523;
    phoneMap["Niloy"] = 42658;
    phoneMap["Santo"] = 369855;

    // insert some key, value pair in map -->
    phoneMap.insert({{"Shakib", 2312321}, {"Mujahid", 6586532}});

    // make iterator -->
    map<string, int>::iterator iter;

    // iterate through map -->
    for (iter = phoneMap.begin(); iter != phoneMap.end(); iter++){
        cout << (*iter).first << " " << (*iter).second << endl;
    }

    // map size -->
    cout << "phoneMap size is " << phoneMap.size() << endl;
    // is the map empty? -->
    cout << "Is the map empty? --> " << phoneMap.empty() << endl;
    // max size of a map -->
    cout << "Max size of a map is " << phoneMap.max_size() << endl;

    return 0;
}