class Solution {
public:
    int maxScore(vector<int>& c, int k) {
        int maxlen=0,ls=0,rs=0;
        for(int i=0;i<k;i++){
            maxlen+=c[i];
        }
        ls=maxlen;
      int re=c.size()-1;
        for (int i=k-1;i>=0;i--){
            ls=ls-c[i];
            rs+=c[re];
            re--;
            maxlen=max(maxlen,rs+ls);
        }
        return maxlen;
    }
};