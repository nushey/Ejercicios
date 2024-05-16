#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, x;
    cin >> n >> x;
    vector<int> prices(n);
    vector<int> pages(n);
    for(auto &x: prices) cin >> x;
    for(auto &x: pages) cin >> x;

    int** dp = new int*[n+1];
    for(int i = 0; i <= n; i++){
        dp[i] = new int[x+1];
    }
    for(int i = 0; i <= x; i++){
        dp[0][i] = 0;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= x; j++){
            dp[i][j] = -1;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= x; j++){
            if(prices[i] <= j){
                dp[i+1][j] = max(dp[i][j], dp[i][j-prices[i]] + pages[i]);
            }
            else dp[i+1][j] = dp[i][j];
        }
    }
    
    cout << dp[n][x];
    return 0;
}