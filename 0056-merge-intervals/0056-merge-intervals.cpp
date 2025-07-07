class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        vector<int> vec(2,0);
        vec[0]=intervals[0][0];
        vec[1]=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<=vec[1]){
                vec[1]=max(intervals[i][1],vec[1]);
            }
            else{
                ans.push_back(vec);
                vec=intervals[i];
            }
        }
        ans.push_back(vec);
        return ans;
    }
};