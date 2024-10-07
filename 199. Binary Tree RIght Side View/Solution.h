#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <queue>

using namespace std;

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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> answer;
        queue<TreeNode*> que;
        if (root) que.push(root);

        while (!que.empty()) {
            int size = que.size();
            while (size) {
                TreeNode* node = que.front();
                que.pop();

                if (size == 1) answer.push_back(node->val);
                if (node->left) que.push(node->left);
                if (node->right) que.push(node->right);
                size--;
            }
        }

        return answer;
    }
};

#endif