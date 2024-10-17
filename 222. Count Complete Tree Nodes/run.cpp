#include <iostream>
#include "Solution.h"

int main() {

    // TODO: Case 1
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);

    // TODO: Case 2
    // TreeNode* root = nullptr;

    // TODO: Case 3
    // TreeNode* root = new TreeNode(1);

    // TODO: Run
    Solution solution;
    int answer = solution.countNodes(root);
    std::cout << answer << std::endl;

    return 0;
}