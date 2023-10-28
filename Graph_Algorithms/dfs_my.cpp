#include<iostream>
#include<vector>
using namespace std;

vector<int> v[10005],v2;
int visited[10005];

void DFS(int node){
    visited[node]=1;
    v2.push_back(node);
    cout<<node;

    for (int i=0;i<v[node].size();i++){
        int child=v[node][i];
        if (visited[child]==0){
            DFS(child);
            
        }
    }
}


int main(){

    int nodes,edges;
    cin>>nodes>>edges;
    int x,y;
    for (int i=0;i<edges;i++){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    DFS(1);

    if (v2.size()==nodes+1){
        cout<<"YES"<<endl;
    }
    else {
        cout<<endl<<"NO"<<endl;
    }


    return 0;
}