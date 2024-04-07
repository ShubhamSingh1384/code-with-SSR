// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
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

node* build_Tree(node* root){
    int data;
    cin >> data;
    if(data == -1)
    return NULL;

    root = new node(data);

    root->left = build_Tree(root->left);
    root->right = build_Tree(root->right);

    return root;
}

void solve(node* root , int k , int &count , vector<int> path){
    if(root == NULL)
    return ;

    path.push_back(root->data);

    solve(root->left , k , count , path);
    solve(root->right , k , count , path);

    int size = path.size();
    int sum = 0;
    for(int i=size-1; i>=0; i--){
        sum += path[i];
        if(sum == k){
            count++;
            break;
        }
    }

    path.pop_back();
}

int SumK(node* root , int k){
    vector<int> path;
    int count = 0;
    solve(root , k , count , path);

    return count;
}

int main(){
    node* root = build_Tree(NULL);

    cout << SumK(root , 5);

    // 1 3 2 -1 -1 1 1 -1 -1 -1 1 4 1 -1 -1 2 -1 -1 5 6 -1 -1 -1
}