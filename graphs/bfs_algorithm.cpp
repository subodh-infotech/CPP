#include <iostream>
#include <vector>
#include <queue>
#include <list>

using namespace std;

class Graph{
    int v; // no. of verteces
    vector<list<int>> adj; // containing elements of graph in adject list

    public:
    Graph(int v); // contructor with specify no. of vecteces
    void addEdges(int u, int v); // insert vecteces in adjency list
    void BFS(int s); // print BFS traversal from given source node
    void printGraph(); // this method print the graph vecteces with adjecent verteces
};

Graph::Graph(int v) {
    this->v = v; // specify no. of vertecex
    this->adj.resize(v); // resize the vector to add vecteces of graph
}

void Graph:: addEdges(int u, int v) {
    adj[u].push_back(v); // add node to u's list. 
}

void Graph::BFS(int s) {
    vector<bool> visited; // to store the status of nodes visited or no
    visited.resize(this->v, false); // resize the vector and initialize with false value

    // create queue to store nodes for visiting
    queue<int> que;

    // mark that current nodes is visited and insert into queue
    visited[s] = true;
    que.push(s);

    while(!que.empty()) {
        s = que.front();
        cout << s << " "; 
        que.pop();

        // get all adjency verteces of vertex s
        for(auto adjenct : adj[s]) {
            if(!visited[adjenct]) {
                visited[adjenct] = true;
                que.push(adjenct);
            }
        }
    }
}


void Graph:: printGraph(){
    for(int i = 0; i < adj.size(); ++i) {
        cout << endl;
        cout << i;
        for (auto ver : adj[i]) {
            cout << "--> " << ver;
        }
    }
}

int main() {
    Graph graph(5); // create graph object and declare the size of verteces

    // add edges to the graph
    graph.addEdges(0,1);
    graph.addEdges(1,2);
    graph.addEdges(1,3);
    graph.addEdges(2,4);
    graph.addEdges(3,0);
    graph.addEdges(4,3);
    
    // print graph
    graph.printGraph();
    
    // display result after traversing verteces of graph
    cout << endl ;
    graph.BFS(0);

    return 0;
}
