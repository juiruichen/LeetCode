#include <iostream>
#include <queue>
#include "Solution.h"

void printTree(TreeNode* root) {
    if (!root) {
        std::cout << "[]" << std::endl;
        return;
    }
    
    std::queue<TreeNode*> q;
    q.push(root);
    
    std::cout << "[";
    while (!q.empty()) {
        int size = q.size();
        while(size--) {
            TreeNode* node = q.front();
            q.pop();
            if (node != root) std::cout << ", ";
            std::cout << node->val;
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
    }
    std::cout << "]" << std::endl;
}


int main() {

    // TODO: Case 1
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(9);

    // TODO: Case 2
    // TreeNode* root = new TreeNode(2);
    // root->left = new TreeNode(1);
    // root->right = new TreeNode(3);

    // TODO: Run
    Solution solution;
    root = solution.invertTree(root);

    printTree(root);


    return 0;
}