class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int nc=0,pc=0;
       for(int i=0;i<nums.size();i++){
        if(nums[i]<0) nc++;
        else if(nums[i]>0) pc++;
       }
       return pc>nc?pc:nc;
    }
};