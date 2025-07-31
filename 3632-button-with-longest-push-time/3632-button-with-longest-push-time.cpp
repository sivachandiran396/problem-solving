class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
        int resultbut=0,maxtime=0,prev=0;
        for(int i=0;i<events.size();i++){
            int but=events[i][0];
            int t=events[i][1];
            int s=t-prev;
            if(s>maxtime ||(s==maxtime && but<resultbut)){
                maxtime=s;
                resultbut=but;
            }
            prev=events[i][1];
        }
        return resultbut;
    }
};