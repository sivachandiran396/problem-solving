class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans(prices.size());
        for(int i=0;i<prices.size();i++){
           int dis=0;
           for(int j=i+1;j<prices.size();j++){
            if(prices[j]<=prices[i]){
                dis=prices[j];
                break;
            }
           }
           ans[i]=prices[i]-dis;
        }
        return ans;
    }
};