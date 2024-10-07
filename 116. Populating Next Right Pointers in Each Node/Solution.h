#ifndef SOLUTION_H
#define SOLUTION_H

#include <queue>

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node(): val(0), left(nullptr), right(nullptr), next(nullptr) {}
    Node(int _val): val(_val), left(nullptr), right(nullptr), next(nullptr) {}
    Node(int _val, Node* _left, Node* _right, Node* _next): val(_val), left(_left), right(_right), next(_next) {}
};

class Solution {
public:
    Node* connect(Node* root) {
        std::queue<Node*> que;
        if (root) que.push(root);

        while(!que.empty()) {
            int size = que.size();

            for(int i=size; i>0; i--) {
                Node* node = que.front();
                que.pop();

                if (i != 1) node->next = que.front();
                else node->next = nullptr;

                if (node->left) que.push(node->left);
                if (node->right) que.push(node->right);
            }
        }

        return root;
    } 
};

#endif