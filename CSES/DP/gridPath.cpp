#include <bits/stdc++.h>
#define ll long long
using namespace std;
const unsigned int M = 1000000007;

int dp[1000][1000];
string* grid = new string[1000];

int solve(int i, int j, int n){
    if(grid[n-1][n-1] == '*') return 0;
    if(grid[0][0] == '*') return 0;
    if(i == n-1 && j == n-1) return 1;
    if(i >= n || j >= n) return 0;
    if(grid[i][j] == '*') return 0;
    if(dp[i][j] != -1) return dp[i][j];
    int res = (solve(i, j+1, n) + solve(i+1, j, n))%M;
    dp[i][j] = res;
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> grid[i];
    }
    for(int i = 0; i < 1000; i++){
        for (int j = 0; j < 1000; j++){
            dp[i][j] = -1;
        }
    }
    cout << solve(0,0, n);
    return 0;
}