#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(): val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right): val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    TreeNode* constructMaximumBinaryTree(std::vector<int>& nums) {
        TreeNode* node = new TreeNode(0);
        if (nums.size() == 1) {
            node->val = nums[0];
            return node;
        }

        int max_value = 0;
        int max_value_ind = 0;
        for (int i=0; i<nums.size(); i++) {
            if (nums[i] > max_value) {
                max_value = nums[i];
                max_value_ind = i;
            }
        }
        node->val = max_value;

        if (max_value_ind > 0) {
            std::vector<int> left_vec(nums.begin(), nums.begin()+max_value_ind);
            node->left = constructMaximumBinaryTree(left_vec);
        }
        if (max_value_ind < (nums.size()-1)) {
            std::vector<int> right_vec(nums.begin()+max_value_ind+1, nums.end());
            node->right = constructMaximumBinaryTree(right_vec);
        }

        return node;
    }
};

#endif