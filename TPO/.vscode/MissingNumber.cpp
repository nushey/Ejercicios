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
 
void MissingNumber() {
    long n;
    cin >> n;
    long sum = 0;
    long m = n;
    while (m > 1) {
        int b;
        cin >> b;
        sum += b;
        --m;
    }
    long total = (n * (n + 1)) / 2;
    cout << total - sum;
}
 
 
 
int main()
{
    MissingNumber();
    return 0;
}