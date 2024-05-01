#include <bits/stdc++.h>
using namespace std;

bool compare(pair<pair<int,int>,int> a, pair<pair<int,int>,int> b){
    if(a.first.second != b.first.second){
        return a.first.second < b.first.second;
    }
    else{
        return a.first.first < b.first.first;
    }
}

int main() {
    
    int n;
    cin >> n;
    vector<pair<pair<int,int>,int>> customer;
    for(int i = 0; i < n; i++){
        int a,b;
        cin >> a >> b;
        customer.push_back({{a,b},i});
    }
    sort(customer.begin(),customer.end(),compare);
    set<pair<int,int>> res;
    int towers = 1;
    while(customer.size() > 0){
        int max = customer[0].first.second;
        res.insert({customer[0].second, towers});
        vector<pair<pair<int,int>,int>> survivors;
        for(int i = 1; i < customer.size(); i++){
            if(customer[i].first.first > max){
                res.insert({customer[i].second, towers});
                max = customer[i].first.second;
                
            }
            else{
                survivors.push_back(customer[i]);
            }
        }
        customer = survivors;
        towers++;
    }
    towers--;
    cout << towers << '\n';
    for(auto x:res){
        cout << x.second << " "; 
    }
    return 0;
}