#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(): val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right): val(x), left(left), right(right) {}
};

class Solution {
private:
    int count = 0;
    int max_count = 0;
    TreeNode* pre = nullptr;
    std::vector<int> answer;
    void searchBST(TreeNode* cur) {
        if (cur == nullptr) return;

        searchBST(cur->left);

        if (pre == nullptr) count = 1;
        else if (pre->val == cur->val) count++;
        else count = 1;
        pre = cur;

        if (count == max_count) answer.push_back(cur->val);
        if (count > max_count) {
            max_count = count;
            answer.clear();
            answer.push_back(cur->val);
        }

        searchBST(cur->right);
    }

public:
    std::vector<int> findMode(TreeNode* root) {
        searchBST(root);
        return answer;
    }
};

#endif