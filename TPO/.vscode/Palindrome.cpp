#include <iostream>
#include <math.h>
#include <string>
using namespace std;

bool estaL(string a, int l, char b){
    bool esta = false;
    for(int i = 0; i < l && !esta; i++){
        if(a[i] == b) esta = true;
    }
    return esta;
}

int cantLetra(string a, int l, char b){
    int cant = 0;
    for(int i = 0; i < l; i++){
        if(a[i] == b) cant++;
    }
    return cant;
}

int main() {
    string str;
    cin >> str;
    int cantStr = str.size();
    string letras = "";
    int cantL = 0;
    for(int i = 0; i < cantStr; i++){
        if(!estaL(letras, cantL, str[i])){
            string aux = {str[i]};
            letras += aux;
            cantL++;
        }
    }
    int* cantsL = new int[cantL];
    for(int i = 0; i < cantL;i++){
        cantsL[i] = cantLetra(str, cantStr, letras[i]);
    }
    int cantImpar = 0;
    for(int i = 0; i < cantL; i++){
        if(cantsL[i] % 2 !=0) cantImpar++;
    }
    if(cantImpar > 1) cout << "NO SOLUTION";
    else{
        if(cantStr % 2 == 0){
            if(cantImpar > 0) cout << "NO SOLUTION";
            else{
                int j = 0;
                int k = cantStr - 1;    
                for(int i = 0; i < cantL; i++){
                    int c = cantsL[i];
                    while(c > 0){                       
                        str[j] = letras[i];
                        str[k] = letras[i];
                        j++;
                        k--;
                        c=c-2;
                    }
                }
                for(int i = 0; i < cantStr; i++){
                    cout << str[i];
                }
            }
        }
        else{
            int j = 0;
                int k = cantStr - 1;    
                for(int i = 0; i < cantL; i++){
                    int c = cantsL[i];
                    if(c % 2 != 0){
                        int x = floor(cantStr/2.0);
                        if(c==1){
                            str[x] = letras[i];
                        }
                        else{
                            int y = floor(c/2.0);
                            for(int j = x-y; j <= x+y; j++){
                                str[j] = letras[i];
                            }
                        }                
                    }
                    else{
                        while(c > 0){                       
                        str[j] = letras[i];
                        str[k] = letras[i];
                        j++;
                        k--;
                        c=c-2;
                        }
                    }
                }
                for(int i = 0; i < cantStr; i++){
                    cout << str[i];
                }
        }
    }

    return 0;
}