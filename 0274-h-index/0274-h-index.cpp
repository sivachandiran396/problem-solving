class Solution {
public:
    int hIndex(vector<int>& c) {
        sort(c.begin(),c.end());
        int n=c.size();
        int ind=0;
        for(int i=0;i<n;i++){
           int h=n-i;
           if(c[i]>=h){
            ind=h;
            break;
           }
        }
        return ind;
    }
};