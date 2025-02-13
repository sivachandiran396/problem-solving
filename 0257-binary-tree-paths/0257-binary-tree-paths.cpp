/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
void check(TreeNode* root,string s,vector<string>& ans){
    if(root->left==nullptr && root->right==nullptr){
        s += to_string(root->val);
        ans.push_back(s);
        return ;
    }
    s += to_string(root->val) + "->";
    if(root->left!=nullptr) check(root->left,s,ans);
    if(root->right!=nullptr) check(root->right,s,ans);
}
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        if(root==nullptr) return ans;
        string s;
        check(root,s,ans);
        return ans;
    }
};