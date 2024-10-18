#include <iostream>
#include "Solution.h"

int main() {

    // TODO: Case 1
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(2);

    // TODO: Case 2
    // TreeNode* root = new TreeNode();

    // TODO: Run
    Solution solution;
    auto answer = solution.findMode(root);

    std::cout << "[";
    for(int i=0; i<answer.size(); i++) {
        if (i > 1) std::cout << ", ";
        std::cout << answer[i];
    }
    std::cout << "]\n";

    return 0;
}