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
void check(TreeNode* root,vector<int> &ans){
    if(root==nullptr) return ;
    ans.push_back(root->val);
    if(root->left!=nullptr) check(root->left,ans);
    if(root->right!=nullptr) check(root->right,ans);
}
TreeNode* insert(TreeNode* root,int k){
    if(root==nullptr) return new TreeNode(k);
    if(k<root->val){
        root->left=insert(root->left,k);
    }else{
        root->right=insert(root->right,k);
    }
    return root;
}
    TreeNode* deleteNode(TreeNode* root, int key) {
        vector<int> ans;
        check(root,ans);
         TreeNode* r=nullptr;
         for(int i=0;i<ans.size();i++){
            if(ans[i]!=key){
            r=insert(r,ans[i]);
         }
         }
         return r;
    }
};