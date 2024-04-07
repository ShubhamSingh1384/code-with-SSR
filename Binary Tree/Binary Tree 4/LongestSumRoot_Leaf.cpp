// Sum of longest path in tree from root to leaf;
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

//--------------------------------------------------------------------------------

void solve(node* root , int sum , int &maxSum , int len , int &maxlen){
    // base case
    if(root == NULL){
    // cout << len  << "-> len"  << endl;
        if(len > maxlen){
            maxlen = len;
            maxSum = sum;
        }
        else if(len == maxlen){
            maxSum = max(sum , maxSum);
        }
        return ;
    }

    sum = sum + root->data;
    // cout << sum << endl;
    solve(root->left , sum , maxSum , len+1 , maxlen);
    solve(root->right , sum , maxSum , len+1 , maxlen);
}


int SumOfRoot_Leaf(node* root){
    int len = 0 , maxlen = 0;
    int sum = 0 , maxsum = INT_MIN;

    solve(root , sum , maxsum , len , maxlen);

    return maxsum;
}

//------------------------------------------------------------------------


int main(){
    node* root = NULL;
    root = build_tree(root);

    cout << SumOfRoot_Leaf(root);

    // 1 2 4 1 -1 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
    // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 8 -1-1 -1  --> 19
}