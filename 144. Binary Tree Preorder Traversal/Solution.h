#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <stack>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(): val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right): val(x), left(left), right(right) {}
};

// TODO: For Recursion
// class Solution {
// public:
//     vector<int> preorderTraversal(TreeNode* root) {
//         vector<int> answer;
//         if (root == NULL) return answer;

//         vector<int> left_vec = preorderTraversal(root->left);
//         vector<int> right_vec = preorderTraversal(root->right);

//         answer.push_back(root->val);
//         answer.insert(answer.end(), left_vec.begin(), left_vec.end());
//         answer.insert(answer.end(), right_vec.begin(), right_vec.end());

//         return answer;
//     }
// };

// TODO: For Iteration
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> answer;
        if (root == NULL) return answer;

        stack<TreeNode*> st;
        st.push(root);

        while(!st.empty()) {
            TreeNode* node = st.top();
            st.pop();

            answer.push_back(node->val);
            if(node->right) st.push(node->right);
            if(node->left) st.push(node->left);
        }

        return answer;
    }
};

#endif