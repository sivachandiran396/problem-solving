class Solution {
public:
    int generateKey(int num1, int num2, int num3) {


        string a=to_string(num1);
        string b=to_string(num2);
        string c=to_string(num3);

        while(a.size()<4)
        {
            string s=a;
            s="0"+s;
            a=s;
        }
        while(b.size()<4)
        {
            string s=b;
            s="0"+s;
            b=s;
        }
        while(c.size()<4)
        {
            string s=c;
            s="0"+s;
            c=s;
        }
        int key=0;
        for(int i=0;i<4;i++)
        {
            int q=a[i]-'0';
            int r=b[i]-'0';
            int p=c[i]-'0';
            key=key*10+min({q,r,p});
        }
        return key;
        
    }
};