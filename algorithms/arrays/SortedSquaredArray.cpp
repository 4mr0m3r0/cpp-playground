#include <iostream>
#include <vector>
using namespace std;

class SortedSquaredArray {
public:
    // Big O Notation. Time O(n log n) | Space O(n)
    vector<int> SortedSquaredArrayONLogN(vector<int> array) {
        vector<int> squared_array;
        for (int i = 0; i < array.size(); i++) {
            squared_array.push_back(array[i] * array[i]);
        }
        sort(squared_array.begin(), squared_array.end());
        return squared_array;
    }
    
    // Big O Notation. Time O(n) | Space O(n)
    vector<int> SortedSquaredArrayON(vector<int> array) {
        vector<int> squared(array.size(), 0);
        int i = 0;
        long j = array.size() - 1;
        for (long k = squared.size() - 1; k >= 0; k--) {
            int left = array[i] * array[i];
            int right = array[j] * array[j];
            if (left > right) {
                squared[k] = left;
                i++;
            } else {
                squared[k] = right;
                j--;
            }
        }
        return squared;
    }
};
