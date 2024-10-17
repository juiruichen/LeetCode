#ifndef SOLUTION_H
#define SOLUTION_H

#include <queue>
#include <algorithm>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(): val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right): val(x), left(left), right(right) {}
};

// Breadth First Search
// class Solution {
// public:
//     int minDepth(TreeNode* root) {
//         int answer = 0;
//         std::queue<TreeNode*> que;
//         if (root) que.push(root);

//         while(!que.empty()) {
//             int size = que.size();
//             answer++;

//             while(size--) {
//                 TreeNode* node = que.front();
//                 que.pop();
                
//                 if (!node->left && !node->right) return answer;
//                 if (node->left) que.push(node->left);
//                 if (node->right) que.push(node->right);
//             }       
//         }

//         return answer;
//     }
// };

// Depth First Search - Postorder Traversal
class Solution {
public:
    int getDepth(TreeNode* root) {
        if (root == NULL) return 0;

        int left_depth = getDepth(root->left);
        int right_depth = getDepth(root->right);

        if (root->left == NULL && root->right != NULL) return 1 + right_depth;
        if (root->left != NULL && root->right == NULL) return 1 + left_depth;

        return 1 + std::min(left_depth, right_depth);
    }

    int minDepth(TreeNode* root) {
        return getDepth(root);
    }
};

#endif