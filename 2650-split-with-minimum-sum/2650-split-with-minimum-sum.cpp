class Solution {
public:
    int splitNum(int num) {
        vector<char> vec;
        while(num){
            vec.push_back(num%10+'0');
            num/=10;
        }
        sort(vec.begin(),vec.end());
        int c1=0,c2=0;
        for(int i=0;i<vec.size();i++){
            if(i%2==0){
                c1=c1*10+(vec[i]-'0');
            }else{
                c2=c2*10+(vec[i]-'0');
            }
        }
        return c1+c2;
    }
};