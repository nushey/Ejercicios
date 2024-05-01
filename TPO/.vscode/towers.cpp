#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    
    ll n;
    cin >> n;
    multiset<ll> towers;
    for(int i = 0;i<n;i++){
        ll m;
        cin >> m;
        auto it = towers.upper_bound((towers.begin(), towers.end(), m));
        if(it == towers.end()){
            towers.insert(m);
        }
        else{
            if(*it <= m){
                towers.insert(m);
            }
            else{
                towers.erase(it);
                towers.insert(m);
            }
        }
        
    }
    cout << towers.size();
    return 0;
}