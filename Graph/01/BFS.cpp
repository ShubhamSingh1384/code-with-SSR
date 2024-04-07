// BFS :- Breadth First Search
// it is a traversal technique
// #include<iostream>
// #include<vector>
// #include<set>
#include<bits/stdc++.h>
using namespace std;

void prepareAdjList(unordered_map<int, set<int>> &adjList, vector<pair<int,int>> &edges){
    for(int i=0; i<edges.size(); i++){
        int u = edges[i].first;
        int v = edges[i].second;

        //adjList[v].push_back(u);
        adjList[u].insert(v);
    }
}

void bfs(unordered_map<int, set<int>>&adjList , unordered_map<int,bool>& visited, vector<int>& ans, int node){
    queue<int> q;
    q.push(node);
    visited[node] = 1;
    while(!q.empty()){
        int frontNode = q.front();
        q.pop();
        // store frontNode into ans
        ans.push_back(frontNode);
        // traverse all neighbours of frontNode
        for(auto i: adjList[frontNode]){
            if(!visited[i]){
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}

void printAdjList(unordered_map<int, set<int>>&adjList){
    for(auto i:adjList){
        cout << i.first << "->";
        for(auto j:i.second){
            cout << j << ",";
        }
        cout << endl;
    }
}

vector<int> BFS(int vertex, vector<pair<int,int>> edges){
    unordered_map<int, set<int>> adjList;
    vector<int> ans;
    unordered_map<int,bool> visited;

    prepareAdjList(adjList, edges);

    //traverse all components of graph
    for(int i=0; i<vertex; i++){
        if(!visited[i]){
            bfs(adjList, visited , ans , i);
        }
    }
    printAdjList(adjList);
    return ans;
}


int main(){
    int v = 4;
    vector<pair<int, int>> edges;
    edges.push_back({0,1});
    edges.push_back({1,2});
    edges.push_back({2,3});
    edges.push_back({0,3});
    vector<int> ans = BFS(v , edges);
    for(auto i:ans){
        cout << i << " ";
    }
    // cout << edges[0].first << " " << edges[0].second ;
}