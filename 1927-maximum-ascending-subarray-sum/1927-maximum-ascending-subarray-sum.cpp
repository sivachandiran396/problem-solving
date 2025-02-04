class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
       int max=0,c=0;
       for(int i=0;i<nums.size();i++){
            int sum=0,m=0;
            for(int j=i;j<nums.size();j++){
                if(nums[j]>m){
                    m=nums[j];
                    sum+=nums[j];
                }
                else{
                    c=nums[j];
                  break;
                }
            }
            if(sum>max) max=sum;
       } 
           return max;

    }
};