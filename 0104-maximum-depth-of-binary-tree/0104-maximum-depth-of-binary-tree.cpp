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
    int maxDepth(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==nullptr) return 0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            vector<int> nums;
            for(int i=0;i<s;i++){
              TreeNode* t=q.front();
              q.pop();
              if(t->left!=nullptr) q.push(t->left);
              if(t->right!=nullptr) q.push(t->right);
              nums.push_back(t->val);
            }
            ans.push_back(nums);
        }
        return ans.size();
    }
};