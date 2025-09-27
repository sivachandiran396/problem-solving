/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        set<int> st;
        while(!q.empty()){
            int s=q.size();
            for(int i=0;i<s;i++){
                TreeNode* node=q.front();
                q.pop();
                st.insert(node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
        }
        if(st.size()==1) return true;
        return false;
    }
};