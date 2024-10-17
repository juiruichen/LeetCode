#include <iostream>
#include <vector>
#include <queue>
#include "Solution.h"
using namespace std;

void printTree(TreeNode* root) {
    if (root == nullptr) return;

    queue<TreeNode*> que;
    if (root) que.push(root);

    while(!que.empty()) {
        int size = que.size();
        // vector<int> level_element;

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
    vector<int> inorder = {9, 3, 15, 20, 7};
    vector<int> postorder = {9, 15, 7, 20, 3};

    // TODO: Case 2
    // vector<int> inorder = {-1};
    // vector<int> postorder = {-1};

    // TODO: Run
    Solution solution;
    TreeNode* root = solution.buildTree(inorder, postorder);
    printTree(root);
    return 0;
}