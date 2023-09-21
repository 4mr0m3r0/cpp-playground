#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    stringstream ss(str);
    vector<int> numbers;
    int current_number;
    char ch;
    while (ss >> current_number) {
        numbers.push_back(current_number);
        ss >> ch;
    }
    return numbers;
}

int stringstreams_main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
