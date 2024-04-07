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

//----------------------------------------------------------------------------------------------

void solve(node* root, vector<int> &ans , int level){
    // base case
    if(root == NULL){
        return ;
    }

    // we entered into a new level
    if(level == ans.size())
    ans.push_back(root->data);

    solve(root->left , ans , level+1);
    solve(root->right, ans , level+1);
}

vector<int> Left_View(node* root){
    vector<int> ans;
    solve(root , ans , 0);

    return ans;
}

//-----------------------------------------------------------------------------------------------------

vector<int> left_View(node* root){
    vector<int> ans;
    map<int , pair<int,int>> leftView;
    queue<pair<node*, pair<int , int>>> q;
    q.push(make_pair(root, make_pair(0,0)));

    while(!q.empty()){
        pair<node*,pair<int,int>> forntNode = q.front();
        q.pop();
        node* frontroot = forntNode.first;
        int hd = forntNode.second.first;
        int lvl = forntNode.second.second;

        if(leftView.find(hd) == leftView.end()){
            leftView[hd].second = frontroot->data;
        }

        if(frontroot->left){
            q.push(make_pair(frontroot->left, make_pair(hd-1,lvl+1)));
        }
        if(frontroot->right){
            q.push(make_pair(frontroot->right , make_pair(hd+1,lvl+1)));
        }
    }

    for(auto i:leftView){
        ans.push_back(i.second.second);
    }

    return ans;
}

int main(){
    node* root = NULL;
    root = build_tree(root);

    vector<int> ans = Left_View(root);

    for(auto i:ans){
        cout << i << " ";
    }

    // 1 2 4 -1 -1 8 -1 -1 3 7 -1 -1 5 9 -1 -1 6 -1 10 -1 -1
}