#include <iostream>
#include "Solution.h"

int main() {

    // TODO: Case 1
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    // TODO: Case 2
    // TreeNode* root = new TreeNode(1);
    // root->left = new TreeNode(2);
    // root->right = new TreeNode(3);
    
    // root->left->left = new TreeNode(4);
    // root->left->right = new TreeNode(5);
    
    // root->left->right->left = new TreeNode(6);
    // root->left->right->right = new TreeNode(7);

    // root->right->right = new TreeNode(8);
    // root->right->right->left = new TreeNode(9);

    // TODO: Case 3
    // TreeNode* root = NULL;

    // TODO: Case 4
    // TreeNode* root = new TreeNode(1);

    // TODO: Run
    Solution solution;
    vector<int> answer = solution.preorderTraversal(root);

    std::cout << "[";
    for (int i=0; i<answer.size(); i++) {
        if (i != answer.size()-1) {
            std::cout << answer[i] << ", ";
        } else { std::cout << answer[i]; }
    }
    std::cout << "]\n";

    return 0;
}