class Solution {
public:
    string reverseStr(string s, int k) {
        string ans;
         int i=0,pre=0,c=0;
         while(i<s.length()){
            pre=i;
             string r = s.substr(i, k);
             if(c==0){
                c=1;
             reverse(r.begin(), r.end());
             }
             else{ c=0;
                }
             cout<<r<<" ";
             ans+=r;
             i=i+k;
         }
         return ans;
    }
};