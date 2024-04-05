#include <iostream>
using namespace std;

void Repetitions() {
    string a;
    cin >> a;
    int max = 1;
    int rep = 1;
    char b = a[0];
    char c;
    for (int i = 1; i < a.size(); i++) {
        c = a[i];
        if (b == c) ++rep;
        if (rep > max) max = rep;
        if (b != c) rep = 1, b = a[i];
    }
    cout << max;
}
 
 
 
int main()
{
    Repetitions();
    return 0;
}