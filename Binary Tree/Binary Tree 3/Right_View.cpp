// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<map>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        data = d;
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

void solve(node* root , vector<int> &ans , int level){
    if(root == NULL){
        return ;
    }

    if(level == ans.size()){
        ans.push_back(root->data);
    }

    solve(root->right, ans , level+1);
    solve(root->left , ans , level+1);
}

vector<int> Right_View(node* root){
    vector<int> ans;
    solve(root , ans , 0);

    return ans;
}

int main(){
    node* root = NULL;
    root = build_tree(root);

    vector<int> ans =  Right_View(root);

    for(auto i:ans){
        cout << i << " ";
    }

    //1 2 4 6 10 -1 -1 -1 -1 8 -1 -1 3 7 -1 -1 5 9 -1 -1 -1
}