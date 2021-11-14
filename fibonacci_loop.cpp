#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int fib(int number) {
    int n0 = 0, n1 = 1, s, i;
    if (number <= 1) return number;
    for (i = 2; i <= number; i++) {
        s = n0 + n1;
        n0 = n1;
        n1 = s;
        cout << s << " ";
    }
    return s;
}

int main() {
    int number = 13;
    int result = fib(number);
    cout << endl;
    cout << "result: " << result << endl;
    return 0;
}
