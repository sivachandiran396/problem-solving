class Solution {
public:
    int trap(vector<int>& h) {
        int l=0,r=h.size()-1;
        int ans=0,lemax=h[l],rimax=h[r];
        while(l<r){
            if(lemax<rimax){
                ans+=lemax-h[l];
                lemax=max(lemax,h[++l]);
            }else{
                ans+=rimax-h[r];
                rimax=max(rimax,h[--r]);
            }
        }
        return ans;
    }
};