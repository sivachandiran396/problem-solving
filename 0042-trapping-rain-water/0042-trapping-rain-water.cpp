class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> leftmax(height.size());
        vector<int> rightmax(height.size());
        leftmax[0]=height[0];
        rightmax[height.size()-1]=height[height.size()-1];
        for(int i=1;i<height.size();i++){
            leftmax[i]=max(leftmax[i-1],height[i]);
        }
        for(int i=height.size()-2;i>=0;i--){
            rightmax[i]=max(rightmax[i+1],height[i]);
        }
        int ans=0;
        for(int i=0;i<height.size();i++){
            int mn=min(leftmax[i],rightmax[i]);
            ans+=(mn-height[i]);
        }
        return ans;
    }
};