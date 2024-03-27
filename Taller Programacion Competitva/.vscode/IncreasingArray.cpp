#include <iostream>
using namespace std;

void IncreasingArray() {
    long long cant = 0;
    long long n;
    cin >> n;
    long long* data = new long long[n];
    for (long i = 0; i < n;i++) {
        long long aux;
        cin >> aux;
        data[i] = aux;
        if (i >= 1) {
            if (data[i] < data[i - 1]) {
                cant += (data[i-1] - data[i]);
                data[i] = data[i - 1];
            }
        }
    }
    cout << cant;
}

int main() {
    IncreasingArray();
    return 0;
}