#include <bits/stdc++.h>
using namespace std;

int main()
{
///Adjacency List:
    int v, e;
    cout<<"Enter number of Node: ";
    cin>>v;
    cout<<"Enter number of Edges: ";
    cin>>e;
    vector <int> adj[v+1];

    for(int i=1; i<=e; i++)
    {
        int n1, n2;
        cout<<"Enter two Nodes: ";
        cin>>n1>>n2;
        adj[n1].push_back(n2);
        adj[n2].push_back(n1);
    }
///BFS Traversing:
    queue<int>q;
    vector<int>visit(v+1, 0);
    int root = 1;
    q.push(root);
    visit[root] = 1;
    vector<int> parent(v+1, 0);
    parent[root] = -1;

    while(!q.empty())
    {
        int temp = q.front();
        q.pop();

        for(auto x: adj[temp])
        {
            if(visit[x]==0)
            {
                visit[x] = visit[temp] + 1;
                parent[x] = temp;
                q.push(x);
            }
        }
    }
    for(int i=1; i<=v; i++)
    {
        cout<<parent[i]<<" ";
    }
    for(int i=1; i<=v; i++)
    {
        cout<<"Distance from root to node "<<i<<" : "<<visit[i]-1;
    }
}
