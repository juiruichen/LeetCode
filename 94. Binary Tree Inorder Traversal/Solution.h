#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(): val(0), left(nullptr), right(nullptr) {};
    TreeNode(int x): val(x), left(nullptr), right(nullptr) {};
    TreeNode(int x, TreeNode* left, TreeNode* right): val(x), left(left), right(right) {};
};

// TODO: For Recursion
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> answer;
        if (root == NULL) return answer;
        
        vector<int> left_vec = inorderTraversal(root->left);
        vector<int> right_vec = inorderTraversal(root->right);

        answer.insert(answer.end(), left_vec.begin(), left_vec.end());
        answer.push_back(root->val);
        answer.insert(answer.end(), right_vec.begin(), right_vec.end());

        return answer;
    }
};

// TODO: For Iteration
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> answer;
        TreeNode* cur = root;
        stack<TreeNode*> st;

        while(cur != NULL || !st.empty()) {
            if (cur != NULL) {
                st.push(cur);
                cur = cur->left;
            } else {
                cur = st.top();
                st.pop();
                answer.push_back(cur->val);
                cur = cur->right;
            }
        }

        return answer;
    }
};

#endif