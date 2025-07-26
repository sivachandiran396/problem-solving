class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int sum=0;
        for(int i=0;i<timeSeries.size()-1;i++){
           sum+=min(duration,timeSeries[i+1]-timeSeries[i]);
        }
        if(!timeSeries.empty()){
            sum+=duration;
        }
        return sum;
    }
};