#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <queue>
#include <numeric>

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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> answer;
        queue<TreeNode*> que;
        if (root) que.push(root);

        while (!que.empty()) {
            int size = que.size();
            double level_sum = 0;
            
            for(int i=0; i<size; i++) {
                TreeNode* node = que.front();
                que.pop();
                level_sum += node->val;
                if (node->left) que.push(node->left);
                if (node->right) que.push(node->right);
            }

            answer.push_back(level_sum/size);
        }

        return answer;
    }
};

#endif