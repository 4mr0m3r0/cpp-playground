#include <iostream>
#include <vector>
using namespace std;

class ValidateSubsequence {
public:
    // Big O Notation. Time O(n) | Space O(1)
    bool IsValidSubsequence(vector<int> array, vector<int> sequence) {
        bool valid = false;
        int j = 0;
        for (int i = 0; i < sequence.size(); i++) {
            if (j >= array.size()) {
                return false;
            }
            while (j < array.size()) {
                if (sequence[i] == array[j]) {
                    valid = true;
                    j++;
                    break;
                } else {
                    valid = false;
                    j++;
                }
            }
        }
        return valid;
    }
    
    // Big O Notation. Time O(n) | Space O(1)
    bool IsValidSubsequenceSecondVariant(vector<int> array, vector<int> sequence) {
        int j = 0;
        for (int i = 0; i < array.size(); i++) {
            if (array[i] == sequence[j]) {
                if (j == sequence.size() - 1) {
                    return true;
                } else {
                    j++;
                }
            }
        }
        return false;
    }
    
    // Big O Notation. Time O(n) | Space O(1)
    bool IsValidSubsequenceThirdVariant(vector<int> array, vector<int> sequence) {
        int i = 0;
        int j = 0;
        while (i < array.size() && j < sequence.size()) {
            if (array[i] == sequence[j]) {
                j++;
            }
            i++;
        }
        return j == sequence.size();
    }
};
