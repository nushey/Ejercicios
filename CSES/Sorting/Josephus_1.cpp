#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n;
    cin >> n;
    vector<ll> circle(n);
    for(int i = 0; i < n; i++){
        circle[i] = i+1;
    }
    
    while(circle.size() > 1){
        vector<ll> survivors;
        for(int i = 0; i < circle.size(); i++){
            if(i%2 != 0){
                cout << circle[i] << " ";
            }
            else{
                survivors.push_back(circle[i]);
            }
        }
        if(circle.size() % 2 == 0){
            circle = survivors;
        }
        else{
            ll last = survivors.back();
            survivors.pop_back();
            circle.clear();
            circle.push_back(last);
            for(auto x : survivors){
                circle.push_back(x);
            }
        }
    }
    cout << circle[0];
    return 0;
}