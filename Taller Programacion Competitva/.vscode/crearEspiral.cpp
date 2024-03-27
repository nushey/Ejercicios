#include <iostream>
using namespace std;
 
int main() {
 
    int m;
    cin >> m;
    int a[m][m] = {{0}};
    bool sDer = false;
    bool sIzq = false;
    bool sAba = false;
    int n = 1;
    int k = 1;
    int i = 0;
    int j = 0;
    while(n <= (m*m)){
        if(a[i][j] == 0){
            a[i][j] = n;
            n++;
        }
        if(!sDer){
            j++;
            a[i][j] = n;
            n++;
            sDer = true;
        }
        if(sDer && !sAba){
            int p = 1;
            while(p <= k){
                i++;
                a[i][j] = n;
                n++;
                p++;
            }       
            sAba = true;
        }
        if(sDer && sAba && !sIzq){
            int p = 1;
            while(p <= k){
                j--;
                a[i][j] = n;
                n++;
                p++;
            }
            sIzq = true;
        }
        if(sDer && sAba && sIzq){
            i++;
            k++;
            a[i][j] = n;
            n++;
            int p = 1;
            while(p <= k){
                j++;
                a[i][j] = n;
                n++;
                p++;
            }
            p = 1;
            while(p <= k){
                i--;
                a[i][j] = n;
                n++;
                p++;
            }
            k++;
        }
        sDer = false;
        sAba = false;
        sIzq = false;
 
    }   
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j] << " ";  
        }
        cout << endl;
    }        
    return 0;
}