#include <bits/stdc++.h>
#define ll long long
using namespace std;


bool compare(pair<ll,ll> a, pair<ll,ll> b) {
    return a.first < b.first;
}

void checkDifs(vector<pair<ll,ll>> &vec, ll n, bool* pos, ll i, ll j){
        pos[0] = (i > 0 && vec[i-1].second > vec[i].second);
        pos[1] = (vec[i].second > vec[i+1].second);
        pos[2] = (j < n-1 && vec[j].second > vec[j+1].second);
        if(abs(i-j) != 1) pos[3] = (vec[j-1].second > vec[j].second);
        else pos[3] = false;
}

int main() {
    ios:sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll n, m;
    cin >> n >> m;
    vector<pair<ll,ll>> vec(n);
    vector<pair<ll,ll>> vec2(n);
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        vec[i] = {x, i};
        vec2[i] = {x, i};
    }

    sort(vec2.begin(), vec2.end(), compare);
    
    // Contador de rondas desordenadas para el caso INICIAL
    ll disordered = 1;
    for (int i = 0; i < n - 1; i++) {
        if (vec2[i].second > vec2[i + 1].second) disordered++;
    }

    for (int i = 0; i < m; i++) {
        ll x, y;
        cin >> x >> y;
        x--;
        y--;
        swap(vec[x], vec[y]);    

        ll p1 = vec[x].first-1;
        ll p2 = vec[y].first-1;

        // Ordeno para tener indices ascendentemente
        if (p1 > p2) swap(p1, p2);

        bool difBefore[4] = {false};
        bool difAfter[4] = {false};

        checkDifs(vec2, n, difBefore, p1, p2);   
        swap(vec2[p1],vec2[p2]); 
        checkDifs(vec2,n,difAfter, p1, p2);

        for (int j = 0; j < 4; j++) {
            if (difBefore[j] && !difAfter[j]) disordered--;
            else if (!difBefore[j] && difAfter[j]) disordered++;
        }

        cout <<  disordered << "\n";
    }
    return 0;
}