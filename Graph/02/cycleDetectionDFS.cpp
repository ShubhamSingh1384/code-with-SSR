#include <bits/stdc++.h>
using namespace std;

bool isCyclicDFS(int node, int parent, unordered_map<int,bool>& visited, unordered_map<int, list<int>>& adj){
    visited[node] = true;

    for(auto neighbour: adj[node]){
        if(!visited[neighbour]){
            bool cycleDetected = isCyclicDFS(neighbour, node, visited, adj);
            if(cycleDetected)
            return true;
        }
        else if(neighbour != parent){
            return true;
        }
    }
    return false;
}

int main(){
    


   return 0;
}