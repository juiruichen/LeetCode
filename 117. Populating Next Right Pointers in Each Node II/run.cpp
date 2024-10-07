#include <iostream>
#include "Solution.h"

int main() {

    // TODO: Case 1
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(7);

    // TODO: Case 2
    // Node* root = nullptr;

    // TODO: Run
    Solution solution;
    root = solution.connect(root);
    
    Node* current = root;
    std::cout << "[";
    while (current) {
        if (current != root) std::cout << ", ";
        Node* temp = current;
        while (temp) {
            std::cout << temp->val << ", ";
            temp = temp->next;
        }
        std::cout << "#";  // 用#標記每一層的結束
        current = current->left;
    }
    std::cout << "]" << std::endl;

    return 0;
}