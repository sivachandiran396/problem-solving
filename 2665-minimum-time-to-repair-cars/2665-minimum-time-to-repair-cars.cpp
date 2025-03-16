class Solution {
public:
    bool is(long long mid,vector<int>&v,int cars){
        long long carr=0;
        for(long i:v){
            carr += sqrt((1.0*mid)/i);
            if(cars <= carr) return true;
        }
        return false;
    }
    long long repairCars(vector<int>& ranks, int cars) {
        long long start = *min_element(ranks.begin(),ranks.end());
        long long end = *max_element(ranks.begin(),ranks.end());
        end = (long long)end * cars * cars;
        long long ans = end;
        while(start<=end){
            long long mid = start + (end - start)/2;
            if(is(mid,ranks,cars)){
                end = mid - 1;
                ans = mid;
            }else{
                start = mid+1;
            }
        }
        return ans;
    }
};