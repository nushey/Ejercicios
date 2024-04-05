#include <iostream>
#include <string>
#include <set>
#include <math.h>
#define ll long long
using namespace std;


ll res;

void findMin(ll a, ll b, ll* lst, ll pos, ll n){
    if(pos < n){
        findMin(a+lst[pos], b,lst, pos+1, n);
        findMin(a, b+lst[pos],lst, pos+1, n);
    }
    else{
        res = min(res, abs(a-b));
    }
}

int main() {
    ll n;
    cin >> n;
    ll* lst = new ll[n];
    res = 10000000000;
    ll i = n;
    while(i-- > 0){
        ll m;
        cin >> m;
        lst[i] = m;
    }
    findMin(0,0,lst,0,n);
    cout << res;
    return 0;
}