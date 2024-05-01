#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll n, m;
    cin >> n >> m;
    set<ll> numbers;
    numbers.insert(0);
    numbers.insert(n);
    multiset<ll> distances;
    distances.insert(n);
    for(int i = 0; i < m; i++){
        ll k;
        cin >> k;
        numbers.insert(k);
        auto it = numbers.find(k);
        auto it2 = it;
        auto itIzq = --it;
        auto itDer = ++it2;
        ll izq = *itIzq;
        ll der = *itDer;
        ll disDel = der - izq;
        ll disAdd1 = k - izq;
        ll disAdd2 = der - k;
        distances.erase(distances.find(disDel));
        distances.insert(disAdd1);
        distances.insert(disAdd2);
        cout << *distances.rbegin()<< " ";
    }
    
    
    return 0;
}