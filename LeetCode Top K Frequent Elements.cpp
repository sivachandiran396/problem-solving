class Solution {
public:
set<int> vectorToSet(vector<int> my_vector){
    set<int> my_set;
    for(auto i: my_vector){
        my_set.insert(i);
    }
    return my_set;
}
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int,int>> ans;
        set<int> st=vectorToSet(nums);
         for(auto it:st){
            pair<int,int> p;
            int n=count(nums.begin(), nums.end(), it);
            p.first=n;
            p.second=it;
            ans.push_back(p);
         }
       sort(ans.begin(), ans.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.first > b.first;  
    });
         vector<int> val(k);
         int c=0;
         for(auto i:ans){
           val[c]=i.second;
           c++;
           if(c==k) break;
         }
         return val;
    }
};s