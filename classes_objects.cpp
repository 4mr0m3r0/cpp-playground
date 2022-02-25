#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Student {
private:
    int scores[5];
public:
    void input() {
        for (int i = 0; i < 5; i++) {
            cin >> scores[i];
        }
    }
    int calculateTotalScore() {
        int totalSum = 0;
        for (int i = 0; i < 5; i++) {
            totalSum += scores[i];
        }
        return totalSum;
    }
};


int main() {
    int number_of_students;
    cin >> number_of_students;
    Student students[number_of_students];
    for (int i = 0; i < number_of_students; i++) {
        Student student;
        student.input();
        students[i] = student;
    }
    int higher = 0;
    for (int j = 1; j < number_of_students; j++) {
        if (students[0].calculateTotalScore() < students[j].calculateTotalScore()) {
            higher++;
        }
    }
    cout << higher << endl;
    return 0;
}
