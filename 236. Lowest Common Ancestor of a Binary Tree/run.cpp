#include <iostream>
#include "Solution.h"

int main() {

    // TODO: Case 1
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(5);
    root->right = new TreeNode(1);
    root->left->left = new TreeNode(6);
    root->left->right = new TreeNode(2);
    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(8);
    root->left->right->left = new TreeNode(7);
    root->left->right->right = new TreeNode(4);
    TreeNode* p = root->left;
    TreeNode* q = root->right; 

    // TODO: Case 2
    // TreeNode* root = new TreeNode(3);
    // root->left = new TreeNode(5);
    // root->right = new TreeNode(1);
    // root->left->left = new TreeNode(6);
    // root->left->right = new TreeNode(2);
    // root->right->left = new TreeNode(0);
    // root->right->right = new TreeNode(8);
    // root->left->right->left = new TreeNode(7);
    // root->left->right->right = new TreeNode(4);
    // TreeNode* p = root->left;
    // TreeNode* q = root->left->right->right;

    // TODO: Case 3
    // TreeNode* root = new TreeNode(1);
    // root->left = new TreeNode(2);
    // TreeNode* p = root;
    // TreeNode* q = root->left;

    // TODO: Run
    Solution solution;
    auto answer = solution.lowestCommonAncestor(root, p, q);

    std::cout << answer->val << std::endl;

    return 0;
}