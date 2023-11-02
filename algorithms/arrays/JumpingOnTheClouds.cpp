#include <iostream>
#include <vector>
using namespace std;

class JumpingOnTheClouds {
public:
    int jumpingOnCloudsON(vector<int> c) {
        int i = 0;
        int shortest_jumps = 0;
        int no_jumps = 0;
        while (i < c.size() - 1) {
            if (i < (c.size() - 2) && c[i + 2] == 0) {
                i += 2;
                shortest_jumps++;
            } else if (i < (c.size() - 1) && c[i + 1] == 0) {
                i++;
                shortest_jumps++;
            } else {
                i++;
                no_jumps++;
            }
            if (no_jumps == 2) {
                break;
            }
        }
        return shortest_jumps;
    }
};
