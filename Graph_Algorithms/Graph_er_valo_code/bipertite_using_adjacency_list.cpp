#include <bits/stdc++.h>
using namespace std;

#define MX 110

vector<int> graph[MX];
bool vis[MX];
int dist[MX];
int color[MX];  // To color nodes

bool isBipartite(int source) {
    queue<int> Q;
    vis[source] = 1;
    dist[source] = 0;
    color[source] = 1;  // Color source node as 1

    Q.push(source);

    while (!Q.empty()) {
        int node = Q.front();
        Q.pop();

        for (int i = 0; i < graph[node].size(); i++) {
            int next = graph[node][i];

            if (vis[next] == 0) {
                vis[next] = 1;
                dist[next] = dist[node] + 1;

                // Color the next node with the opposite color of the current node
                color[next] = 3 - color[node];

                Q.push(next);
            } else {
                // If the neighbor is already visited and has the same color as the current node,
                // then the graph is not bipartite.
                if (color[next] == color[node]) {
                    return false;
                }
            }
        }
    }

    return true;
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

    // Initialize visited array
    for (int i = 1; i <= nodes; i++) {
        vis[i] = 0;
        color[i] = 0;
    }

    bool isBipartiteGraph = isBipartite(source);

    if (isBipartiteGraph) {
        cout << "The graph is bipartite." << endl;
    } else {
        cout << "The graph is not bipartite." << endl;
    }

    return 0;
}
