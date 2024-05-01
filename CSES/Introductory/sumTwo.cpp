#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<long, long> a, pair<long,long> b){
    return a.first < b.first;
}

void solve(vector<pair<long,long>> data, long n, long x){
    if(n == 1){
        cout << "IMPOSSIBLE";
        return;
    }
    else{
        long i = 0;
        long j = n-1;
         while (i < j) {
        if (data[i].first + data[j].first == x) {
            cout << data[i].second + 1 << " " << data[j].second + 1;
            return;
        } else if (data[i].first + data[j].first < x) {
            i++;
        } else {
            j--;
        }
    }

    cout << "IMPOSSIBLE";
    }
}

int main() {

    long n,x;
    cin >> n >> x;
    vector<pair<long,long>> data;
    for(long i = 0; i < n; i++){
        long a;
        cin >> a;
        data.push_back({a,i});
    }
    sort(data.begin(), data.end(), compare);
    solve(data, n, x);
    return 0;
}