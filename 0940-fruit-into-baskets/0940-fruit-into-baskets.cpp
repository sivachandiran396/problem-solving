class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l=0,r=0,n=fruits.size();
        int maxlen=0;
        map<int,int> mp;
        while(r<n){
            mp[fruits[r]]++;
            if(mp.size()>2){
                mp[fruits[l]]--;
                if(mp[fruits[l]]==0) mp.erase(fruits[l]);
                l++;
            }
            if(mp.size()<=2){
                int len=r-l+1;
                maxlen=max(len,maxlen);
            }
            r++;
        }
        return maxlen;
    }
};