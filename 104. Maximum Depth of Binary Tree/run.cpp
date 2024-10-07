#include <iostream>
#include "Solution.h"

int main() {

    // TODO: Case 1
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    // TODO: Case 2
    // TreeNode* root = new TreeNode(1);
    // root->right = new TreeNode(2);

    // TODO: Run
    Solution solution;
    int answer = solution.maxDepth(root);

    std::cout << answer << std::endl;
    return 0;
}