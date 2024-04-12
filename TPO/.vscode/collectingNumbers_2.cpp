#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct numb {
    ll value;
    ll pos;
};

bool compare(numb a, numb b) {
    return a.value < b.value;
}

int main() {
    ll n, m;
    cin >> n >> m;
    vector<numb> vec(n);
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        vec[i] = {x, i};
    }

    vector<numb> vec2 = vec;
    sort(vec2.begin(), vec2.end(), compare);
    
    // Contador de rondas desordenadas
    ll disordered = 1;
    for (int i = 0; i < n - 1; i++) {
        if (vec2[i].pos > vec2[i + 1].pos) disordered++;
    }

    for (int i = 0; i < m; i++) {
        ll x, y;
        cin >> x >> y;
        x--;
        y--;

        swap(vec[x], vec[y]);

        if(abs(y-x) == 1){
            if(abs(vec[x].value - vec[y].value) == 1){
                if(vec[x].value > vec[y].value) disordered++;
                else disordered--;
            }
        }
        else{
            if(x > 0){
                if(vec[x-1].value > vec[x].value) disordered++;
                else if(vec[x-1].value < vec[x].value) disordered--;
            }
            if(vec[x].value > vec[x+1].value) disordered++;
            else if(vec[x].value < vec[x+1].value) disordered--;
            if(y < n-1){
                if(vec[y].value > vec[y+1].value) disordered++;
                else if(vec[y].value < vec[y+1].value) disordered--;
            }
            if(vec[y-1].value > vec[y].value) disordered++;
            else if(vec[y-1].value < vec[y].value) disordered--;
        }

        

        cout << disordered << endl;
    }
    return 0;
}
