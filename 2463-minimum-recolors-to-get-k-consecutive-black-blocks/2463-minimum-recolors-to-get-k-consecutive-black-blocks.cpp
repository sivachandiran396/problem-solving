class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        vector<string> vec;
        string ans;
        for(int i=0;i<k;i++){
            ans+=blocks[i];
        }vec.push_back(ans);
        int left=0;
        for(int i=k;i<blocks.size();i++){
            ans.erase(ans.begin());
            ans+=blocks[i];
        vec.push_back(ans);
        }
        int min=INT_MAX;
        for(int i=0;i<vec.size();i++){
            string a=vec[i];
            int c=count(a.begin(),a.end(),'W');
            if(c<min) min=c;
        }
        return min;
    }
};