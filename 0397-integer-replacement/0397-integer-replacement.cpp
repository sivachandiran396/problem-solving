class Solution {
public:
unordered_map<long long,int> mp;
int fun(long long n){
    if(n<=1) return 0;
    if(mp.count(n)) return mp[n];
    if(n%2==0){
       mp[n]=1+fun(n/2);
    }
    else{
       mp[n]=1+min(fun(n+1),fun(n-1));
    }
    return mp[n];
}
    int integerReplacement(int n) {
    return fun(n);    
    }
};