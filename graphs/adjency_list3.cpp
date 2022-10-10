#include <iostream>
#include <vector>

using namespace std;
vector<int> adj[5];

void addEdges(int u, int v) {
    adj[u].push_back(v);
}

void print() {
    for(int i=0; i < 5; ++i) {
        cout << endl;
        cout << i;
        for(auto itr : adj[i]) {
            cout << "--> " << itr;
        }
    }
}

int main() {

    addEdges(0, 1);
    addEdges(1, 2);
    addEdges(1, 3);
    addEdges(2, 4);
    addEdges(3, 0);
    addEdges(3, 4);

    print(); 

    return EXIT_SUCCESS;
}