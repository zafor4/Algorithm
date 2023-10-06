#include <iostream>
#include <vector>
using namespace std;

vector<int> v[10001];
int vis[1003];
void DFS(int node){
    vis[node]=1;
    cout<<node<<"->";

    for (int i=0;i<v[node].size();i++){
        int child=v[node][i];
        if (vis[child]==0){
            DFS(child);
        }
    }
}

int main() {
    int nodes, edges;
    int x, y;
    
    cin >> nodes >> edges;
    
    for (int i = 0; i < edges; i++) {
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    DFS(1);
        // for (int i = 1; i <= nodes; i++) {
        // if (vis[i] == 0) {
        //     DFS(i);
        //     cout << endl; 
        // }
    // }

    return 0;
}
