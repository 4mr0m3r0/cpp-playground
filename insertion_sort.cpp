#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void insertion_sort(int numbers[], int size) {
    int i, j, x;
    for (i = 1; i < size; i++) {
        j = i - 1;
        x = numbers[i];
        while (j > -1 && numbers[j] > x) {
            numbers[j + 1] = numbers[j];
            j--;
        }
        numbers[j + 1] = x;
    }
}

int main() {
    int numbers[] = { 8, 9, 3, 7, 1, 0, 2, 4, 12, 13, 10 };
    int ordered_numbers[] = { 0, 1, 2, 3, 4, 7, 8, 9, 10, 12, 13 };
    int size = 11;
    insertion_sort(numbers, size);
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    return 0;
}
