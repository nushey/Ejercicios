#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long n, m, k;
    cin >> n >> m >> k;

    vector<long> applicants(n);
    vector<long> apartments(m);

    for(int i = 0; i < n; i++){
        cin >> applicants[i];
    }
    for(int i = 0; i < m; i++){
        cin >> apartments[i];
    }

    sort(applicants.begin(), applicants.end());
    sort(apartments.begin(), apartments.end());

    long c = 0;
    long i = 0;
    long j = 0;

    while(j < m && i < n){
        if(applicants[i] < apartments[j]-k) i++;
        else if(applicants[i] > apartments[j]+k) j++;
        else{
            i++;
            j++;
            c++;
        }
    }
    cout << c;
    return 0;
}
