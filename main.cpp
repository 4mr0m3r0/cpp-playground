#include <iostream>
#include <vector>
#include "algorithms/arrays/JumpingOnTheClouds.cpp"
using namespace std;

int main(int argc, const char * argv[]) {
    JumpingOnTheClouds jumping_on_the_clouds;
//    vector<int> clouds{0, 1, 0, 0, 0, 1, 0};
//    vector<int> clouds{0, 0, 1, 0, 0, 1, 0};
//    vector<int> clouds{0, 0, 0, 0, 1, 0};
//    vector<int> clouds{0, 1, 1, 1, 1, 1};
//    vector<int> clouds{0, 1, 1, 1, 1, 0};
//    vector<int> clouds{0, 1, 1, 1, 0, 0};
//    vector<int> clouds{0, 1, 0, 0, 0, 1, 1, 1, 0};
    vector<int> clouds{0, 0, 0, 1, 0, 0};
    int jumps = jumping_on_the_clouds.jumpingOnCloudsON(clouds);
    cout << "Number of Jumps = " << jumps << endl;
    return 0;
}
