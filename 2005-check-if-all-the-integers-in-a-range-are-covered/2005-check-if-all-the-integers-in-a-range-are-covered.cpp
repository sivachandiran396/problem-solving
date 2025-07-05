class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
       for(int i=left;i<=right;i++){
        bool ans=false;
        for(auto &num:ranges){
            if(num[0]<=i && i<=num[1]){
                ans=true;
                break;
            }
        }
        if(!ans) return false;
       }
       return true;
    }
};