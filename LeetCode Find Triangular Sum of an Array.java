class Solution {
    public List<Integer> find(List<Integer> fn){
        List<Integer> ans=new ArrayList<>();
        for(int i=0;i<fn.size()-1;i++){
            int pl=(fn.get(i)+fn.get(i+1))%10;
            ans.add(pl);
        }
        return ans;
    }
    public int triangularSum(int[] nums) {
        if(nums.length==1){
            return nums[0];
        }
        List<List<Integer>> lt=new ArrayList<>();
        List<Integer> f=new ArrayList<>();
         int[] pre=new int[nums.length-1];
       for(int i=0;i<nums.length-1;i++){
        pre[i]=(nums[i]+nums[i+1])%10;
        f.add(pre[i]);
       }
       lt.add(f);
        int n=nums.length;
        int p=0;
        while(--n!=1){
        List<Integer> fi= find(lt.get(p));
        lt.add(fi);
        p++;
    }
    // System.out.println(lt);
    List<Integer> val=lt.get(lt.size()-1);
    return val.get(0);
    }
}