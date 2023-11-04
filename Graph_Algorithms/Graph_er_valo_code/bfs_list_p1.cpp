#include<bits/stdc++.h>
using namespace std;

#define MX 1110
vector <int> graph[MX];
bool visited[MX];
int dist[MX];


void bfs(int source){
    queue<int>q;
    visited[source]=1;
    dist[source]=0;
    q.push(source);

    while (!q.empty()){
        int node =q.front();
        q.pop();

        for (int i=0;i<graph[node].size();i++){
            int next = graph[node][i];
            if (visited[next]==0){
                visited[next]=1;
                dist[next]=dist[node]+1;

                q.push(next);
            }
        }

    }

}


int main(){

    int node ,edge;
    cin>>node >>edge;

    for (int i=0;i<edge;i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);


        int source;
        cin>>source;

        bfs(source);

         cout << "From node " << source << endl;
    for (int i = 1; i <= node; i++){
        cout << "Distance of " << i << " is : " << dist[i] << endl;
    }

        



    }


    return 0;
}