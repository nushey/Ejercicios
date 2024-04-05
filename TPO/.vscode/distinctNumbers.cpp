#include <iostream>
#include <string>
#include <set>
#include <math.h>
using namespace std;

int main() {
    long n;
    cin >> n;
    set<long> aux;
    for(long i = 0; i < n; i++){
        long m;
        cin >> m;
        aux.insert(m);
    }
    cout << aux.size();
}