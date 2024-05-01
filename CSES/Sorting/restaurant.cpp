#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

struct Evento{
    int hora;
    int tipo;
};

bool compararEventos(Evento a, Evento b){
    if(a.hora != b.hora){
        return a.hora < b.hora;
    }
    return a.tipo < a.tipo;
}

int main() {
    long n;
    cin >> n;
    vector<Evento> datos;
    for(int i = 0; i < n; i++){
        long llegada,salida;
        cin >> llegada;
        cin >> salida;
        datos.push_back({llegada, 0});
        datos.push_back({salida, 1});
    }
    sort(datos.begin(), datos.end(), compararEventos);
    int maxClientes = 0;
    int actualClientes = 0;
    for(auto x:datos){
        if(x.tipo == 0){
            actualClientes++;
            maxClientes = max(maxClientes, actualClientes);
        }
        else{
            actualClientes--;
        }
    }
    cout << maxClientes;
    return 0;
}