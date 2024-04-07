// DAG :- Directed Acyclic Graph (pr he lga skte hai) ye topological sort;
// Linear ordering of vertices such that for each edge (u->v)
//  u always appears before v is that ordering
#include <bits/stdc++.h>
using namespace std;

void dfs(int node , stack<int>&s, unordered_map<int,bool>& visited, unordered_map<int, vector<int>>& adjList){
    visited[node] = 1;

    for(auto i: adjList[node]){
        if(!visited[i])
        dfs(i, s, visited, adjList);
    }
    s.push(node);
}

vector<int>  topologicalSort(vector<vector<int>> &edges, int v , int e){
    unordered_map<int, vector<int>> adjList;
    for(int i=0; i<e; i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adjList[u].push_back(v);
    }
    unordered_map<int,bool> visited;
    stack<int> s;
    for(int i=1; i<=v; i++){
        if(!visited[i]){
            dfs(i, s, visited , adjList);
        }
    }
    vector<int> ans;
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
    return ans;
}

int main(){
    


   return 0;
}