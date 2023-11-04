#include <bits/stdc++.h>
using namespace std;

#define MX 110

vector<int> graph[MX];
bool vis[MX];
int dist[MX];
int parent[MX];  // Array to store parent nodes for path reconstruction

void bfs(int source) {
    queue<int> Q;
    // Initialization
    vis[source] = 1;
    dist[source] = 0;
    parent[source] = -1;  // Source has no parent
    Q.push(source);

    while (!Q.empty()) {
        int node = Q.front();
        Q.pop();

        for (int i = 0; i < graph[node].size(); i++) {
            int next = graph[node][i];
            if (vis[next] == 0) {
                vis[next] = 1;           // Visit
                dist[next] = dist[node] + 1;  // Update distance
                parent[next] = node;      // Store parent for path reconstruction
                Q.push(next);             // Push to the queue
            }
        }
    }
}

void printShortestPath(int source, int node) {
    if (node == source) {
        cout << source;
        return;
    }

    printShortestPath(source, parent[node]);
    cout << " -> " << node;
}

int main() {
    int nodes, edges;
    cin >> nodes >> edges;

    for (int i = 1; i <= edges; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int source;
    cin >> source;

    bfs(source);

    cout << "From node " << source << endl;
    for (int i = 1; i <= nodes; i++) {
        cout << "Distance of " << i << " is : " << dist[i] << " - Shortest path: ";
        printShortestPath(source, i);
        cout << endl;
    }

    return 0;
}
