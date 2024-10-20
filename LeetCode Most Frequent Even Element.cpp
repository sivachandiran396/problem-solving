#include<bits/stdc++.h>
class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
             mp[nums[i]]++;
            }
        }
        int max=-1,val=-1; 
        for(auto it:mp){
            if((it.second>max)||(it.second==max&&it.first<val)){
                max=it.second;
                  val=it.first;
            }
        }
        return val;
    }
};