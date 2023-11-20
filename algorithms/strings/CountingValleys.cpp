#include <iostream>

using namespace std;

class CountingValleys {
public:
    int CountingValleysON(int steps, string path) {
        int valleys = 0;
        int seaLevel = 0;
        bool inside_a_valley = false;
        for (int i = 0; i < steps; i++) {
            if (path[i] == 'D') {
                seaLevel--;
            } else if (path[i] == 'U') {
                seaLevel++;
            }
            if (seaLevel < 0) {
                inside_a_valley = true;
            } else if (seaLevel == 0 && inside_a_valley) {
                inside_a_valley = false;
                valleys++;
            }
        }
        return valleys;
    }
};
