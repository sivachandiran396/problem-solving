class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> ans(pref.size());
        ans[0]=pref[0];
         int xr=0;
        for(int i=1;i<pref.size();i++){
           xr=pref[i-1]^pref[i];
           ans[i]=xr;
        }
        return ans;
    }
};