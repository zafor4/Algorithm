#include <iostream>
#include <vector>

using namespace std;

bool isBipartite(vector<vector<int>>& graph, int node, vector<int>& color, int& count_color0, int& count_color1) {
    for (int neighbor = 0; neighbor < graph.size(); ++neighbor) {
        if (graph[node][neighbor] == 1) {
            if (color[neighbor] == color[node]) {
                return false;
            }
            if (color[neighbor] == -1) {
                color[neighbor] = 1 - color[node];
                if (!isBipartite(graph, neighbor, color, count_color0, count_color1)) {
                    return false;
                }
            }
        }
    }

    // Increment the count for the respective color
    if (color[node] == 0) {
        count_color0++;
    } else {
        count_color1++;
    }

    return true;
}

bool isBipartite(vector<vector<int>>& graph) {
    int n = graph.size();
    vector<int> color(n, -1);
    int count_color0 = 0, count_color1 = 0;

    for (int i = 0; i < n; ++i) {
        if (color[i] == -1) {
            color[i] = 0;
            if (!isBipartite(graph, i, color, count_color0, count_color1)) {
                return false;
            }
        }
    }

    cout << "Number of nodes colored with color 0: " << count_color0 << endl;
    cout << "Number of nodes colored with color 1: " << count_color1 << endl;

    return true;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> graph(n, vector<int>(n));

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
