#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class graph{
    public:
    unordered_map<int, list<int>> adjList;

    void addEdge(int u , int v , bool direction){
        // direction = 0 -> undirected
        // direction = 1 -> directed graph

        // create an edge from u to v
        adjList[u].push_back(v);
        if(direction  == 0)
        adjList[v].push_back(u);
    }

    void printAdjList(){
        for(auto i:adjList){
            cout << i.first << "->";
            for(auto j:i.second){
                cout << j << ", ";
            }
            cout << endl;
        }
    }
};

int main(){
    int n;
    cout << "Enter the number of node" << endl;
    cin >> n;
    int m;
    cout << "Enter the numner of edges" << endl;
    cin >> m;
    graph g;
    for(int i=0; i<m; i++){
        int u, v;
        cin >> u >> v;
        //create an undirected graph
        g.addEdge(u,v,0);
    }
    g.printAdjList();
}

