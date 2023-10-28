#include <bits/stdc++.h>
using namespace std;

int adj[100][100];
int dis[100], vis[100], par[100], color[100];

int node, edge;

bool isBipartite(int start) {
    queue<int> q;
    q.push(start);
    dis[start] = 0;
    par[start] = -1;
    color[start] = 1; // Color the starting node with color 1

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        vis[u] = 1;

        for (int i = 1; i <= node; i++) {
            if (adj[u][i] == 1) {
                int v = i;
                if (vis[v] == 0) {
                    dis[v] = dis[u] + 1;
                    par[v] = u;

                    // Color the neighbor node with a different color than the current node
                    color[v] = 3 - color[u]; // Toggle between 1 and 2

                    q.push(v);
                } else {
                    // If the neighbor has the same color as the current node, the graph is not bipartite
                    if (color[v] == color[u]) {
                        return false;
                    }
                }
            }
        }
    }
    return true;
}

int main() {
    cin >> node >> edge;
    int a, b;
    for (int i = 1; i <= edge; i++) {
        cin >> a >> b;
        adj[a][b] = 1;
        adj[b][a] = 1;
    }
    if (isBipartite(1)) {
        cout << "The graph is bipartite." << endl;
    } else {
        cout << "The graph is not bipartite." << endl;
    }
    return 0;
}
