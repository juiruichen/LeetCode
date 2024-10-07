#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <queue>

using namespace std;

class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public: 
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> answer;
        queue<Node*> que;
        if(root) que.push(root);

        while(!que.empty()) {
            int size = que.size();
            vector<int> level_element;

            while(size--) {
                Node* node = que.front();
                que.pop();

                level_element.push_back(node->val);
                for (Node* child: node->children) {
                    que.push(child);
                }
            }
            answer.push_back(level_element);
        }
        return answer;
    }
};

#endif