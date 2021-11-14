#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selection_sort(int numbers[], int size) {
    int i, j, k;
    for (i = 0; i < size - 1; i++) {
        for (j = k = i; j < size; j++) {
            if (numbers[j] < numbers[k]) {
                k = j;
            }
        }
        swap(&numbers[i], &numbers[k]);
    }
}

int main() {
    int numbers[] = { 8, 9, 3, 7, 1, 0, 2, 4, 12, 13, 10 };
    int ordered_numbers[] = { 0, 1, 2, 3, 4, 7, 8, 9, 10, 12, 13 };
    int size = 11;
    selection_sort(numbers, size);
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    return 0;
}
