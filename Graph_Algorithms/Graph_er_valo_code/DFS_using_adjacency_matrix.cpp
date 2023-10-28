#include<bits/stdc++.h>
using namespace std;
 
int adj[50][50];
int node,edge;
int color[100];
 
#define W 0
#define G 11
#define B 22
 
void dfsvisit(int x)
{
   color[x] = G;
   for(int i=1; i<=node; i++)
   {
    if(adj[x][i] == 1)
      {
        if(color[i] == W)
        {
            dfsvisit(i);
        }
      }
   }
   cout<<x<<" ";
   color[x] = B;
}
 
void dfs()
{
    for(int i=1; i<=node; i++)
    {
        if(color[i]==W)
            dfsvisit(i);
    }
}
 
int main()
{
    cin>>node>>edge;
    int x,y;
    for(int i=1; i<=edge; i++)
    {
        cin>>x>>y;
        adj[x][y] = 1;
        adj[y][x] = 1;
    }  
    dfs(); 
    return 0;
}
