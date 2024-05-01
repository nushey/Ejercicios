#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <set>
using namespace std;
 
int main() {
    long n, m;
    cin >> n >> m;
    multiset<long> tickets;
    vector<long> costumers(m);
 
    for(int i = 0; i < n; i++) {
        long x;
        cin >> x;
        tickets.insert(x);
    }
 
    for(int i = 0; i < m; i++) {
        cin >> costumers[i];
    }

    for(int i = 0; i < m; i++) {
        auto it = tickets.upper_bound(costumers[i]);
        if (it == tickets.begin()) {
            cout << -1 << endl;
        } else {
            cout << *(--it) << endl;
            tickets.erase(it);
        }
    }
 
    return 0;
}