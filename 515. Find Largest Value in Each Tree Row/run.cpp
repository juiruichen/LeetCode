#include <iostream>
#include "Solution.h"

int main() {

    // TODO: Case 1
    TreeNode* node5 = new TreeNode(5);
    TreeNode* node3_right = new TreeNode(3);
    TreeNode* node9 = new TreeNode(9);
    TreeNode* node3 = new TreeNode(3, node5, node3_right);
    TreeNode* node2 = new TreeNode(2, nullptr, node9);
    TreeNode* root = new TreeNode(1, node3, node2);

    // TODO: Case 2
    // TreeNode* node2 = new TreeNode(2);
    // TreeNode* node3 = new TreeNode(3);
    // TreeNode* root = new TreeNode(1, node2, node3);

    // TODO: Run
    Solution solution;
    auto answer = solution.largestValues(root);

    std::cout << "[";
    for(int i=0; i<answer.size(); i++) {
        if(i > 0) std::cout << ", ";
        std::cout << answer[i];
    }
    std::cout << "]" << endl;

    return 0;
}