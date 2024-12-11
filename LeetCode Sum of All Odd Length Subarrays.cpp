class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int maxsum=0;
        for(int i=0;i<arr.size();i++){
            maxsum+=arr[i];
            int sum=0;
            sum+=arr[i];
            int c=1;
            for(int j=i+1;j<arr.size();j++){
                c++;
                sum+=arr[j];
                if(c%2!=0) maxsum+=sum;
            }
        }
        return maxsum;
    }
};