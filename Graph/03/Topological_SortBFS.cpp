#include <bits/stdc++.h>
using namespace std;

vector<int> topologicalSort(vector<pair<int,int>> &edges, int v , int e){
    unordered_map<int, list<int>> adjList;
    vector<int> inOrder(v, 0);
    for(int i=0; i<e; i++){
        int u = edges[i].first;
        int v = edges[i].second;

        adjList[u].push_back(v);
        // inorder degree
        inOrder[v]++;
    }

    // inserting all vertex with 0 inorder degree in queue;
    queue<int> q;
    for(int i=0; i<v; i++){
        if(inOrder[i] == 0)
        q.push(inOrder[i]);
    }
    vector<int> ans;
    while(!q.empty()){
        int front = q.front();
        ans.push_back(front);
        q.pop();
        for(auto i : adjList[front]){
            inOrder[i]--;
            if(inOrder[i] == 0)
            q.push(i);
        }
    }
    return ans;
}

int main(){
    
    vector<pair<int,int>> vec;
    vec.push_back({0,1});
    vec.push_back({0,3});
    vec.push_back({1,2});
    vec.push_back({3,2});
    // vec.push_back({4,3});

    vector<int> ans = topologicalSort(vec,4, 4);

    for(auto i:ans)
    cout << i << " ";


   return 0;
}