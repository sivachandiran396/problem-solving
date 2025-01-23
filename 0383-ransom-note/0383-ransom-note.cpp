class Solution {
public:
    bool canConstruct(string ra, string ma) {
        int c=0;
        for(int i=0;i<ra.size();i++){
            int n=ma.find(ra[i]);
            if(n != string::npos){
                c++;
                ma.erase(ma.begin()+n);
            }
        }
        cout<<c<<" "<<ra.size();
        if(c==ra.size()){
            return true;
        }
        return false;
    }
};