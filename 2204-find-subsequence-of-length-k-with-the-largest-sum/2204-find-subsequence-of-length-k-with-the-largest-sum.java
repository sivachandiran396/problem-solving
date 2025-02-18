class Solution {
    public int[] maxSubsequence(int[] nums, int k) {
        PriorityQueue<Integer>pq = new PriorityQueue<>();
     List<Integer>list = new ArrayList<>();
     for(int num:nums){
        pq.add(num);
        list.add(num);
     }
     for(int i=0;i<nums.length-k;++i){
        list.remove(pq.poll());
     }
     int ans[] = new int[k];
     for(int i=0;i<k;++i){
        ans[i] = list.get(i);
     }
     return ans;
    }
}