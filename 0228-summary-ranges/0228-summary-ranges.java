class Solution {
    public List<String> summaryRanges(int[] nums) {
        List<String> lt=new ArrayList<>();
        int n=nums.length;
      if(nums.length==0) return lt;
      int init=nums[0];
      String ans="";
      for(int i=1;i<nums.length;i++){
        if(nums[i-1]+1!=nums[i]){
            String st=Integer.toString(init);
            if(init!=nums[i-1]){
                String str=Integer.toString(nums[i-1]);
                ans+=st;
                ans+="->";
                ans+=str;
            }else{
                ans+=st;
            }
            init=nums[i];
            lt.add(ans);
            ans="";
        }
      }
      String st=Integer.toString(init);
            if(init!=nums[n-1]){
                String str=Integer.toString(nums[n-1]);
                ans+=st;
                ans+="->";
                ans+=str;
            }else{
                ans+=st;
            }
            lt.add(ans);
            return lt;
    }
}