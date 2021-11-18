#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int main_arr_size;
    int number_queries;
    cin >> main_arr_size;
    cin >> number_queries;
    vector<int> main_arr[main_arr_size];
    for (int i = 0; i < main_arr_size; i++) {
        vector<int> variable_arr;
        int variable_arr_size;
        cin >> variable_arr_size;
        for (int j = 0; i < variable_arr_size; i++) {
            int element;
            cin >> element;
            variable_arr.push_back(element);
        }
        main_arr[i] = variable_arr;
    }
    vector<int> output_result;
    for (int k = 0; k < number_queries; k++) {
        int x, y;
        cin >> x;
        cin >> y;
        output_result.push_back(main_arr[x][y]);
    }
    for (int l = 0; l < output_result.size(); l++) {
        cout << output_result[l] << "\n";
    }
        
    return 0;
}