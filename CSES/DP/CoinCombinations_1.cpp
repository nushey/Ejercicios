#include <bits/stdc++.h>
using namespace std;
const unsigned int M = 1000000007;

vector<int> dp;

int solve(int x, vector<int> &coins, int n){
    if(x == 0) return 1;
    if(dp[x] != -1) return dp[x];
    int res = 0;
    for(int i = 0; i < n; i++){
        if(x-coins[i] < 0) continue;
        res = (res+solve(x-coins[i], coins, n))%M;
    }
    dp[x] = res;
    return res;
}

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> coins;
    for(int i = 0; i < n; i++){
        int c;
        cin >> c;
        coins.push_back(c);
    }
    dp = vector<int>(x+1,-1);
    cout << solve(x, coins, n);
    return 0;
}