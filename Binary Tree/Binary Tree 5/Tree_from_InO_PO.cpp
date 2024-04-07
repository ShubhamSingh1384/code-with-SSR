// #include<bits/stdc++.h>
#include<iostream>
#include<map>
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

node* solve(int in[] , int po[] , int &poi , int ins , int ine , int n , map<int,int> track){
    if(poi < 0 || ins > ine){
        return NULL;
    }

    int element = po[poi--];
    int position = track[element];
    node* root = new node(element);
    root->right = solve(in, po, poi, position+1, ine , n , track); // yaha right wala pahle aaya kyo ki pahle right wala index ka element aa rha hai (dry run ke 2nd step me phir padho);
    root->left = solve(in, po, poi, ins , position-1, n , track);

    return root;
}

node* build_tree(int in[] , int po[] , int n){
    int poi = n-1;
    int ins = 0 , ine = n-1;
    map<int,int> track;
    for(int i=0; i<n; i++){
        track[in[i]] = i;
    }

    node* root = solve(in , po , poi , ins , ine , n , track);


    return root;
}

void preOrder(node* root){
    if(root == NULL)
    return;

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int main(){
    int inO[] = {4,8,2,5,1,6,3,7};
    int pO[] = {8,4,5,2,6,7,3,1};
    int size = 9;
    // cout << "start" << endl;
    node* root = build_tree(inO , pO , size);

    // cout << "over" << endl;

    preOrder(root);
}