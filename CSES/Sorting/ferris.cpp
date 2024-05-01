#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long n, x;
    cin >> n;
    cin >> x;
    vector<long> childs(n);
    for(int i = 0; i < n; i++){
        cin >> childs[i];
    }
    sort(childs.begin(),childs.end());
    long c = 0;
    long i = 0;
    long j = n-1;
    while(i <= j){
        if(childs[j] + childs[i] <= x){
            j--;
            i++;
            c++;
        }
        else{
            j--;
            c++;
        }
    }
    cout << c;
    return 0;
}