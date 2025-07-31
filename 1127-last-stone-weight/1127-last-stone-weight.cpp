class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while(stones.size()>1){
             sort(stones.begin(),stones.end());
             int l=stones[stones.size()-1];
             int s=stones[stones.size()-2];
             stones.pop_back();
             stones.pop_back();
             if(l!=s){
                stones.push_back(l-s);
             }
        }
        return stones.empty()?0:stones[0];
    }
};