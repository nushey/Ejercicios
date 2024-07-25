#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vector<int> dp(m+1, 0);
    dp[0] = 1;
    for(int i = 1; i <= m; i++){
        for(int j = 0; j < n; j++){
            if(arr[j] == 0){
                if(j > 0 && j < n-1){
                    if(abs(arr[j-1] - i) <= 1 && abs(arr[j+1] - i) <= 1){
                        dp[i] = dp[i]+1;
                    }
                }
                if(j > 0){
                    if(abs(arr[j-1] -i) <= 1){
                        dp[i] = dp[i]+1;
                    }
                }
                if(j < n-1){
                    if(abs(arr[j+1] - i) <= 1){
                        dp[i] = dp[i]+1;
                    }
                }
            }
        }
    }
    cout << dp[m-1];
    return 0;
}