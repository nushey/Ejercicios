#include <bits/stdc++.h>
using namespace std;
const unsigned int M = 1000000007;

long solve(long n, vector<long long> &sums){
    if(n == 0) return 1;
    if(n < 0) return 0;
    if(sums[n] != -1) return sums[n];
    long res = 0;
    for(int i = 1; i <= 6; i++){
        res = (res + solve(n - i, sums)) % M;
    }
    sums[n] = res;
    return res;
}

int main() {
    
    long long n;
    cin >> n;
    vector<long long> sums(n+1,-1);
    cout << solve(n,sums);
    return 0;
}