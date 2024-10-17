#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <string>

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
    void traversal(TreeNode* cur, std::vector<int>& path, std::vector<std::string>& result) {
        path.push_back(cur->val);
        
        if (cur->left == NULL && cur->right==NULL) {
            std::string spath;
            for(int i=0; i<path.size()-1; i++)  {
                spath += std::to_string(path[i]);
                spath += "->";
            }
            spath += std::to_string(path[path.size()-1]);
            result.push_back(spath);
            return;
        }

        if (cur->left) {
            traversal(cur->left, path, result);
            path.pop_back();
        }
        if (cur->right) {
            traversal(cur->right, path, result);
            path.pop_back();
        }
    }

public:
    std::vector<std::string> binaryTreePaths(TreeNode* root) {
        std::vector<std::string> result;
        std::vector<int> path;

        if (root==NULL) return result;
        traversal(root, path, result);
        return result;
    }
};

#endif