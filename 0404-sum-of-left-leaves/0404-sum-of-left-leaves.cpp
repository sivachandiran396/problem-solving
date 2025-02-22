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
int check(TreeNode* node,int &sum){
    if(node==nullptr) return 0;
    if(node->left!=nullptr && node->left->left==nullptr && node->left->right==nullptr){
        sum+=node->left->val;
    }
    check(node->left,sum);
    if(node->right!=nullptr){
        int lh=check(node->right,sum);
        sum+=lh;
    }
    return 0;
}
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==nullptr) return 0;
        int sum=0;
        check(root,sum);
        return sum;
    }
};