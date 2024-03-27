#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    mod = pow(10,9) + 7;
    int res = pow(2, n) % mod;
    cout << res;
    return 0;
}