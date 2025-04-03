#include<bits/stdc++.h>
using namespace std;
void bfs()
{

}
int main()
{
    int V,E ;
    vector<int> adj[V+1];
    cout<<"Enter the number of vertices: ";
    cin>>V;
    cout<<"Enter the number of Edges : ";
    cin>>E;
    cout<<"Storing the edges : ";
    for(int i = 0; i < E; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    return 0;
}