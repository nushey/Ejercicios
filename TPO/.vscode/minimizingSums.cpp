#include <bits/stdc++.h>
using namespace std;
 
vector<int> dp;
 
int solve(int x, vector<int> coins){
    if(x == 0) return 0;
    if(x < 0) return -1;
    if(dp[x] != -2) return dp[x];
    int res = INT_MAX;
    for(int i = 0; i < coins.size(); i++){
        int aux = solve(x-coins[i],coins);
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
    dp.assign(x+1,-2);
    cout << solve(x, coins);
 
    return 0;
}