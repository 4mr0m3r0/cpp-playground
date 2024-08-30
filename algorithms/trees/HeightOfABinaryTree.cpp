
#include <iostream>
using namespace std;

class HeightOfABinaryTree
{
private:
    int CalculateHeight(HNode* tree, int height, int depth) {
        if (tree == nullptr) {
            return depth;
        }
        int heightSum = height;
        if (tree->left != nullptr) {
            heightSum = CalculateHeight(tree->left, heightSum, depth + 1);
        }
        if (tree->right != nullptr) {
            heightSum = CalculateHeight(tree->right, heightSum, depth + 1);
        }
        if (depth > heightSum) {
            return depth;
        } else {
            return heightSum;
        }
    }

public:
    int Height(HNode* root) {
        return CalculateHeight(root, 0, 0);
    }
};

class HNode {
    int data;
    HNode* left = nullptr;
    HNode* right = nullptr;
};
