// #include<bits/stdc++.h>
#include<iostream>
#include<queue>
#include<map>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data = data;
        left = right = NULL;
    }
};

node* build_tree(node* root){
    int data;
    cin >> data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }

    root->left = build_tree(root->left);
    root->right = build_tree(root->right);

    return root;
}

// vector<int> Bottom_view(node* root){
//     vector<int> ans;
//     map<int,int> bottomnode; // <horizontal distance , node value>
//     queue<pair<node* , int>> q; // <node , hd>

//     q.push(make_pair(root , 0));

//     while(!q.empty()){
//         pair<node*,int> frontnode = q.front();
//         q.pop();
//         int hd = frontnode.second;

//         bottomnode[hd] = frontnode.first->data;

//         if(frontnode.first->left){
//             q.push(make_pair(frontnode.first->left , hd-1));
//         }
//         if(frontnode.first->right){
//             q.push(make_pair(frontnode.first->right , hd+1));
//         }
//     }
//     for(auto i:bottomnode){
//         ans.push_back(i.second);
//     }

//     return ans;
// }

    
    void solve(node* root , int hd , map<int,int>& m){
        if(root == NULL)
        return ;
        
        m[hd] = root->data;
        
        solve(root->left , hd-1, m);
        solve(root->right , hd+1 , m);
    }
    

    vector <int> bottomView(node *root) {
        // Your Code Here
        map<int,int> m;
        vector<int> ans;
        int hd = 0;
        solve(root , hd , m);
        
        for(auto i:m){
            ans.push_back(i.second);
        }
        
        return ans;
    }

int main(){
    // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
    node* root = NULL;
    root = build_tree(root);

    vector<int> ans = bottomView(root);

    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
}