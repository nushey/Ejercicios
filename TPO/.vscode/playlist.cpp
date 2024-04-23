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
}