#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    long n;
    cin >> n;

    vector<long> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    long mediana;
    if (n % 2 == 1) {
        mediana = nums[n / 2];
    } else {
        mediana = (nums[n / 2 - 1] + nums[n / 2]) / 2;
    }

    long total = 0;
    for(int i = 0; i < n; i++){
        total += abs(mediana - nums[i]);
    }

    cout << total;

    return 0;
}
