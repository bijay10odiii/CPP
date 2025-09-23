#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <tuple>

using namespace std;

int main() {
    string name = "Bijay";
    vector<int> marks{85, 90, 78};
    map<string, int> ageMap;
    ageMap["Alice"] = 25;
    ageMap["Bob"] = 30;

    tuple<string, int, bool> person = {"Bijay", 20, true};

    cout << "Name: " << name << endl;
    cout << ">First Score: " << marks[0] << endl; // fixed here
    cout << ">Bob's Age: " << ageMap["Bob"] << endl;
    cout << "Tuple name: " << get<0>(person) << endl;

    return 0;
} // <-- closing brace added

