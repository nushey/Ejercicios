#include <bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>> &g, int start) {
    queue<int> q;
    vector<bool> visited(g.size(), false);
    
    visited[start] = true;
    q.push(start);
    
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout << node << " ";
        for(int neighbor : g[node]){
            if(!visited[neighbor]){
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }
}
void dfs(vector<vector<int>> &g, int node, vector<bool> &visited){
    visited[node] = true;
    cout << node << " ";
    for(int neighbor : g[node]){
        if(!visited[neighbor]){
            dfs(g, neighbor, visited);
        }
    }
}

int main() {
    int numNodes = 10;
    vector<vector<int>> grafo(numNodes);
    grafo[0] = {1, 2, 3};
    grafo[1] = {0, 4, 5};
    grafo[2] = {0, 6, 7};
    grafo[3] = {5, 8, 9};
    grafo[4] = {1};

    vector<bool> visited(numNodes, false);
    int start;
    cin >> start;
    cout << "BFS: ";
    bfs(grafo, start);
    cout << endl << "DFS: ";
    dfs(grafo, start, visited);
    return 0;
}