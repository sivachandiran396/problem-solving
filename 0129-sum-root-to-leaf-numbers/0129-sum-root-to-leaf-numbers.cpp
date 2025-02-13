/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void check(TreeNode* root, string sum, vector<string>& ans) {
        if (root == nullptr) {
            ans.push_back(sum);
            return;
        }
        sum += to_string(root->val);
        if (root->left == nullptr && root->right == nullptr) {
            ans.push_back(sum);
            return;
        }
        if (root->left != nullptr) {
            check(root->left, sum, ans);
        }
        if (root->right != nullptr) {
            check(root->right, sum, ans);
        }
    }
    int sumNumbers(TreeNode* root) {
        vector<string> ans;
        if (root == nullptr)
            return 0;
        string sum;
        check(root, sum, ans);
        int s = 0;
        for (string i : ans) {
            s += stoi(i);
        }
        return s;
    }
};