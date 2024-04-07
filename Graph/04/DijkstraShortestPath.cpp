// #include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<unordered_map>
#include<set>
#include<limits.h>
using namespace std;

vector<int> dijkstra(vector<vector<int>>& vec, int vertices, int edges, int source){
    unordered_map<int, vector<pair<int,int>>> adjList;
    for(int i=0; i<edges; i++){
        int u = vec[i][0];
        int v = vec[i][1];
        int w = vec[i][2];

        adjList[u].push_back({v,w});
        adjList[v].push_back({u,w});
    }
    vector<int> dist(vertices , INT_MAX);
    dist[source] = 0;
    set<pair<int,int>> st; // pahle int distance k liye dushra node hai
    st.insert({0,source});
    while(!st.empty()){
        // fetch top record
        auto top = *(st.begin());
        int nodeDist = top.first;   
        int topNode = top.second;  

        //remove top record now
        st.erase(st.begin());
        
        //traverse on neighbour
        for(auto neighbour : adjList[topNode]){
            if(nodeDist + neighbour.second < dist[neighbour.first]){
                auto record = st.find({dist[neighbour.first], neighbour.first});
                //
                if(record != st.end()){
                    st.erase(record);
                }

                // distance update;
                dist[neighbour.first] = nodeDist + neighbour.second;
                // record push in set
                st.insert({dist[neighbour.first] , neighbour.first});

            }
        }
    }
    return dist;
}

int main(){
    int src = 0 , edges = 7 , vertex = 5;
    vector<vector<int>> vec{{0,1,7},{0,2,1},{0,3,2},{1,2,3},{1,3,5},{1,4,1},{3,4,7}};

    vector<int> ans = dijkstra(vec , vertex, edges, src);
    for(auto i: ans){
        cout << i << " " ;
    
    }


   return 0;
}