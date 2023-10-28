#include<bits/stdc++.h>
using namespace std;
int main(){
    int nodes,edges;
    cin>>nodes>>edges;
    int adj[nodes][nodes];

    for (int i=0;i<nodes;i++){
        for (int j=0;j<nodes;j++){
            adj[i][j]=0;
        }
    }
    int x,y;

    for (int i=0;i<edges;i++){
        cin>>x>>y;
        adj[x][y]=1;
    }

    for (int i=0;i<nodes;i++){
        for (int j=0;j<nodes;j++){
            cout<<" "<<adj[i][j];
        }
        cout<<endl;
    }



    return 0;
}