#include <bits/stdc++.h>
using namespace std;
const unsigned int M = 1000000007;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> coins;
    for(int i = 0; i < n; i++){
        int c;
        cin >> c;
        coins.push_back(c);
    }
    int* dp = new int[x+1];
    dp[0] = 1;
    for(int i = 1; i<=x;i++){
        for(int j = 0; j < n; j++){
            if(coins[j] <=i){
                dp[i] = (dp[i]+dp[i-coins[j]])%M;
            }
        }
    }
    cout << dp[x];
    return 0;
}