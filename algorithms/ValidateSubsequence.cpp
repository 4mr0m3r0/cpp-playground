#include <iostream>
#include <vector>
using namespace std;

class ValidateSubsequence {
public:
    bool isValidSubsequence(vector<int> array, vector<int> sequence) {
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
};
