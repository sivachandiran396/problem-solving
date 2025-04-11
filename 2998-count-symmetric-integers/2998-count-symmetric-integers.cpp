class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int c=0;
        for(int i=low;i<=high;i++){
            string s=to_string(i);
            int n=s.size();
            int f=0,se=0;
            for(int j=0;j<n/2;j++){
                f+=int(s[j]);
            }
            for(int k=n/2;k<n;k++){
                se+=int(s[k]);
            }
            if(f==se) c++;
        }
        return c;
    }
};