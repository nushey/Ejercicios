#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,x;
    cin >> n >> x;
    int* arr =  new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int cant = 0;
    int start = 0;
    int end = 0;
    int sum = 0;
    while(end < n){
        while(end < n && sum < x){
            sum += arr[end];
            end++;
        }

        while(start <= end && sum > x){
            sum -= arr[start];
            start++;
        }

        if(sum == x){
            cant++;
            sum -= arr[start];
            start++;
        }
    }
    cout << cant;
    return 0;
}