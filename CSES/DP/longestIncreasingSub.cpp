#include <bits/stdc++.h>
#define ll long long
using namespace std;

int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,1);
        int maxLength = 1;

        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] > nums[j]) {
                    dp[i] = max(dp[i], dp[j] + 1);
                 }
            }
                maxLength = max(maxLength, dp[i]);
        }

        return maxLength;
    }

int main() {
    
    return 0;
}