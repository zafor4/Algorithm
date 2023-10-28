#include <iostream>
#include <vector>

using namespace std;

bool isBipartite(vector<vector<int>>& graph, int node, vector<int>& color) {
    for (int neighbor = 0; neighbor < graph.size(); ++neighbor) {
        if (graph[node][neighbor] == 1) {
            // If the neighbor is already colored with the same color as the current node,
            // the graph is not bipartite.
            if (color[neighbor] == color[node]) {
                return false;
            }
            // If the neighbor is not colored, color it with the opposite color of the current node.
            if (color[neighbor] == -1) {
                color[neighbor] = 1 - color[node];
                if (!isBipartite(graph, neighbor, color)) {
                    return false;
                }
            }
        }
    }
    return true;
}

bool isBipartite(vector<vector<int>>& graph) {
    int n = graph.size();
    vector<int> color(n, -1); // Initialize colors to -1 (unvisited)

    for (int i = 0; i < n; ++i) {
        if (color[i] == -1) {
            color[i] = 0; // Start with color 0 for the first node
            if (!isBipartite(graph, i, color)) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n; // Size of the 2D matrix
    cin >> n;
    vector<vector<int>> graph(n, vector<int>(n));

    // Input the adjacency matrix
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> graph[i][j];
        }
    }

    if (isBipartite(graph)) {
        cout << "The graph is bipartite." << endl;
    } else {
        cout << "The graph is not bipartite." << endl;
    }

return 0;
}