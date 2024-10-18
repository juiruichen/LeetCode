#include <iostream>
#include "Solution.h"

int main() {

    // TODO: Case 1
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);

    // TODO: Case 2
    // TreeNode* root = new TreeNode(1);
    // root->left = new TreeNode(0);
    // root->right = new TreeNode(48);
    // root->right->left = new TreeNode(12);
    // root->right->right = new TreeNode(49);

    // TODO: Run
    Solution solution;
    int answer = solution.getMinimumDifference(root);
    std::cout << answer << std::endl;

    return 0;
}