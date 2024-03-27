#include <iostream>;
using namespace std;
 
void weirdAlgorithm() {
    long n;
    cin >> n;
    cout << n;
    while (n != 1) {    
        if (n % 2 == 0) {
            n = n / 2;
        }
        else {
            n = (n * 3 + 1);
        }
        cout << " " << n;
    }
}
 
 
 
int main()
{
    weirdAlgorithm();
    return 0;
}