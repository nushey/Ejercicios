#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
    long n;
    cin >> n;
    long m = pow(2,n);
    string res = "";
    for(int i = 0; i < n; i++){
        string aux = to_string(0);
        res+=aux;
    }
    bool puseUno = false;
    while(m >= 1){
        for(int i = 0; i < n; i++){
            cout << res[i];
        }
        cout << endl;
        if(!puseUno){
            res[n-1] = '1';
            puseUno = true;
        }
        else{
            res[n-1] = '0';
            puseUno = false;
        }
        m--;
    }
}