#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

class TwoNumberSum {
public:
    vector<int> twoNumberSumOn2() {
        vector<int> array{3, 5, -4, 8, 11, 1, -1, 6};
        int target_sum = 10;
        vector<int> result;
        for (int i = 0; i < array.size() - 2; i++) {
            for (int j = i + 1; j < array.size() - 1; j++) {
                if (array[i] + array[j] == target_sum) {
                    result = {array[i], array[j]};
                    return result;
                }
            }
        }
        return result;
    }
};
