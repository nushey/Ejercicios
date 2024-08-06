#include <bits/stdc++.h>
using namespace std;

void solve(vector<pair<pair<int,int>,int>> &v,vector<int> &res, int &towers, int n){
    auto it = v.begin();
    while(n > 0){
        int max = -1;
        vector<pair<pair<int,int>,int>> aux;
        while(it != v.end()){
            if(it->first.second > max){
                max = it->first.first;
                res[it->second] = towers;
                ++it;
                n--;
            }
            else{
                aux.push_back(*it);
                ++it;                  
            }
        }
        v = aux;
        if(n > 0) towers++;
        it = v.begin(); // Reinicia el iterador al comienzo del mapa para la próxima torre
    }
}


int main() {
    
    int n;
    cin >> n;
    vector<pair<pair<int,int>,int>> v;
    vector<int> res(n);
    for(int i = 0; i < n; i++){
        int a,b;
        cin >> a >> b;
        v.push_back({{b,a},i});
    }
    sort(v.begin(),v.end());
    int towers = 1;
    solve(v,res,towers, n);
    cout << towers << '\n';
    for(auto x:res){
        cout << x << " ";
    }
    return 0;
}