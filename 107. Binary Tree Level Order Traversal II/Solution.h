#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <queue>
#include <algorithm>

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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> answer;
        queue<TreeNode*> que;
        if (root!=NULL) que.push(root);
        
        while(!que.empty()) {
            int size = que.size();
            vector<int> level_element;
            while(size--) {
                TreeNode* node = que.front();
                que.pop();

                level_element.push_back(node->val);
                if (node->left) que.push(node->left);
                if (node->right) que.push(node->right);
            }
            answer.push_back(level_element);
        }
        reverse(answer.begin(), answer.end());
        return answer;
    }
};

#endif