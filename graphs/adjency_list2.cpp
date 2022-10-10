#include <iostream>
#include <map>
#include <vector>

using namespace std;
map<char, vector<char>> adj;
vector<char> temp;

void addEdges(char u, char v) {

    adj[u].push_back(v);
    adj[v].push_back(u);

}

void printGraph(map<char, vector<char>> adj) {
    for( auto itr : adj) {
       cout << endl << itr.first;
       vector<char> temp = itr.second;
       for(int i=0; i < temp.size(); ++i) {
            cout << "--> " << temp[i];
       }
    }
}
int main() {
    addEdges('a', 'b');
    addEdges('a', 'd');
    addEdges('b', 'c');
    addEdges('b', 'd');
    addEdges('d', 'e');
    addEdges('e', 'c');
    printGraph(adj);
    cout << endl << "size of map : " << adj.size();

    return 0;
}