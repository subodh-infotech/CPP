#include <iostream>
#include <vector>

using namespace std;

void addEdges(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int v) {
    for( int i = 0; i < v; ++i){
        cout << endl<< i;
        for (auto itr : adj[i]){
            cout << " --> " << itr;
        }
    }
}

int main() {
    const int V = 4; // specify total number of edges
    vector<int> adj[V]; // create array to stor node of graph

    // add edges of graph into adjecy list
    addEdges(adj, 0, 1);
    addEdges(adj, 0, 2);
    addEdges(adj, 0, 3);
    addEdges(adj, 1,2);

    // display adjency list
    printGraph(adj, V);

    return EXIT_SUCCESS;
}