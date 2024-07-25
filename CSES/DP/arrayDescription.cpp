#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007;

int main() {
    int n, m;
    cin >> n >> m;
    vector<long long> arr(n);
    for(auto &x:arr) cin >> x;

    vector<vector<long long>> dp(n+1, vector<long long>(m+1, 0));

    for(int i = 0; i <= m; i++){
        if(arr[0] == 0){
            dp[0][i] = i+1;
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(arr[i] == 0){
                dp[i][j] = (dp[i][j-1]) % MOD;
            }
   
        }
    }

    // //cout matrix para debug
    // for(int i = 0; i <= n; i++){
    //     for(int j = 0; j <= m; j++){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    cout << "" ;

    

    return 0;
}