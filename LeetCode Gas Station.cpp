class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
       int gsum=0,csum=0;
       for(int i=0;i<gas.size();i++){
        gsum+=gas[i];
        csum+=cost[i];
       }
       int diff=0,start=0;
       if(csum>gsum) return -1;
       for(int i=0;i<gas.size();i++){
           diff+=(gas[i]-cost[i]);
           if(diff<0){
            diff=0;
            start=i+1;
           }
       }
       return start;
    }

};