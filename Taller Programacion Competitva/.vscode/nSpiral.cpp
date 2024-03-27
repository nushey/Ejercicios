#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long y, x;
        cin >> y >> x;

        long long result;
        if (x >= y) {
            if (x % 2 != 0) // Si la columna es IMpar
                result = x * x - y + 1;
            else 
                result = (x - 1) * (x - 1) + y;
        } else {
            if (y % 2 == 0) // Si la fila es par
                result = y * y - x + 1;
            else // Si la fila es par
                result = (y - 1) * (y - 1) + x;
        }
        cout << result << "\n";
    }

    return 0;
}
