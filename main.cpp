#include <iostream>
#include <vector>
#include "algorithms/NonConstructibleChange.cpp"
using namespace std;

int main(int argc, const char * argv[]) {
    NonConstructibleChange non_constructible_change;
    vector<int> coins{5, 7, 1, 1, 2, 3, 22};
    int minimum = non_constructible_change.NonConstructibleChangeONLogN(coins);
    cout << "Minimum Change: " << minimum << endl;
    return 0;
}
