class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s=strs[0];
        string ans;
        int  k=0,count=0,len=s.length(),l=0;
        while(len--){
            char c=s[k];
        for(int i=0;i<strs.size();i++){
            string q=strs[i];
            if(c==q[k]){
                count++;
            }else{
                l=1;
                break;
            }
        }
        if(l==1){return ans;}
        if(count==strs.size()){
            ans+=c;
        }
         count=0;
        k++;
        }
        return ans;
    }
};