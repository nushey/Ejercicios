#include <iostream>
using namespace std;
#define NULL __null
 
void imp(int* res, int n){
    for(int i = 1; i <= n;i++){
         cout << res[i] << " ";
    }
    cout << endl;
}
 
void permutations(int n, int m, bool* a, int k, int* res) {
    a[m] = true; // Marca el número como utilizado
    ++k;
    res[k] = m;
    if(k == n){
        imp(res, n);
        return;
    }
    for(int i = 2; m - i > 0; i++){
        if(!a[m - i]) {
            permutations(n, m - i, a, k, res);
            return;
        } 
    }
    for(int i = 2; m + i <= n; i++){
        if(!a[m + i]) {
            permutations(n, m + i, a, k, res);
            return;
        } 
    }  
}
 
 // Introductory problem 4 hard way (All permutations, just one needed)
int main() {
    int n;
    cin >> n;
    if (n == 1) cout << 1;
    else if( n== 2 || n == 3) cout << "NO SOLUTION";
    else{
        bool a[n+1] = {false};
        int* res = new int[n+1];
        for (int i = 1; i <= n; i++) {     
            permutations(n, i, a, 0, res);

            fill(a, a+(n+1), false);
        }
    } 
 
    return 0;
}