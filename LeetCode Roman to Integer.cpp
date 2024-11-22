class Solution {
public:
 int roman(string c){
    int ans=0;
    if(c=="I"){ans=1;}
    if(c=="V"){ans=5;}
    if(c=="X"){ans=10;}
    if(c=="L"){ans= 50;}
    if(c=="C"){ans= 100;}
    if(c=="D"){ans= 500;}
    if(c=="M"){ans= 1000;}
    if((c[0]=='I'&&c[1]=='V')){ans= 4;}
    if(c[0]=='I'&&c[1]=='X'){ans= 9;}
    if(c[0]=='X'&&c[1]=='L'){ans= 40;}
    if(c[0]=='X'&&c[1]=='C'){ans= 90;}
    if(c[0]=='C'&&c[1]=='D'){ans=400;}
    if(c[0]=='C'&&c[1]=='M'){ans= 900;}
    return ans;
 }
    int romanToInt(string s) {
        int ans=0;
        for(int i=0;i<s.length();i++){
             if((s[i]=='I'&&s[i+1]=='V')||(s[i]=='I'&&s[i+1]=='X')){
                string val;
                val+=s[i];
                val+=s[i+1];
                i++;
                int n=roman(val);
                ans+=n;
             }
             else  if((s[i]=='X'&&s[i+1]=='L')||(s[i]=='X'&&s[i+1]=='C')){
                string val;
                val+=s[i];
                val+=s[i+1];
                i++;
                int n=roman(val);
                ans+=n;
             }
             else  if((s[i]=='C'&&s[i+1]=='D')||(s[i]=='C'&&s[i+1]=='M')){
                string val;
                val+=s[i];
                val+=s[i+1];
                i++;
                int n=roman(val);
                ans+=n;
             }
             else{
                string val;
                val+=s[i];
                int n=roman(val);
                ans+=n;
             }
        }
        return ans;
    }
};