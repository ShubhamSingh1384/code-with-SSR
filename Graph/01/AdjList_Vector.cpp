#include <bits/stdc++.h>
using namespace std;

vector < vector < int >> printAdjacency(int n, int m, vector < vector < int >> & edges) {
    // Write your code here.
    vector<int> node[n];
    for(int i=0; i<m; i++){
        int u = edges[i][0];
        int v = edges[i][1];

        node[u].push_back(v);
        node[v].push_back(u);
    }

    vector<vector<int>> AdjList(n);

    for(int i=0; i<n; i++){
        AdjList[i].push_back(i);
        for(int j=0; j<node[i].size(); j++){
            AdjList[i].push_back(node[i][j]);
        }
    }

    return AdjList;
}

int main(){
    int m , n;
    cin >> m >> n;
    vector<vector<int>> vec = {{4,3},{1,2},{0,3},{2,3}};

    vector<vector<int>> ans = printAdjacency(4,2, vec);

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans.size(); i++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }


   return 0;
}