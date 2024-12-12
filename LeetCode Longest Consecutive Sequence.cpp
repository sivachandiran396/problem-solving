class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int len=0,c=1;
        int x=nums[0];
        int y=x+1;
        for(int i=1;i<nums.size();i++){
            len=max(len,c);
            if(nums[i]==y){
                c+=1;
                len=max(len,c);
                y=y+1;
            }
            else if(nums[i]>y){
                len=max(len,c);
                c=1;
                y=nums[i];
                y++;
            }
            cout<<c<<" ";
        }
        len=max(len,c);
        return len;
    }
};