#include <iostream>
#include <vector>
#include <queue>
#include "Solution.h"
using namespace std;

void printTree(TreeNode* root) {
    if (root == nullptr) return;
    queue<TreeNode*> que;
    que.push(root);

    while(!que.empty()) {
        int size = que.size();
        while(size--) {
            TreeNode* node = que.front();
            que.pop();
            cout << node->val << " ";
            if (node->left) que.push(node->left);
            if (node->right) que.push(node->right);
        }
        cout << endl;
    }
}

int main() {

    // TODO: Case 1
    vector<int> nums = {3, 2, 1, 6, 0, 5};

    // TODO: Case 2
    // vector<int> nums = {3, 2, 1};

    // TODO: Run
    Solution solution;
    TreeNode* root = solution.constructMaximumBinaryTree(nums);
    printTree(root);

    return 0;
}