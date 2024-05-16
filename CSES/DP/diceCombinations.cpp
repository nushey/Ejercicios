#include <bits/stdc++.h>
using namespace std;
const unsigned int M = 1000000007;

vector<long long> dp;

long solve(long n){
    if(n == 0) return 1;
    if(n < 0) return 0;
    if(dp[n] != -1) return dp[n];
    long res = 0;
    for(int i = 1; i <= 6; i++){
        res = (res + solve(n - i)) % M;
    }
    dp[n] = res;
    return res;
}

int main() {
    
    long long n;
    cin >> n;
    dp = vector<long long>(n+1,-1);
    cout << solve(n);
    return 0;
}