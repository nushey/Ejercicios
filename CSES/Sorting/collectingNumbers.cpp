#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool compare(pair<ll,ll> a, pair<ll,ll> b){
    return a.first < b.first;
}

int main() {
    ll n;
    cin >> n;
    vector<pair<ll,ll>> vec;
    for(int i = 0; i < n; i++){
        ll m;
        cin >> m;
        vec.push_back({m, i});
    }
    sort(vec.begin(), vec.end(), compare);
    ll rounds = 1;
    for(int i = 0; i < n-1; i++){
        if(vec[i].second > vec[i+1].second) rounds++;
    }
    cout << rounds;
    return 0;
}