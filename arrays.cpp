#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int arrays_main() {
    int arr_len;
    cin >> arr_len;
    int integers[arr_len];
    for (int i = 0; i < arr_len; i++) {
        cin >> integers[i];
    }
    for (int i = arr_len - 1; i >= 0; i--) {
        cout << integers[i] << ' ';
    }
    return 0;
}
