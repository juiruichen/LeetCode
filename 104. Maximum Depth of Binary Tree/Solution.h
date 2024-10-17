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
//     int maxDepth(TreeNode* root) {
//         int answer = 0;
//         std::queue<TreeNode*> que;
//         if (root) que.push(root);

//         while(!que.empty()) {
//             int size = que.size();
//             answer++;

//             while(size--) {
//                 TreeNode* node = que.front();
//                 que.pop();
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
    int getDepth(TreeNode* node) {
        if (node==NULL) return 0;
        
        int left_height = getDepth(node->left);
        int right_height = getDepth(node->right);
        int height = 1 + std::max(left_height, right_height);
        return height;
    }

    int maxDepth(TreeNode* root) {
        return getDepth(root);
    }
};

#endif