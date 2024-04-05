#include <iostream>
#include <math.h>
using namespace std;

int pot(int n, int m, int MOD){
    int res  = n;
    for(int i = 2; i<=m;i++){
        res *= n;
        res = res%MOD;
    }
    return res;
}

int main() {
    
    int n;
    const int MOD = 1000000007;
    cin >> n;
    int res = pot(2, n, MOD);
    cout << res;
    return 0;
}