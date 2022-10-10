#include <iostream>

using namespace std;

void addEdges(int adj[5][5], int u, int v) {
    adj[u][v] = 1;
}

void print(int adj[5][5]) {
    for(int i=0; i<5; ++i){
        cout << endl;
        for(int j=0; j< 5; ++j){
            cout << " " << adj[i][j];
        }
    }
}

int main() {
    const int v = 5;
    int adj[v][v];

    for(int i=0; i<5; ++i){
        cout << endl;
        for(int j=0; j< 5; ++j){
            adj[i][j] = 0;
        }
    }

    // add edges to graph
    addEdges(adj, 0, 1);
    addEdges(adj, 1, 2);
    addEdges(adj, 1, 3);
    addEdges(adj, 2, 4);
    addEdges(adj, 3, 0);
    addEdges(adj, 3, 4);

    print(adj);

    return 0;
}