#include <iostream>
#include <vector>
#include "algorithms/ValidateSubsequence.cpp"
using namespace std;

int main(int argc, const char * argv[]) {
    ValidateSubsequence validate_subsequence;
    vector<int> array{5, 1, 22, 25, 6, -1, 8, 10};
    vector<int> sequence{1, 6, -1, 10};
    bool is_valid = validate_subsequence.isValidSubsequence(array, sequence);
    cout << "is valid: " << is_valid << endl;
    return 0;
}
