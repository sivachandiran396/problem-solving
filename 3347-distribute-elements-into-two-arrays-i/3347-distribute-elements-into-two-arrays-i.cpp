class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> ans;
        vector<int> vec;
        int a1=nums[0];
        int a2=nums[1];
        ans.push_back(a1);
        vec.push_back(a2);
        for(int i=2;i<nums.size();i++){
            if(a1>a2){
                ans.push_back(nums[i]);
                a1=nums[i];
            }else{
                vec.push_back(nums[i]);
                a2=nums[i];
            }
        }
        for(int i=0;i<vec.size();i++){
            ans.push_back(vec[i]);
        }
        return ans;
    }
};