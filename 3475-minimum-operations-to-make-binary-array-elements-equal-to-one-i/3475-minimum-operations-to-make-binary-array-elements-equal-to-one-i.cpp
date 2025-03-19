class Solution {
public:
    int minOperations(vector<int>& nums) {
        int c=0;
        int i=2;
        while(i<nums.size()){
            if(nums[i-2]==0){
                nums[i-2]=!nums[i-2];
                nums[i-1]=!+nums[i-1];
                nums[i]=!nums[i];
                c++;
            }
            i++;
        }
    for(auto it:nums) if(it==0) return -1;
        return c;
    }
};