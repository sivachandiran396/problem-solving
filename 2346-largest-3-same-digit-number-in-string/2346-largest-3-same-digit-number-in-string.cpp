class Solution {
public:
    string largestGoodInteger(string nums) {
        string maxstr="";
        for(int i=0;i<=nums.size()-3;i++){
            if(nums[i]==nums[i+1] && nums[i+1]==nums[i+2]){
                string st=nums.substr(i,3);
                if(st>maxstr){
                    maxstr=st;
                }
            }
        }
        return maxstr;
    }
};