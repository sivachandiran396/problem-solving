/*
// Definition for a Node.
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
*/

class Solution {
public:
    vector<int> a;
    void postOrder(Node* root) {
        if (root == NULL)
            return;
        a.push_back(root->val);    
        for (Node* child : root->children) {
            postOrder(child);
        }
    }
    vector<int> preorder(Node* root) {
        postOrder(root);
        return a;
    }
};