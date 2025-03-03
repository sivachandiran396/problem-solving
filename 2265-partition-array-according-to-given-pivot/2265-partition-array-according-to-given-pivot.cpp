class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> f;
        vector<int> b;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot) f.push_back(nums[i]);
            else if(nums[i]>pivot) b.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==pivot){
                f.push_back(nums[i]);
            }
        }
        vector<int> ans;
        for(int i=0;i<f.size();i++){
            ans.push_back(f[i]);
        }
         for(int i=0;i<b.size();i++){
            ans.push_back(b[i]);
        }
        return ans;
    }
};