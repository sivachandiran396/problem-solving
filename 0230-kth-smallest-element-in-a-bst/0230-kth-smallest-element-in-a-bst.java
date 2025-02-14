/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    void check(TreeNode root,List<Integer> ans){
        if(root==null) return ;
        ans.add(root.val);
        if(root.left!=null) {
            check(root.left,ans);
        }
        if(root.right!=null){
            check(root.right,ans);
        }
    }
    public int kthSmallest(TreeNode root, int k) {
        if(root==null) return 0;
        List<Integer> ans=new ArrayList<>();
        check(root,ans);
        Collections.sort(ans);
        return ans.get(k-1);
    }
}