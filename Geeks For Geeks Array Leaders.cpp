class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> vec;
        int max=0;
        for(int i=arr.size()-1;i>=0;i--){
            if(max<=arr[i]){
                max=arr[i];
                vec.push_back(max);
            }
        }
        reverse(vec.begin(),vec.end());
        return vec;
    }
};