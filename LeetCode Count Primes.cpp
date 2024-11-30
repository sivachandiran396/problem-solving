class Solution {
public:
int  SieveOfEratosthenes(int n)
{
    vector<bool> prime(n + 1, true);

  for (int p = 2; p * p < n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }int c=0;
    for (int p = 2; p < n; p++)
        if (prime[p])
            c++;
    return c;        
}


int countPrimes(int n){
      int count=SieveOfEratosthenes(n);
        return count;
    }
};