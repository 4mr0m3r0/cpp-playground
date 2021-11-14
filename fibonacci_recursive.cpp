#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int fib(int number) {
    if (number <= 1) return number;
    return fib(number - 2) + fib(number - 1);
}

int main() {
    int number = 13;
    int result = fib(number);
    cout << "result: " << result << endl;
    return 0;
}
