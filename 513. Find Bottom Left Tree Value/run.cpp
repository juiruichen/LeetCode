#include <iostream>
#include "Solution.h"

int main() {

    // TODO: Case 1
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);

    // TODO: Case 2
    // TreeNode* root = new TreeNode(1);
    // root->left = new TreeNode(2);
    // root->right = new TreeNode(3);
    // root->left->left = new TreeNode(4);
    // root->right->left = new TreeNode(5);
    // root->right->right = new TreeNode(6);
    // root->right->left->left = new TreeNode(7);

    // TODO: Run
    Solution solution;
    auto answer = solution.findBottomLeftValue(root);
    std::cout << answer << std::endl;

    return 0;
}