class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int c=0;
         set<int> st(nums.begin(), nums.end());
         if(st.size()==nums.size()) return 0;
       while(true){
        int n=3;
        while(n--){
            if(nums.size()!=0){
                nums.erase(nums.begin());
            }
        }
         c++;
       set<int> s(nums.begin(), nums.end());
        if(s.size()==nums.size() || nums.size()==0){
            break;
        }
       }
       return c;
    }
};