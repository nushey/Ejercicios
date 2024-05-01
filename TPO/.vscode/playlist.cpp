<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> songs(n);
    for(int i = 0; i < n; i++){
        cin >> songs[i];
    }
    set<int> current_songs;
    int start = 0;
    int max_length = 0;
    for(int end = 0; end < n; end++){
        while(current_songs.count(songs[end]) > 0){
            current_songs.erase(songs[start]);
            start++;
        }
        current_songs.insert(songs[end]);
        max_length = max(max_length, end - start + 1);
    }
    cout << max_length;
    return 0;
=======
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll n;
    cin >> n;
    vector<ll> songs;
    ll cant = 0;
    ll max = -1;
    for(int i = 0; i < n; i++){
        ll m;
        cin >> m;
        auto it = find(songs.begin(), songs.end(), m);
        songs.push_back(m);
        if(it != songs.end() && i != 0){
            cout << "entre" << endl;
            songs.erase(songs.begin(),it);
        }
        cant = songs.size();
        if(cant > max){
            max = cant;
        }
        for(auto x : songs){
            cout << x << "-";
        }
        cout << endl;
    }
    cout << max;
    return 0;
>>>>>>> origin/main
}