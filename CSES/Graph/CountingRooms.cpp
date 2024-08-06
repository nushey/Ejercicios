#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<char>> &g, int x, int y, vector<vector<bool>> &visited){
    visited[x][y] = true;
    int dx[] = {1,-1,0,0};
    int dy[] = {0, 0, 1, -1};

    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && nx < g.size() && ny >= 0 && ny < g[0].size() && g[nx][ny] == '.' && !visited[nx][ny]) {
            dfs(g, nx, ny, visited);
        }
    }
}

void bfs(vector<vector<char>> &g, int x, int y, vector<vector<bool>> &visited){
    visited[x][y] = true;
    int dx[] = {1,-1,0,0};
    int dy[] = {0, 0, 1, -1};
    queue<pair<int,int>> q;
    q.push({x,y});
        while(!q.empty()){
            pair<int,int> node = q.front();
            q.pop();
            for(int i = 0; i < 4; i++){             
                int nx = node.first + dx[i];
                int ny = node.second + dy[i];       
                if (nx >= 0 && nx < g.size() && ny >= 0 && ny < g[0].size() && g[nx][ny] == '.' && !visited[nx][ny]) {
                    q.push({nx, ny});
                    visited[nx][ny] = true;
                }
            }
        }
}

int countRooms(vector<vector<char>> &g){
    int n = g.size();
    int m = g[0].size();
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    int roomCount = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(g[i][j] == '.' && !visited[i][j]){
                bfs(g, i, j, visited);
                roomCount++;
            }
        }
    }
    return roomCount;
}


int main() {
    int n,m;
    cin >> n >> m;

    vector<vector<char>> g(n, vector<char>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> g[i][j];
        }
    }

    int result = countRooms(g);
    cout << result;

    return 0;
}