#include <iostream>
#include <vector>
#include <utility>
using namespace std;

// Función para resolver las Torres de Hanoi e imprimir los movimientos
void hanoi(int n, int origen, int auxiliar, int destino, vector<pair<int, int>>& movimientos) {
    if (n == 1) {
        movimientos.push_back({origen, destino});
    } else {
        hanoi(n - 1, origen, destino, auxiliar, movimientos);
        movimientos.push_back({origen, destino});
        hanoi(n - 1, auxiliar, origen, destino, movimientos);
    }
}

int main() {
    int n;
    cin >> n;

    // Vector para almacenar los movimientos
    vector<pair<int, int>> movimientos;

    // Llamar a la función hanoi para resolver el problema
    hanoi(n, 1, 2, 3, movimientos);

    // Imprimir la cantidad mínima de movimientos
    cout << movimientos.size() << endl;

    // Imprimir los movimientos
    for (auto movimiento : movimientos) {
        cout << movimiento.first << " " << movimiento.second << endl;
    }

    return 0;
}
