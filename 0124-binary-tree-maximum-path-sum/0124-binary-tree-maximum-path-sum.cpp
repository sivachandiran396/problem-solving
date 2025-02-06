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
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        check(root,maxi);
        return maxi;
    }
    int check(TreeNode* root,int& maxi){
    if(root==nullptr) return 0;
    int lhs=max(0,check(root->left,maxi));
    int rhs=max(0,check(root->right,maxi));
    maxi=max(maxi,(root->val+lhs+rhs));
    // cout<<lhs<<" "<<rs<<" "<<maxi<<endl;
    return root->val+max(lhs,rhs);
}
};