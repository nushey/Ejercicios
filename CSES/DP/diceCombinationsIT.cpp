#include <bits/stdc++.h>
using namespace std;
const unsigned int M = 1000000007;

int main() {
    int n;
    cin >> n;
    int* dp = new int[n+1];
    // Se que para el primer caso es 1
    dp[0] = 1;
    for(int i = 1; i <= n; i++){
        for(int m = 1; m <= 6 && m <= i; m++){
            dp[i] = (dp[i]+dp[i-m])%M;
        }
    }
    cout << dp[n];
    return 0;
}