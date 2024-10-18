#include <iostream>
#include "Solution.h"
using namespace std;

int main() {

    // TODO: Case 1
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);

    // TODO: Case 2
    // TreeNode* root = new TreeNode(5);
    // root->left = new TreeNode(1);
    // root->right = new TreeNode(4);
    // root->right->left = new TreeNode(3);
    // root->right->right = new TreeNode(6);

    // TODO: Run
    Solution solution;
    bool answer = solution.isValidBST(root);
    if (answer) cout << "true\n";
    else cout << "false\n";

    return 0;
}