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
TreeNode* insert(TreeNode* root,int k){
    if(root==nullptr) return new TreeNode(k);
    if(k<root->val){
        root->left=insert(root->left,k);
    }else{
        root->right=insert(root->right,k);
    }
    return root;
}
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root=nullptr;
        for(int i=0;i<preorder.size();i++){
            root=insert(root,preorder[i]);
        }
        return root;
    }
};