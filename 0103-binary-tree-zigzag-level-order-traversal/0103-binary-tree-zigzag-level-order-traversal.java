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
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        List<List<Integer>> ans=new ArrayList<>();
        if(root==null) return ans;
        Queue<TreeNode> q=new  LinkedList<>();
        q.add(root);
        while(!q.isEmpty()){
            int s=q.size();
            List<Integer> vec=new ArrayList<>();
            for(int i=0;i<s;i++){
                TreeNode t=q.peek();
                q.remove();
                if(t.left!=null) q.add(t.left);
                if(t.right!=null) q.add(t.right);
                vec.add(t.val);
            }
            ans.add(vec);
        }
        int c=1;
        for(int i=0;i<ans.size();i++){
            List<Integer> vec=ans.get(i);
            if(c==0){
                Collections.reverse(vec);
                c=1;
            }else{
                c=0;
            }
            ans.set(i, vec);

        }
        return ans;
    }
}
