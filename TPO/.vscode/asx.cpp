#include <bits/stdc++.h>
using namespace std;

void solve(vector<long>& coins, int n, set<long>& possible_sums, int i, long suma) {
    if (i == n) {
        possible_sums.insert(suma);
        return;
    }

    solve(coins, n, possible_sums, i + 1, suma + coins[i]);
    solve(coins, n, possible_sums, i + 1, suma);
}

int main() {
    int n;
    cin >> n;
    vector<long> coins(n);
    for (int i = 0; i < n; ++i) {
        cin >> coins[i];
    }

    set<long> possible_sums;
    solve(coins, n, possible_sums, 0, 0);

    int smallest_sum = 1;
    while (possible_sums.count(smallest_sum)) {
        ++smallest_sum;
    }

    cout << smallest_sum << "\n";
    return 0;
}
