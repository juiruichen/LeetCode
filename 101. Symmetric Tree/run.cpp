#include <iostream>
#include "Solution.h"

int main() {

    // TODO: Case 1
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(3);

    // TODO: Case 2
    // TreeNode* root = new TreeNode(1);
    // root->left = new TreeNode(2);
    // root->right = new TreeNode(2);
    // root->left->right = new TreeNode(3);
    // root->right->right = new TreeNode(3);

    // TODO: Run
    Solution solution;
    bool answer = solution.isSymmetric(root);

    if (answer) std::cout << "is symmetric" << std::endl;
    else std::cout << "not symmetric" << std::endl;

    return 0;
}