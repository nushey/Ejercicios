#include <bits/stdc++.h>
#define ll long long
using namespace std;

void addEdge(vector<vector<int>> &g, int x, int y)
{
    g[x-1].push_back(y-1);
    g[y-1].push_back(x-1);
}

vector<int> bfs(vector<vector<int>> &g, int s)
{
    vector<int> distance(g.size(), -1);
    queue<int> q;

    distance[s] = 0;
    q.push(s);

    while (!q.empty())
    {
        int n = q.front();
        q.pop();

        for (int neighbor : g[n])
        {
            if (distance[neighbor] == -1)
            {
                distance[neighbor] = distance[n] + 6;
                q.push(neighbor);
            }
        }
    }
    return distance;
}

int main()
{

    int q;
    cin >> q;
    while (q-- > 0)
    {
        int n, m, s;
        cin >> n >> m;
        vector<vector<int>> g(n);
        while (m-- > 0)
        {
            int u, v;
            cin >> u >> v;
            addEdge(g, u, v);
        }
        cin >> s;

        vector<int> res = bfs(g, s-1);
        for (size_t i = 0; i < res.size(); i++)
        {
            if (i != s-1)
            {
                cout << res[i] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}