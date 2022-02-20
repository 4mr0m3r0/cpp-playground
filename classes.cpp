#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

class Student {
private:
    int age;
    string first_name;
    string last_name;
    int standard;
public:
    void SetAge(int a) {
        age = a;
    }
    int GetAge() {
        return age;
    }
    void SetFirstName(string fn) {
        first_name = fn;
    }
    string GetFirstName() {
        return first_name;
    }
    void SetLastName(string ln) {
        last_name = ln;
    }
    string GetLastName() {
        return last_name;
    }
    void SetStandard(int s) {
        standard = s;
    }
    int GetStandard() {
        return standard;
    }
    
    string ToString() {
        stringstream ss;
        ss << age << "," << first_name << "," << last_name << "," << standard << endl;
        return ss.str();
    }
};


int main() {
    Student student;
    int age, standard;
    string first_name, last_name;
    cin >> age;
    cin >> first_name;
    cin >> last_name;
    cin >> standard;
    student.SetAge(age);
    student.SetFirstName(first_name);
    student.SetLastName(last_name);
    student.SetStandard(standard);
    
    cout << student.GetAge() << endl;
    cout << student.GetLastName() << ", " << student.GetFirstName() << endl;
    cout << student.GetStandard() << endl;
    cout << endl;
    cout << student.ToString() << endl;
    
    return 0;
}
