#include <iostream>
#include <math.h>
#include <string>
using namespace std;


int main() {
    long n,m,l;
    cin >> n;
    while(n >= 1){
        cin >> m;
        cin >> l;
        if(m == 0 && l == 0) cout << "YES" << endl;
        else if((m!= 0 && l == 0) || (m==0 && l!= 0)) cout << "NO" << endl;
        else if (m*2 < l || l*2 < m) cout << "NO" << endl;
        else{
            double m2 = m*1.0;
            double l2 = l*1.0;
            double a = m2/3 + l2/3;
            if(a == ceil(a)) cout << "YES" << endl;
            else cout << "NO" << endl;
        }   
        
        n--;
    }
    return 0;
}