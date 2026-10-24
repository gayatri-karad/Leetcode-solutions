class Solution {
public:
    int countPrimes(int n) { //sieve of erastosthenes
    if (n <= 2) return 0;
        vector<bool>isprime(n,true);
        isprime[0] = isprime[1] = false;//0 and 1 are not primes
        
        // 1. Sieve multiples up to sqrt(n)
        for(int i=2;i*i<n;i++){//  Once i exceeds $\sqrt{n}$, all composite numbers have already been marked, so you don't need to keep sieving.
            
                //if this inner for loop is outside if statement then it iwll run for every i , even for the discarded ones so it will
                //TLE cuz we want this only discard the values which arent discarded yet
                for(long long j=i*i;j<n;j+=i){//to discard multiples of i....and btw Starting at i * 2 forces the code to re-mark numbers that have already been crossed out by smaller primes (for example, multiples of large primes like 11 or 13 will be unnecessarily revisited)...so start j with i*i
                isprime[j]=false;
            }
            }
           // 2. Count all remaining primes up to n - 1
        int count = 0;
        for (int i = 2; i < n; i++) {
            if (isprime[i]) {
                count++;
            }
        } 
        
        return count;
    }
};