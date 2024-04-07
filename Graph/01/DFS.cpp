#include <bits/stdc++.h>
using namespace std;

void dfs(int node , unordered_map<int,bool>& visited, unordered_map<int, list<int>>& adj, vector<int> &component){
    component.push_back(node);
    visited[node] = 1;

    // hr connected node k liye recursive ccall
    for(auto i: adj[node]){
        if(!visited[i]){
            dfs(i , visited , adj , component);
        }
    }
}

vector<vector<int>> depthFirstSearch(int v , int e , vector<vector<int>> & edges){
    // prepare adjList
    unordered_map<int, list<int>> adj;
    for(int i=0; i<edges.size(); i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<vector<int>> ans;
    unordered_map<int,bool> visited;

    // using loop because of disconnected graph
    for(int i=0; i<v; i++){
        if(!visited[i]){
            vector<int> component;
            dfs(i, visited, adj, component);
            ans.push_back(component);
        }
    }
    return ans;
}

int main(){
    


   return 0;
}