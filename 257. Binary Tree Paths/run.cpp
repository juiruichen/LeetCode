#include <iostream>
#include "Solution.h"

#include <vector>
#include <string>

int main() {

    // TODO: Case 1
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(5);

    // TODO: Case 2
    // TreeNode* root = new TreeNode(1);

    // TODO: Run
    Solution solution;
    auto answer = solution.binaryTreePaths(root);

    std::cout << "[\"";
    for (int i=0; i<answer.size(); i++) {
        if (i>0) std::cout << "\", \"";
        std::cout << answer[i];
    }
    std::cout << "\"]" << std::endl;

    return 0;
}