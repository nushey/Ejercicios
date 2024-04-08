#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
    vector<int> a = {3,5,5,7,8};
    auto x = upper_bound(a.begin(), a.end(),4);
    cout << *--x;
    return 0;
}