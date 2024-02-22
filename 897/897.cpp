#include <iostream>

// Definition for a BST node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(): val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right): val(x), left(left), right(right) {}
};

// Solution
class Solution {
public:
    TreeNode* newRoot = new TreeNode(0); // Dummy root node to ease re-linking process.
    TreeNode* current = newRoot; // Pointer to attach nodes in increasing order.
    
    // Perform in-order traversal to rearrange nodes in increasing order.
    void inorder(TreeNode* node) {
        if (!node) return; // Base case: null node.

        inorder(node->left); // Visit left subtree.
        node->left = nullptr; // Disconnect left child.
        current->right = node; // Attach current node to the right of 'current'.
        current = node; // Move 'current' pointer to the node.
        inorder(node->right); // Visit right subtree.

    }

    // Public interface to start the transformation process.
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        return newRoot->right;
    }
};

void printRightPath(TreeNode* root);


int main() {

    // Build the BST from leetcode 897.
    // TreeNode *root = new TreeNode(5, new TreeNode(3, new TreeNode(2, new TreeNode(1), nullptr), new TreeNode(4)), new TreeNode(6, nullptr, new TreeNode(8, new TreeNode(7), new TreeNode(9))));
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);
    root->right->right = new TreeNode(8);
    root->left->left->left = new TreeNode(1);
    root->right->right->left = new TreeNode(7);
    root->right->right->right = new TreeNode(9);

    // Initialize the Solution class
    Solution solution;

    // Transform BST to increasing order BST and print the right path.
    TreeNode* newRoot = solution.increasingBST(root);
    printRightPath(newRoot);

    std::cin.get();
    return 0;
}

void printRightPath(TreeNode* root) {
    TreeNode* current = root;
    std::cout << "[";
    while (current) {
        std::cout << current->val;
        if (current->right) {
            std::cout << ", ";
            if (!current->left) {
                std::cout << "null, ";
            }
        }
        current = current->right;
    }
    std::cout << "]" << std::endl;
}