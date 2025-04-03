#include <bits/stdc++.h>
using namespace std;
void bfs(int x, vector<int> adj[], vector<int> &vis)
{
    queue<int> q;
    q.push(x);
    vis[x] = 1;
    cout << "BFS Traversal of the graph : " << x << " ";
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (auto &it : adj[node])
        {
            if (vis[it] != 1)
            {
                vis[it] = 1;
                q.push(it);
                cout << it << " ";
            }
        }
    }
}
void dfs(int x, vector<int> adj[], vector<int> &vis)
{
    vis[x] = 1;
    cout << x << " ";
    for (auto &it : adj[x])
    {
        if (vis[it] != 1)
            dfs(it, adj, vis);
    }
}
int main()
{
    int V, E;
    cout << "Enter the number of vertices: ";
    cin >> V;
    cout << "Enter the number of Edges : ";
    cin >> E;
    vector<int> adj[V + 1];
    cout << "Enter the edges : " << endl;
    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    vector<int> vis(V + 1, 0);
    cout << "Enter the starting vertex: ";
    int x;
    cin >> x;
    bfs(x, adj, vis);
    cout << "\nDFS Traversal of the Graph : ";
    for(auto &it : vis)
    it = 0;
    dfs(x, adj, vis);
    return 0;
}