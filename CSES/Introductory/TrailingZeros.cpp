#include <iostream>
#include <math.h>
using namespace std;
int pot(int n, int m){
    int res  = n;
    for(int i = 2; i<=m;i++){
        res *= n;
    }
    return res;
}

int plusPot(int n){
    bool mayor = true;
    int pl = 1;
    for(int i = 2; mayor; i++){
        if((pot(5,i) > n)){
            mayor = false;
        }
        else{
            pl = i;
        }
    }
    if(pl == 1) pl = 0;
    return pl;
}

int main() {
    int n;
    cin >> n;
    int res = ceil(n/5);
    int plus = plusPot(n);
    while(plus >= 2){
        res += ceil(n/pot(5,plus));
        plus--;
    }

    cout << res;
}