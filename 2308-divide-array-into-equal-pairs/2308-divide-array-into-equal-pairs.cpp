class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n=nums.size()/2;
       vector<int> fre(501);
       for(int i=0;i<nums.size();i++){
        fre[nums[i]]++;
       }
       for(int i=0;i<fre.size();i++){
        if(fre[i]%2==0){
            fre[i]=0;
        }else{
            return false;
        }
       }
        return true;
    }
};