// #include<bits/stdc++.h>
#include<iostream>
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
    if(data == -1)
    return NULL;

    root = new node(data);

    root->left = build_tree(root->left);
    root->right = build_tree(root->right);

    return root;
}

pair<int,int> solve(node* root){
    if(root == NULL){
        pair<int,int> p = make_pair(0,0);
        return p;
    }

    pair<int,int> left = solve(root->left);
    pair<int,int> right = solve(root->right);

    pair<int,int> ans;
    ans.first = root->data + left.second+ right.second;
    ans.second = max(left.first , left.second) + max(right.first , right.second);

    return ans;
}

int maxSum_NonAdjcent(node* root){
    pair<int,int> p = solve(root);

    int ans = max(p.first, p.second);

    return ans;
}

int main(){
    node* root = build_tree(NULL);
    cout << maxSum_NonAdjcent(root);

    // 1 2 4 -1 -1 -1 3 5 -1 -1 6 -1 -1
}