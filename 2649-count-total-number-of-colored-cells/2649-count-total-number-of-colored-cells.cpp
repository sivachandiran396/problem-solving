class Solution {
public:
    long long coloredCells(int n) {
       long long ans=1;
       if(n==1) return 1;
       int t=2;
       for(int i=2;i<=n;i++){
        ans +=(2*t);
        t+=2;
       }
       return ans;
    }
};