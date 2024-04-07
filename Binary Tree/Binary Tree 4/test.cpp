#include<bits/stdc++.h>
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



int main(){
    //1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
    node* root = NULL;
    root = build_tree(root);
    // cout << LCA(root , 5 , 6);
    // cout << maxSum(root);
}