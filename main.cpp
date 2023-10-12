#include <iostream>
#include <vector>
#include "algorithms/TransposeMatrix.cpp"
using namespace std;

int main(int argc, const char * argv[]) {
    TransposeMatrix transpose_matrix;
    vector<vector<int>> input{vector<int>{1, 2, 3}, vector<int>{4, 5, 6}, vector<int>{7, 8, 9}};
    vector<vector<int>> result = transpose_matrix.TransposeMatrixON2(input);
    for (auto row : result) {
        cout << "[ ";
        for (auto column : row) {
            cout << column << " ";
        }
        cout << "]" << endl;
    }
    return 0;
}
