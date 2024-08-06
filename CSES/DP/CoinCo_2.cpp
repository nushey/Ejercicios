#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int M = 1000000007;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> coins(n);
    for(auto &c:coins) cin >> c;
 
    vector<int> dp(x+1, 0);
    dp[0] = 1;
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= x; j++){
            if(coins[i] <= j){
                dp[j] = (dp[j] + dp[j-coins[i]])%M; 
            }
        }
    }
    cout << dp[x];
    return 0;
}