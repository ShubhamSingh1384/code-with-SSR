
//https://bit.ly/3Pa72Qy

#include<bits/stdc++.h>
using namespace std;

bool detectCycle(int node , unordered_map<int,bool>& visited, unordered_map<int,bool>& dfsVisited, unordered_map<int, vector<int>>& adjList){
    visited[node] = 1;
    dfsVisited[node] = 1;
    
    for(auto neighbour : adjList[node]){
        if(!visited[neighbour]){
            bool cycle = detectCycle(neighbour, visited, dfsVisited, adjList);
            if(cycle) return true;
        }
        else if(dfsVisited[neighbour]){
            return true;
        }
    }

    dfsVisited[node] = false;

    return false;
}

bool detectCycleInDirectedGraph(int n , vector<pair<int,int>>&edges){
    unordered_map<int, vector<int>> adjList;
    for(int i=0; i<n; i++){
        int u = edges[i].first;
        int v = edges[i].second;

        adjList[u].push_back(v);
    }

    unordered_map<int,bool> visited;
    unordered_map<int,bool> dfsVisited;

    for(int i=1; i<=n; i++){
        if(!visited[i]){
            bool isCycle = detectCycle(i , visited , dfsVisited, adjList);

            if(isCycle) return true;
        }
    }
    return false;
}