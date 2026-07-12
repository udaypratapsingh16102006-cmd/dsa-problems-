class Solution {
public:
int const M=1e9+7;
long long power(long long x, long long n){
    
    if(n==0) return 1;
    long long half= power(x,n/2);
    half=(half*half) % M;
    if(n%2)
    return (half * x)% M;
    return half;
}
    int countGoodNumbers(long long n) {
        return (power(5,(n+1)/2) * power(4,n/2)) % M;
        
    }
};