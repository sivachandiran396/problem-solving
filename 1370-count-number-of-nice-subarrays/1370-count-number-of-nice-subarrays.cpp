class Solution {
public: 
int check(vector<int>& nums,int goal){
        if(goal < 0)
        return 0;
        int l = 0;
        int r = 0;
        int ans = 0;
        int n = nums.size();
        int sum = 0;

        while(r < n){
        sum += (nums[r]%2);

        while(sum > goal){
            sum -= (nums[l]%2);
            l++;
        }
        ans += (r-l+1);
        r++;
        }
        return ans;
        
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
       return check(nums,k)-check(nums,k-1);
    }
};