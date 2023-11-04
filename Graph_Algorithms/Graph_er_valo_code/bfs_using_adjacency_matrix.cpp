#include<bits/stdc++.h>
using namespace std;

int adj[100][100];
int dis[100],vis[100],par[100];

int node,edge;

void bfs(int st)
{
    queue< int > q;
    q.push(st);
    dis[st] = 0;
    par[st] = -1;
    while(!q.empty())
    {
        int u = q.front(); // u = 1
        q.pop();
        vis[u] = 1;
        for(int i=1; i<= node; i++)
        {
            if(adj[u][i] == 1)
            {
                int v = i; // 2 3
                if(vis[v]==0)
                {
                    vis[v]=1;
                    dis[v] = dis[u] + 1;
                    par[v] = u;
                    q.push(v);  
                }
            }
        }
    }
}

int main()
{
    cin>>node>>edge;
    int a,b;
    for(int i=1; i<=edge; i++)
    {
        cin>>a>>b;
        adj[a][b] = 1;
        adj[b][a] = 1;
    }   
    bfs(1);
    int x ;
    while(cin>>x)
    {
        cout<<x<< " distance : " << dis[x]<<endl;
    }
    return 0;
}
