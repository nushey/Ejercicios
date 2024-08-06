#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> w(n);
    vector<int> p(n);
    for(auto &x:w) cin >> x;
    for(auto &x:p) cin >> x;

    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= m; j++){
            if(j >= w[i]){
                dp[i+1][j] = max(dp[i][j], dp[i][j - w[i]] + p[i]);
            }
            else{
                dp[i+1][j] = dp[i][j];
            }
        }
    }
    cout << dp[n][m];

    return 0;
}