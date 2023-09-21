#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int fib_recursive(int number) {
    if (number <= 1) return number;
    return fib_recursive(number - 2) + fib_recursive(number - 1);
}

int fib_recursive_main() {
    int number = 13;
    int result = fib_recursive(number);
    cout << "result: " << result << endl;
    return 0;
}
