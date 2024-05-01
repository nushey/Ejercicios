#include <iostream>
#include <climits> // For LONG_MIN
using namespace std;

long maxSum = LONG_MIN;

void solve(long* nums, long n, long i, long sum) {
    if( i == n) return;
    sum += nums[i];
    maxSum = max(maxSum, sum);
    if(sum < 0){
        sum = 0;
    }
    solve(nums, n, i+1, sum);    
}

int main() {
    long n;
    cin >> n;
    long* nums = new long[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    solve(nums, n, 0, 0);
    cout << maxSum << endl;
    return 0;
}
