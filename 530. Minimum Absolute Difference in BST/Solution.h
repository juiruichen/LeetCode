#ifndef SOLUTION_H
#define SOLUTION_H

#include <climits>

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
    int answer = INT_MAX;
    TreeNode* pre = nullptr;
    void traversal(TreeNode* cur) {
        if (cur == nullptr) return;

        traversal(cur->left);
        if (pre != nullptr && cur->val-pre->val < answer) answer = cur->val - pre->val;
        pre = cur;
        traversal(cur->right);
    }
public:
    int getMinimumDifference(TreeNode* root) {
        traversal(root);
        return answer;
    }
};

#endif