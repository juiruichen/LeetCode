#include <iostream>
#include "Solution.h"

int main() {

    // TODO: Case 1
    // TreeNode* root = new TreeNode(3);
    // root->left = new TreeNode(9);
    // root->right = new TreeNode(20);
    // root->right->left = new TreeNode(15);
    // root->right->right = new TreeNode(7);

    // TODO: Case 2
    // TreeNode* root = new TreeNode(1);
    // root->left = new TreeNode(2);
    // root->right = new TreeNode(2);
    // root->left->left = new TreeNode(3);
    // root->left->right = new TreeNode(3);
    // root->left->left->left = new TreeNode(4);
    // root->left->left->right = new TreeNode(4);

    // TODO: Case 3
    TreeNode* root = nullptr;

    // TODO: Run
    Solution solution;
    bool answer = solution.isBalanced(root);
    
    if (answer) std::cout << "Is balanced." << std::endl;
    else std::cout << "Not balanced." << std::endl;

    return 0;
}