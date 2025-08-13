class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s=to_string(num);
        int c=0;
        for(int i=0;i<=s.size()-k;i++){
            string str=s.substr(i,k);
            int n=stoi(str);
            if(n!=0 && num%n==0) c++;
        }
        return c;
    }
};