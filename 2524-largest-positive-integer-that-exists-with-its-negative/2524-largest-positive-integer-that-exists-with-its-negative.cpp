class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int max=0;
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-1;i>=0;i--){
            auto it=find(nums.begin(),nums.end(),((-1)*nums[i]));
            if(it!=nums.end()){return nums[i];}
        }
        return -1;
    }
};