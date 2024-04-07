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

vector<int> Bottom_view(node* root){
    vector<int> ans;
    map<int,int> bottomNode; // <horizontal distance , node value>
    queue<pair<node* , int>> q; // <node , hd>

    q.push(make_pair(root , 0));

    while(!q.empty()){
        pair<node*,int> frontNode = q.front();
        q.pop();
        int hd = frontNode.second;

        bottomNode[hd] = frontNode.first->data;

        if(frontNode.first->left){
            q.push(make_pair(frontNode.first->left , hd-1));
        }
        if(frontNode.first->right){
            q.push(make_pair(frontNode.first->right , hd+1));
        }
    }
    for(auto i:bottomNode){
        ans.push_back(i.second);
    }

    return ans;
}

int main(){
    // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
    node* root = NULL;
    root = build_tree(root);

    vector<int> ans = Bottom_view(root);

    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
}