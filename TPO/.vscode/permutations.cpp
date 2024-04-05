#include <iostream>
using namespace std;

// Introductory problem 4
int main() {
    int n;
    cin >> n;
    if (n == 1) cout << 1;
    else if( n== 2 || n == 3) cout << "NO SOLUTION";
    else if(n==4){
        cout << 2 << " " << 4 << " " << 1 << " " << 3;
    }
    else{
        int* a = new int[n];
        int m = 0;
        int l = 1;
        while(m < n){
            a[m] = l;
            m=m+2;
            l++;
        }
        m = 1;
        while(m < n){
            a[m] = l;
            m=m+2;
            l++;
        }
        for(int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
    }
    return 0;
}