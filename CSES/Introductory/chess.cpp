#include <iostream>
#include <string>
#include <set>
#include <math.h>
#define ll long long
using namespace std;

ll cant;

bool puedo(string* chess, int fil, int col) {
    // Check the same row
    for (int i = 0; i < 8; i++) {
        if (chess[fil][i] == 'Q') {
            return false;
        }
    }

    // Check the same column
    for (int i = 0; i < 8; i++) {
        if (chess[i][col] == 'Q') {
            return false;
        }
    }

    // Check upper-left diagonal
    for (int i = fil, j = col; i >= 0 && j >= 0; i--, j--) {
        if (chess[i][j] == 'Q') {
            return false;
        }
    }

    // Check lower-left diagonal
    for (int i = fil, j = col; i < 8 && j >= 0; i++, j--) {
        if (chess[i][j] == 'Q') {
            return false;
        }
    }

    // Check upper-right diagonal
    for (int i = fil, j = col; i >= 0 && j < 8; i--, j++) {
        if (chess[i][j] == 'Q') {
            return false;
        }
    }

    // Check lower-right diagonal
    for (int i = fil, j = col; i < 8 && j < 8; i++, j++) {
        if (chess[i][j] == 'Q') {
            return false;
        }
    }

    return true;
}

void posibles(int col, string* chess){
    if (col < 8){
        for(int i = 0; i < 8; i++){
            if(chess[i][col]!='*' && puedo(chess, i, col)){
                chess[i][col] = 'Q';
                posibles(col+1,chess);
                chess[i][col] = '.';
            }    
        }
        
    }
    else{
        cant++;
    }
}

int main() {
    
    cant = 0;
    string* chess = new string[8];
    for(int i = 0; i < 8; i++){
        cin >> chess[i];
    }
    posibles(0,chess);
    cout << cant;
    return 0;
}