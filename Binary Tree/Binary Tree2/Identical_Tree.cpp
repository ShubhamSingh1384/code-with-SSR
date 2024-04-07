#include<iostream>
#include<bits/stdc++.h>
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
    cout << "Enter data" << endl;
    cin >> data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout << "Enter data in left of " << data << endl;
    root->left = build_tree(root->left);
    cout << "Enter data in right of " << data << endl;
    root->right = build_tree(root->right);

    return root;
}

bool is_Identical(node* root1 , node* root2){
    if(root1 == NULL && root2 == NULL){
        return true;
    }

    if(root1 == NULL && root2 != NULL || root1 != NULL && root2 == NULL){
        return false;
    }

    bool left = is_Identical(root1->left , root2->left);
    bool right = is_Identical(root1->right , root2->right);

    bool value = root1->data == root2->data;

    if(left && right && value){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    node* root1 = NULL;
    node* root2 = NULL;

    root1 = build_tree(root1);
    root2 = build_tree(root2);

    cout << "Identical or Not : " << is_Identical(root1 , root2);
}