#include <iostream>
#include <vector>
using namespace std;

vector<int> v[10001];

int main() {
    int nodes, edges;
    int x, y;
    
    cin >> nodes >> edges; // Read the number of nodes and edges
    
    for (int i = 0; i < edges; i++) {
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    for (int i = 1; i <= nodes; i++) {
        cout <<i;
        for (int j = 0; j < v[i].size(); j++) {
            cout <<"->"<< v[i][j];
        }
        cout << endl;
    }

    return 0;
}
