class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0,right=0;
        int mi=nums.size()+1;
        int sum=0;
        while(right<nums.size()){
            sum+=nums[right];
            while(sum>=target){
                mi=min((right-left)+1,mi);
                sum-=nums[left++];
            }
            right++;
        }
        return mi!=(nums.size()+1)?mi:0;
    }
};