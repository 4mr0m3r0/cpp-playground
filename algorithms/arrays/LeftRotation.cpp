#include <iostream>
#include <vector>
using namespace std;

class LeftRotation {
public:
    // Big O notation.
    // Time O(n)
    vector<int> rotLeft(vector<int> a, int d) {
        vector<int> rotation(a.size(), 0);
        for (int i = 0; i < a.size(); i++) {
            long pos_with_rotation = i - d;
            if (pos_with_rotation < 0) {
                long in_vector_pos = a.size() + pos_with_rotation;
                rotation[in_vector_pos] = a[i];
            } else {
                rotation[pos_with_rotation] = a[i];
            }
        }
        return rotation;
    }
};
