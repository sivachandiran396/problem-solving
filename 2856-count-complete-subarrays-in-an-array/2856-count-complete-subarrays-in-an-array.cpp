class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int c=0;
       int k = unordered_set<int>(nums.begin(),nums.end()).size();
        for(int i=0;i<nums.size();i++){
            set<int> st;
            for(int j=i;j<nums.size();j++){
                st.insert(nums[j]);
                if(st.size()==k) c++;
            }
        }
        return c;
    }
};