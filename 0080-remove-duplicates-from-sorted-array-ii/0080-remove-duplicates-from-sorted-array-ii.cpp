class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> mp;
        int i=0;
        while(i<nums.size()){
            if(mp[nums[i]]<2){
                mp[nums[i]]++;
                i++;
            }else{
                nums.erase(nums.begin()+i);
            }
        }
        return nums.size();
    }
};