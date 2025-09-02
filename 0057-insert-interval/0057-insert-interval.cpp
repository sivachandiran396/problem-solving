class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& in, vector<int>& ne) {
        in.push_back(ne);
        sort(in.begin(),in.end());
        vector<vector<int>> ans;
        ans.push_back(in[0]);
        for(int i=1;i<in.size();i++){
        if(ans.back()[1]>=in[i][0]){
            ans.back()[1]=max(ans.back()[1],in[i][1]);
        }else{
            ans.push_back(in[i]);
        }
        }
        return ans;
    }
};