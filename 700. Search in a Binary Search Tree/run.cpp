#include <iostream>
#include <queue>
#include "Solution.h"
using namespace std;

void printTree(TreeNode* root) {
    if (!root) {
        cout << "[]\n";
        return;
    }
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
        cout << "\n";
    }
}

int main() {

    // TODO: Case 1
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    int val = 2;

    // TODO: Case 2
    // TreeNode* root = new TreeNode(4);
    // root->left = new TreeNode(2);
    // root->right = new TreeNode(7);
    // root->left->left = new TreeNode(1);
    // root->left->right = new TreeNode(3);
    // int val = 5;

    // TODO: Run
    Solution solution;
    TreeNode* answer = solution.searchBST(root, val);
    printTree(answer);


    return 0;
}