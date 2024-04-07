// #include<bits/stdc++.h>
#include<iostream>
#include<queue>
#include<vector>
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
    if(data == -1)
    return NULL;

    root = new node(data);

    root->left = build_tree(root->left);
    root->right = build_tree(root->right);

    return root;
}

//---------------------------------------

void levelOrder(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* front = q.front();
        q.pop();
        if(front == NULL){
            cout << endl;
            if(!q.empty())
            q.push(NULL);
        }
        else{
            cout << front->data << " ";
            if(front->left)
            q.push(front->left);
            if(front->right)
            q.push(front->right);
        }
    }
}

void solve(node* root , vector<int> &ans){
    if(root == NULL)
    return;
    if(root->left == NULL && root->right == NULL){
        ans.push_back(root->data);
        return;
    }

    solve(root->left , ans);
    solve(root->right , ans);
}

vector<int> AllLeaf(node* root){
    vector<int> ans;
    solve(root , ans);

    return ans;
}

node* build_from_Level_Order(node* root){
    int data;
    cin >> data;
    if(data != -1)
    root = new node(data);
    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        node* front = q.front();
        q.pop();
        int leftdata;
        cin >> leftdata;
        if(leftdata != -1){
            front->left = new node(leftdata);
            q.push(front->left);
        }
        int rightdata;
        cin >> rightdata;
        if(rightdata != -1){
            front->right = new node(rightdata);
            q.push(front->right);
        }
    }

    return root;
}


int main(){
    node* root = NULL;
    // root = build_tree(NULL);
    root = build_from_Level_Order(root);
    // levelOrder(root);

    vector<int> ans = AllLeaf(root);
    for(auto i:ans){
        cout << i << " ";
    }

}