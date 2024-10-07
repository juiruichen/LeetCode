#include <iostream>
#include "Solution.h"

int main() {

    // TODO: Case 1
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(4);

    // TODO: Case 2
    // TreeNode* root = new TreeNode(1);
    // root->right = new TreeNode(3);

    // TODO: Case 3
    // TreeNode* root = nullptr;

    // TODO: Run
    Solution solution;
    auto answer = solution.rightSideView(root);

    std::cout << "[";
    for(int i=0; i<answer.size(); i++) {
       if (i > 0) std::cout << ", ";
       std::cout << answer[i]; 
    }
    std::cout << "]\n";

    return 0;
}