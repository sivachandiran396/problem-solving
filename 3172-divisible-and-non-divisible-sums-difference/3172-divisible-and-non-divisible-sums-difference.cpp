class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sum=0,rem=0;
        for(int i=1;i<=n;i++){
            if(i%m==0){
                rem+=i;
                continue;
            }
            sum+=i;
        }
        return sum-rem;
    }
};