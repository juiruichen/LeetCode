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

class Solution {
private:
    int max_depth = -1;
    int answer;
    void traversal(TreeNode* node, int depth) {
        if (node->left == nullptr && node->right == nullptr) {
            if (depth > max_depth) {
                max_depth = depth;
                answer = node->val;
            }
            return;
        }

        if (node->left) traversal(node->left, depth+1);
        if (node->right) traversal(node->right, depth+1);
    }
public:
    int findBottomLeftValue(TreeNode* root) {
        if (root == nullptr) return -1;
        answer = root->val;
        traversal(root, 0);
        return answer;
    }
};

#endif