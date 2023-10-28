#include<bits/stdc++.h>
using namespace std;
int main(){
    int node =5;
    int adj[node][node];
    int edge ;
    cin>>edge;
    int n1,n2;
    for (int i=0;i<edge;i++){
        cin>>n1>>n2;
        adj[n1][n2]=1;
        adj[n2][n1]=1;
    }

    dfs();




    return 0;
}