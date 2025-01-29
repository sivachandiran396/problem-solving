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
int check(TreeNode* root){
       if(root==nullptr) return 0;
       int l=check(root->left);
       int r=check(root->right);
       if(l==0 || r==0){
        return max(l,r)+1;
       }
       return min(l,r)+1;
    }
    int minDepth(TreeNode* root) {
         if(root==nullptr) return 0;
       return check(root);
    }
};