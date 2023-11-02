#include <vector>
using namespace std;

class TransposeMatrix {
public:
    vector<vector<int>> TransposeMatrixON2(vector<vector<int>> matrix) {
        vector<vector<int>> transpose(matrix[0].size(), vector<int>(matrix.size(), 0));
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                transpose[j][i] = matrix[i][j];
            }
        }
        return transpose;
    }
};
