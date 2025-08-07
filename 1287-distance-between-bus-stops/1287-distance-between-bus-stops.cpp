class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int des) {
        int front=0,sum=0;
        if(start>des){
            swap(start,des);
        }
        for(int i=0;i<distance.size();i++){
            sum+=distance[i];
            if(i>=start && i<des){
            front+=distance[i];}
        }
        int rev=sum-front;
        return min(front,rev);
    }
};