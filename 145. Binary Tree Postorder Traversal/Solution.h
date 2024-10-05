#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <stack>
#include <algorithm>

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
// class Solution {
// public:
//     vector<int> postorderTraversal(TreeNode* root) {
//         vector<int> answer;
//         if (root == NULL) return answer;

//         vector<int> left_vec = postorderTraversal(root->left);
//         vector<int> right_vec = postorderTraversal(root->right);

//         answer.insert(answer.end(), left_vec.begin(), left_vec.end());
//         answer.insert(answer.end(), right_vec.begin(), right_vec.end());
//         answer.push_back(root->val);

//         return answer;
//     }
// };

// TODO: For Iteration
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> answer;
        if (root == NULL) return answer;

        stack<TreeNode*> st;
        st.push(root);

        while(!st.empty()) {
            TreeNode* node = st.top();
            st.pop();

            answer.push_back(node->val);
            if (node->left) st.push(node->left);
            if (node->right) st.push(node->right);
        }

        reverse(answer.begin(), answer.end());
        return answer;
    }
};

#endif