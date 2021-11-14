#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void swap(int *i, int *j) {
    int temp = *i;
    *i = *j;
    *j = temp;
}

void bubble_sort(int numbers[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int ordered = 0;
        for (int j = 0; j < size - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                swap(&numbers[j], &numbers[j + 1]);
                ordered = 1;
            }
        }
        if (ordered == 0) {
            break;
        }
    }
}

int main() {
    int numbers[] = { 8, 9, 3, 7, 1, 0, 2, 4, 12, 13, 10 };
    int ordered_numbers[] = { 0, 1, 2, 3, 4, 7, 8, 9, 10, 12, 13 };
    int size = 11;
    bubble_sort(numbers, size);
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    return 0;
}
