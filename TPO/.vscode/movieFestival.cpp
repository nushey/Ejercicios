#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
struct Film{
    int begin;
    int end; 
};
 
bool compareFilm(Film a, Film b){
    if(a.end != b.end){
        return a.end < b.end;
    }
    return a.begin < b.begin;
};
   
 
int main() {
    int n;
    cin >> n;
    vector<Film> films;

    for(int i = 0; i < n; i++){
        int begin,end;
        cin >> begin >> end;
        films.push_back({begin,end});
    }
    sort(films.begin(), films.end(), compareFilm);
    int maxFilms = 0;
    int end = -999;
    for(auto x : films){
        if(x.begin >= end){
            end = x.end;
            maxFilms++;
        }
    }
    cout << maxFilms;
    return 0;
}