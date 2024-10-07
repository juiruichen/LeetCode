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

    // TODO: Case 3
    // TreeNode* root = nullptr;

    // TODO: Run
    Solution solution;
    auto answer = solution.levelOrder(root);

    std::cout << "[";
    for (int i=0; i<answer.size(); i++) {
        if (i > 0) std::cout << ", ";
        std::cout << "[";
        for (int j=0; j<answer[i].size(); j++) {
            if (j > 0) std::cout << ", ";
            std::cout << answer[i][j];
        }
        std::cout << "]";
    }
    std::cout << "]\n";

    return 0;
}