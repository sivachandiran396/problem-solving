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
void check(TreeNode* root,int sum,vector<int> vec,vector<vector<int>> &ans, int target){
    if(root==nullptr) return ;
    sum+=root->val;
    vec.push_back(root->val);
    if(sum==target && root->left==nullptr && root->right==nullptr) {
          ans.push_back(vec);
          return ;
    }
    if(root->left!=nullptr){
        check(root->left,sum,vec,ans,target);
    }
    if(root->right!=nullptr){
        check(root->right,sum,vec,ans,target);
    }
}
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        if(root==nullptr) return ans;
        int sum=0;
        vector<int> vec;
        check(root,sum,vec,ans,targetSum);
        return ans;
    }
};