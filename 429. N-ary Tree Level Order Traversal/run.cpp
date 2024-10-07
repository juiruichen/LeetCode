#include <iostream>
#include "Solution.h"

int main() {

    // TODO: Case 1
    Node* node5 = new Node(5);
    Node* node6 = new Node(6);
    vector<Node*> children3 = {node5, node6};
    Node* node3 = new Node(3, children3);

    Node* node2 = new Node(2);
    Node* node4 = new Node(4);

    vector<Node*> children1 = {node3, node2, node4};
    Node* root = new Node(1, children1);

    // TODO: Case 2
    // Node* node14 = new Node(14);
    // Node* node11 = new Node(11, {node14});
    // Node* node12 = new Node(12);
    // Node* node13 = new Node(13);

    // Node* node6 = new Node(6);
    // Node* node7 = new Node(7);
    // Node* node8 = new Node(8);
    // Node* node9 = new Node(9);
    // Node* node10 = new Node(10);

    // Node* node2 = new Node(2, {node6});
    // Node* node3 = new Node(3, {node7});
    // Node* node4 = new Node(4, {node8});
    // Node* node5 = new Node(5, {node9, node10});

    // Node* root = new Node(1, {node2, node3, node4, node5});

    // node9->children = {node11};
    // node10->children = {node12, node13};
    
    // TODO: Run
    Solution solution;
    auto answer = solution.levelOrder(root);

    std::cout << "[";
    for (int i=0; i<answer.size(); i++) {
        if (i > 0) std::cout << ", ";
        std::cout << "[";
        for (int j=0; j<answer[i].size(); j++) {
            if (j > 0) std::cout << ", ";
            std::cout << answer[i][j];
        }
        std::cout << "]";
    }
    std::cout << "]\n";
    
    return 0;
}