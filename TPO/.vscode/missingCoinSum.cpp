#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool solve(vector<long> coins, long n, long long sum, long long aux, long i){
    if(aux == sum) return true;
    if(aux > sum) return false;
    for(int j = i; j < n; j++){
        aux += coins[j];
        return solve(coins, n, sum, aux, j+1) || solve(coins, n, sum, aux-coins[j], j+1); 
    }
    return false;
}

int main() {
    long n;
    cin >> n;
    vector<long> coins;
    for(int i = 0; i < n; i++){
        long m;
        cin >> m;
        coins.push_back(m);
    }
    sort(coins.begin(), coins.end());
    long long sum = 1;
    while(true){
        if(!solve(coins, n, sum, (ll)0, 0)){
            cout << sum;
            break;
        }
        sum++;
    }
    return 0;
}