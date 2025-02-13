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
int check(TreeNode* root,int &count){
    if(root==nullptr){
        return 0;
    }
    if(root->left!=nullptr){
        check(root->left,count);
    }
    if(root->right!=nullptr){
        check(root->right,count);
    }
    return ++count;
}
    int countNodes(TreeNode* root) {
        if(root==nullptr) return 0;
        int c=0;
        check(root,c);
        return c;
    }
};