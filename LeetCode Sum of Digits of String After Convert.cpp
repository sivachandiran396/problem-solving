class Solution {
public:
    int getLucky(string s, int k) {
        string ans;
        for(int i=0;i<s.length();i++){
            int n=s[i]-96;
            ans+=to_string(n);
        }
        int sum=0;
         while(k--){
            sum=0;
            for(int i=0;i<ans.length();i++){
                int d=ans[i]-'0';
                  sum+=d;
            }
            if(k!=0){
                ans=to_string(sum);
            }
         }
        return sum;
    }
};