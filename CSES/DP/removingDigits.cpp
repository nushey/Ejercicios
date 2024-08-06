#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
    
    int n;
    cin >> n;
    vector<int> dp(n+1, 0);
    dp[0] = 0;
    for(int i = 1; i <= n; i++){
        dp[i] = 1e9;
        int x = i;
        while(x){
            dp[i] = min(dp[i], dp[i-x%10]+1);
            x /= 10;
        }
    } 
    cout << dp[n];
    return 0;
}