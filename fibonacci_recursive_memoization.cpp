#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int mem[13] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };

int fib_memoization(int number) {
    if (number <= 1) {
        mem[number] = number;
        return number;
    } else {
        if (mem[number - 2] == -1) mem[number - 2] = fib_memoization(number - 2);
        if (mem[number - 1] == -1) mem[number - 1] = fib_memoization(number - 1);
        return mem[number - 2] + mem[number - 1];
    }
}

int fib_memoization_main() {
    int number = 13;
    int result = fib_memoization(number);
    cout << "result: " << result << endl;
    return 0;
}
