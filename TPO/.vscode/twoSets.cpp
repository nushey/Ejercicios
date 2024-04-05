#include <iostream>
#include <math.h>
using namespace std;

void tS(){
    long n;
    cin >> n;
    if(n%2 == 0){
        if((n/2) % 2 == 0){
            long i = 1;
            long j = n;
            cout << "YES" << endl;
            cout << n/2 << endl;
            while(j > i){
                cout << i << " " << j << " ";
                i+= 2;
                j-= 2;
            }
            cout << endl;
            i = 2;
            j = n-1;
            cout << n/2 << endl;
            while(j > i){
                cout << i << " " << j << " ";
                i+= 2;
                j-= 2;
            }
        }
        else{
            cout << "NO";
        }
    }
    else{
        float m = n;
        long x = floor(m/2);
        long y = ceil(m/2);
        if(x % 2 != 0){
            long i = 1;
            long j = n-1;
            cout << "YES" << endl;
            cout << y << endl;
            cout << i << " " << j << " ";
            i++;
            j--;
            while(j > i){
                cout << i << " " << j << " ";
                i+= 2;
                j-= 2;      
            }
            cout << endl;
            i = 3;
            j = n;
            cout << x << endl;
            cout << j << " ";
            j-=3;
            while(j > i){
                cout << i << " " << j << " ";
                i+= 2;
                j-= 2;
            }
        }
        else{
            cout << "NO";
        }
    }
}

int main() {
    tS();
    return 0;
}