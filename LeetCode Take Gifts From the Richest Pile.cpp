class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int n=0;
        while(n<k){
            sort(gifts.begin(),gifts.end());
            int j=sqrt(gifts[gifts.size()-1]);
            gifts[gifts.size()-1]=j;
            n++;
        }
        long long sum=0;
        for(int i=0;i<gifts.size();i++){
            sum+=gifts[i];
        }
        return sum;
    }
};