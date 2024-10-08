#ifndef SOLUTION_H
#define SOLUTION_H

#include <queue>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(): val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right): val(x), left(left), right(right) {}
};

class Solution {
public:
    int maxDepth(TreeNode* root) {
        int answer = 0;
        std::queue<TreeNode*> que;
        if (root) que.push(root);

        while(!que.empty()) {
            int size = que.size();
            answer++;

            while(size--) {
                TreeNode* node = que.front();
                que.pop();
                if (node->left) que.push(node->left);
                if (node->right) que.push(node->right);
            }
        }

        return answer;
    }
};

#endif