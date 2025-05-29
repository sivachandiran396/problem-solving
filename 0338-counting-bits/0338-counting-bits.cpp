class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++){
            string s= bitset<32>(i).to_string();
            int c=count(s.begin(),s.end(),'1');
            ans.push_back(c);
        }
        return ans;
    }
};