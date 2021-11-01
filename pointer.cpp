#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void update(int *a, int *b) {
    int temp_a = *a + *b;
    int temp_b = abs(*a - *b);
    *a = temp_a;
    *b = temp_b;
}

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    update(&a, &b);
    cout << a << endl;
    cout << b << endl;
    return 0;
}
