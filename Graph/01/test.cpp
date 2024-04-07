#include<iostream>
#include<unordered_map>
#include<list>

using namespace std;

class graph{
    public:
    unordered_map<int, list<int>> adjList;
    void addEdge(int u, int v, bool direction){
        adjList[v].push_back(v);
        if(!direction)
        adjList[u].push_back(v);
    }

    void printAdjList(){
        for(auto i:adjList){
            cout << i.first << "-> ";
            for(auto j:i.second){
                cout << j << ", ";
            }
            cout << endl;
        }
    }
};

int main(){
    graph g;
    int n , m;
    cout << "Enter the number of Node" << endl;
    cin >> n;
    cout << "Enter the number of Edges" << endl;
    cin >> m;

    for(int i=0; i<m; i++){
        int u , v;
        cin >> u >> v;
        g.addEdge(u,v,0);
    }

    g.printAdjList();

    
}