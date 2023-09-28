#include <iostream>
#include <vector>
#include "algorithms/SortedSquaredArray.cpp"
using namespace std;

int main(int argc, const char * argv[]) {
    SortedSquaredArray sorted_squared_array;
    vector<int> array{-50, -13, -2, -1, 0, 0, 1, 1, 2, 3, 19, 20};
    vector<int> result = sorted_squared_array.SortedSquaredArrayON(array);
    cout << "[";
    for (auto squared : result) {
        cout << " " << squared;
    }
    cout << " ]" << endl;
    return 0;
}
