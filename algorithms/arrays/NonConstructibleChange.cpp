#include <vector>
using namespace std;

class NonConstructibleChange {
public:
    // Big O Notation. Time O(n log n) | Space O(1)
    int NonConstructibleChangeONLogN(vector<int> coins) {
        sort(coins.begin(), coins.end());
        int amount_change = 0;
        for (int i = 0; i < coins.size(); i++) {
            if (amount_change + 1 < coins[i]) {
                return amount_change + 1;
            }
            amount_change += coins[i];
        }
        return amount_change + 1;
    }
};

