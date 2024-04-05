#include <iostream>
#include <math.h>
using namespace std;

void tK(){
    long n;
    cin >> n;
    long m = 1;
    long res;
    while(m <= n){
        res = ((pow(m,2)-9)*pow(m-4,2) + (pow(m,2)-3)*4 + (pow(m,2)-4)*8 + (pow(m,2)-5)*(m-3)*4 + (pow(m,2)-7)*(m-4)*4)/2;
        cout << res << endl;
        m++;
    }
}

int main() {
    tK();
    return 0;
}
