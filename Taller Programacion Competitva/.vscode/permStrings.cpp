#include <iostream>
#include <string>
#include <set>
using namespace std;

bool estaL(string a, int l, char b){
    bool esta = false;
    for(int i = 0; i < l && !esta; i++){
        if(a[i] == b) esta = true;
    }
    return esta;
}

int cantLetra(string a, int l, char b){
    int cant = 0;
    for(int i = 0; i < l; i++){
        if(a[i] == b) cant++;
    }
    return cant;
}

int fact(int n){
    if(n==0) return 1;
    int res  = n;
    for(int i = 1; i<n;i++){
        res *= i;
    }
    return res;
}

void swap(string &s, int i, int k){
    char aux = s[i];
    s[i] = s[k];
    s[k] = aux;
}


void permute(string s,int l, int r, set<string> &set){
    if(l == r){
        set.insert(s);
    }
    else{
        for(int i = l; i<=r; i++){
            swap(s,l,i);
            permute(s, l+1,r, set);
            swap(s,l,i);
        }
    }
}

int main() {
    string str;
    cin >> str;
    set<string> set;
    int cantStr = str.size();  
    permute(str, 0, cantStr-1, set);
    cout << set.size() << endl;
    for(auto str : set){
        cout << str << endl;
    }
    return 0;
}