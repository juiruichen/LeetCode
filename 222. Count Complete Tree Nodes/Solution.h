#ifndef SOLUTION_H
#define SOLUTION_H

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(): val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right): val(x), left(left), right(right) {}
};

// Depth First Search - Postorder Traversal
// For all binary tree
// class Solution {
// private:
//     int getNodesNum(TreeNode* cur) {
//         if (cur == nullptr) return 0;
        
//         int leftNum = getNodesNum(cur->left);
//         int rightNum = getNodesNum(cur->right);
//         int treeNum = 1 + leftNum + rightNum;
//         return treeNum;
//     }

// public:
//     int countNodes(TreeNode* root) {
//         return getNodesNum(root);
//     }
// };

// For complete binary tree
class Solution {
private:

public:
    int countNodes(TreeNode* root) {

        // termination condition
        if (root == nullptr) return 0;

        TreeNode* left = root->left;
        TreeNode* right = root->right;
        int left_depth = 0;
        int right_depth = 0;
        while(left) {left = left->left; left_depth++;}
        while(right) {right = right->right; right_depth++;}
        if (left_depth == right_depth) return (2 << left_depth) - 1;

        // recursively count nodes in the left and right subtrees
        int left_num = countNodes(root->left);
        int right_num = countNodes(root->right);
        return 1 + left_num + right_num;
    }
};

#endif