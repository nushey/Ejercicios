#include <iostream>
#include <string>
#include <math.h>
#include <set>
using namespace std;

int main() {
    set<string> str;
    long n;
    cin >> n;
    long m = pow(2,n);
    string res(n,'0');
    while(m >= 1){
        cout << res << endl;
        str.insert(res);
        for(int i = n-1; i >= 0; i--){
            if(res[i] == '0'){
                string aux = res;
                aux[i] = '1';
                if (str.find(aux) == str.end()) {
                    i = -5;
                    res = aux;
                }   

            }
            else{
                string aux = res;
                aux[i] = '0';
                if (str.find(aux) == str.end()) {
                    i = -5;
                    res = aux;
                } 
            }
        }   
        m--;
    }
}