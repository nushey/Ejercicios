#include <bits/stdc++.h>
using namespace std;
 
vector<int> dp;
 
int solve(int x, int n, vector<int> &coins){
    if(x == 0) return 0;
    if(dp[x] != -2) return dp[x];
    int res = INT_MAX;
    for(int i = 0; i < n; i++){
        if(coins[i] > x) continue;
        int aux = solve(x-coins[i],n,coins);
        if(aux != -1) res = min(res, aux+1); 
    }
    return dp[x] = (res == INT_MAX) ? -1 : res;
}
int main() {
    int n,x;
    cin >> n >> x;
    vector<int> coins(n);
    for(int i = 0; i < n; i++){
        cin >> coins[i];
    }
    dp = vector<int>(x+1,-2);
    cout << solve(x,n,coins);
 
    return 0;
}