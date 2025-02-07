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
int check(TreeNode* root,bool& tar,int sum,int target){
    if(root==nullptr) return 0;
    sum+=root->val;
    if(sum==target && root->left==nullptr && root->right==nullptr){ tar=true; return 0;}
    if(root->left!=nullptr){ check(root->left,tar,sum,target);}
    if(root->right!=nullptr){ check(root->right,tar,sum,target);}
    return root->val;
}
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool t=false;
        int n=0;
        check(root,t,n,targetSum);
        return t;
    }
};