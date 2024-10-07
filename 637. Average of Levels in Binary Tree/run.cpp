#include <iostream>
#include "Solution.h"


int main() {
    
    // TODO: Case 1
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    // TODO: Case 2
    // TreeNode* root = new TreeNode(3);
    // root->left = new TreeNode(9);
    // root->right = new TreeNode(20);
    // root->left->left = new TreeNode(15);
    // root->left->right = new TreeNode(7);

    // TODO: Run
    Solution solution;
    auto answer = solution.averageOfLevels(root);

    cout << "[";
    for (int i = 0; i < answer.size(); ++i) {
        if (i > 0) cout << ", ";
        cout << answer[i];
    }
    cout << "]" << endl;

    return 0;
}