#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long n, m;
    cin >> n >> m;

    vector<long> tickets(n);
    vector<long> customers(m);

    for (int i = 0; i < n; i++) {
        cin >> tickets[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> customers[i];
    }
    sort(tickets.begin(), tickets.end());

    int posMin = 0;
    for(int i = 0; i < m; i++){
        if(customers[i] < tickets[posMin]){
            cout << -1 << endl;
        }
        else{
            int j = posMin;
            int c = tickets[posMin];
            int k = j;
            while(k < n && tickets[k] <= customers[i]){
                c = tickets[k];
                j = k;
                k++;
            }
            if(posMin == j) posMin++;
            cout << c << endl;
        }   
    }

    return 0;
}
