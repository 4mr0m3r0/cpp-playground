#include <iostream>
#include <vector>
#include "algorithms/TwoNumberSum.cpp"
using namespace std;

int main(int argc, const char * argv[]) {
    TwoNumberSum twoNumberSum;
    vector<int> result = twoNumberSum.twoNumberSumOn2();
    for (auto element : result) {
        cout << element << " ";
    }
    cout << endl;
    return 0;
}
