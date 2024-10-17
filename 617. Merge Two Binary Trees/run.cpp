#include <iostream>
#include <queue>
#include "Solution.h"
using namespace std;

void printTree(TreeNode* root) {
    queue<TreeNode*> que;
    if (root) que.push(root);

    while(!que.empty()) {
        int size = que.size();

        while(size--) {
            TreeNode* node = que.front();
            que.pop();

            cout << node->val << " ";
            if (node->left) que.push(node->left);
            if (node->right) que.push(node->right);

        }
        cout << endl;
    }
}

int main() {

    // TODO: Case 1
    TreeNode* root1 = new TreeNode(1);
    root1->left = new TreeNode(3);
    root1->right = new TreeNode(2);
    root1->left->left = new TreeNode(5);

    TreeNode* root2 = new TreeNode(2);
    root2->left = new TreeNode(1);
    root2->right = new TreeNode(3);
    root2->left->right = new TreeNode(4);
    root2->right->right = new TreeNode(7);

    // TODO: Case 2
    // TreeNode* root1 = new TreeNode(1);

    // TreeNode* root2 = new TreeNode(1);
    // root2->left = new TreeNode(2);

    // TODO: Run
    Solution solution;
    TreeNode* root = solution.mergeTrees(root1, root2);

    printTree(root);

    return 0;
}