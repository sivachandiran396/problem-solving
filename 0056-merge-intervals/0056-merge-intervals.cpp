class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        sort(in.begin(),in.end());
        vector<vector<int>> ans;
        ans.push_back(in[0]);
           for(int i=1;i<in.size();i++){
            vector<int>& last=ans.back();
            if(in[i][0]<=last[1]){
                last[1]=max(last[1],in[i][1]);
            }
            else{
                ans.push_back(in[i]);
            }
           }
        return ans;
    }
};