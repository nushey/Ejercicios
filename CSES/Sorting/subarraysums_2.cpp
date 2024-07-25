#include <bits/stdc++.h>
using namespace std;

int main() {
   int n,m;
   cin >> n >> m;
   vector<int> nums(n);
   for(auto &x:nums) cin >> x;

   int start = 0;
   int end = 0;
   int cant = 0;
   while(start < n){
        end = start;
        int sum = 0;
        while(end < n){
            sum += nums[end];
            end++;
            if(sum > m && nums[end] > sum){
                end = n+1;
            }
            if(sum < m && nums[end] < sum){
                end = n+1;
            }
            if(sum == m){
                cant++;
            }
        }
        start++;
   }
    cout << cant << endl;
    return 0;
}