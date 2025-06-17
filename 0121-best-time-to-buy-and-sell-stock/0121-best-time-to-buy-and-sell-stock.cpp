class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int ans=0,tobuy=prices[0];
       for(int i=1;i<prices.size();i++){
        if(tobuy>prices[i]){
            tobuy=prices[i];
        }
        else{
            int cur=prices[i]-tobuy;
            ans=max(ans,cur);
        }
       } 
       return ans;
    }
};