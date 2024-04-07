// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<map>
#include<queue>
#include<limits.h>
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

node* LCA(node* root , int n1 , int n2){
    if(root == NULL){
        return NULL;
    }
    if(root->data == n1 || root->data == n2){
        return root;
    }

    node* leftAns = LCA(root->left , n1 , n2);
    node* rightAns = LCA(root->right , n1 , n2);

    if(leftAns != NULL && rightAns != NULL){
        return root;
    }

    else if(leftAns != NULL && rightAns == NULL)
    return leftAns;
    
    else if(leftAns == NULL && rightAns != NULL)
    return rightAns;
    else
    return NULL;
}

int main(){
    node* root = NULL;
    root = build_tree(root);

    node* ans = LCA(root , 5 , 4);

    cout << ans->data << endl;
}