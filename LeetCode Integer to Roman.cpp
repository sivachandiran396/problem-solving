class Solution {
public:
    pair<string,int> roman(int n){
        string ch="";
        if(n>=1000){ ch="M";
        n-=1000;
        pair<string,int> p={ch,n};
        return p;}
        if(n>=900){ ch="CM"; n-=900;
        pair<string,int> p={ch,n};
        return p;}
        if(n>=500){ ch="D"; n-=500;
        pair<string,int> p={ch,n};
        return p;}
        if(n>=400){ ch="CD"; n-=400;
        pair<string,int> p={ch,n};
        return p;}
        if(n>=100){ ch="C"; n-=100;
        pair<string,int> p={ch,n};
        return p;}
        if(n>=90){ ch="XC"; n-=90;
        pair<string,int> p={ch,n};
        return p;}
        if(n>=50){ ch="L"; n-=50;
        pair<string,int> p={ch,n};
        return p;}
        if(n>=40){ ch="XL"; n-=40;
        pair<string,int> p={ch,n};
        return p;}
        if(n>=10){ ch="X"; n-=10;
        pair<string,int> p={ch,n};
        return p;}
        if(n>=9){ ch="IX"; n-=9;
        pair<string,int> p={ch,n};
        return p;}
        if(n>=5){ ch="V"; n-=5;
        pair<string,int> p={ch,n};
        return p;}
        if(n>=4){ ch="IV";n-=4;
        pair<string,int> p={ch,n};
        return p;}
        ch="I";n-=1;
        pair<string,int> p={ch,n};
        return p;
    }
    string intToRoman(int num) {
        string ans;
        while(num!=0){
            pair<string,int> val;
            val=roman(num);
            ans+=val.first;
            num=val.second;
        }
        return ans;
    }
};