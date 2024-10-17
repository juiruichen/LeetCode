#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(): val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right): val(x), left(left), right(right) {}
};

class Solution {
private:
    TreeNode* traversal(std::vector<int>& inorder, std::vector<int>& postorder) {
        if (postorder.size() == 0) return nullptr; // 有可能只有左子樹沒有右子樹 或者沒有左子樹只有右子樹

        int root_val = postorder[postorder.size() - 1];
        TreeNode* root = new TreeNode(root_val);

        if (postorder.size() == 1) return root;

        int delimiterIndex;
        for (delimiterIndex=0; delimiterIndex<inorder.size(); delimiterIndex++) {
            if (inorder[delimiterIndex] == root_val) break;
        }

        std::vector<int> left_inorder(inorder.begin(), inorder.begin()+delimiterIndex);
        std::vector<int> right_inorder(inorder.begin()+delimiterIndex+1, inorder.end());

        postorder.resize(postorder.size()-1);
        std::vector<int> left_postorder(postorder.begin(), postorder.begin()+left_inorder.size());
        std::vector<int> right_postorder(postorder.begin()+left_inorder.size(), postorder.end());

        root->left = traversal(left_inorder, left_postorder);
        root->right = traversal(right_inorder, right_postorder);

        return root;
    }
public:
    TreeNode* buildTree(std::vector<int>& inorder, std::vector<int>& postorder) {
        if (inorder.size() == 0 || postorder.size() == 0) return nullptr;
        return traversal(inorder, postorder);
    }
};

#endif