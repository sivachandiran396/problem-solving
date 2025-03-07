class Solution {
public:
void SieveOfEratosthenes(int low, int high, std::vector<int>& primes) {
    std::vector<bool> sieve(high + 1, true); 
    sieve[0] = sieve[1] = false; 
    for (int i = 2; i * i <= high; ++i) {
        if (sieve[i]) {
            for (int j = i * i; j <= high; j += i) {
                sieve[j] = false;
            }
        }
    }
    for (int i = low; i <= high; ++i) {
        if (sieve[i]) {
            primes.push_back(i); 
        }
    }
}
    vector<int> closestPrimes(int left,int right) {
        vector<int> vec;
        SieveOfEratosthenes(left,right,vec);
        if(vec.size()==2) return vec;
        if(vec.size()>2){
            vector<int> ans;
            int min=vec[1]-vec[0];
            int f=vec[0];
            int s=vec[1];
            for(int i=0;i<vec.size()-1;i++){
                if((vec[i+1]-vec[i])<min){
                    f=vec[i];
                    s=vec[i+1];
                    min=vec[i+1]-vec[i];
                }
            }
            ans.push_back(f);
            ans.push_back(s);
            return ans;
        }
        vector<int> ans(2,-1);
        return ans;
    }
};