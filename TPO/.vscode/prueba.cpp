#include <iostream>
#include <string>
using namespace std;

int main() {
    string a = "asd";
    string b = {a[2]};   
    string c = a+b;
    for(int i = 0; i < c.size(); i++){
        cout << c[i] << " - ";
    }
    return 0;
}