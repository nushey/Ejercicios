#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll cantDigitos(ll n) {
    ll res = 0;
    // Mientras n es mayor que cero
    while (n > 0) {
        // Incrementamos res en 1 cada vez que encontramos un bit activo (1)
        // Y desplazamos n una posición a la derecha
        res += n & 1;
        n >>= 1;
    }
    return res;
}

void solve(ll n){
    if(n == 1) cout << 1;
    else{
        ll res = 0;
        for(int i = n; i >= 0; i--){
            res+=cantDigitos(i);           
        }
        cout << res;
    }
}


int main() {
    ll n;
    cin >> n;
    solve(n);
    return 0;
}
