#include <bits/stdc++.h>
using namespace std;
const int M = 100000007;
int main() {
    int n, x;
    cin >> n >> x;
    vector<int> coins(n);
    for(auto &c:coins) cin >> c;
 
    int* dp = new int[x+1];
    for(int i = 0; i <= x; i++) dp[i] = 0;
    dp[0] = 1;
    sort(coins.begin(), coins.end());
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