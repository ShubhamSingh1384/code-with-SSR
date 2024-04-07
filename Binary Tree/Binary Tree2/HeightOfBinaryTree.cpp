// Height of Binary Tree is basically longest path between root node ans leaf node;

#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node* build_Tree(node* root){
    cout << "Enter data" << endl;
    int data;
    cin >> data;
    root = new node(data);

    if(data == -1)
    return NULL;

    cout << "Enter data in left of " << data << endl;
    root->left = build_Tree(root->left);
    cout << "Enter data in right of " << data << endl;
    root->right = build_Tree(root->right);

    return root;
}

int heightOfBinaryTree(node* root){
    if(root == NULL){
        return 0;
    }

    int left = heightOfBinaryTree(root->left);
    int right = heightOfBinaryTree(root->right);

    int ans = max(left , right) + 1;

    return ans;
}


int main(){
    node* root = NULL;
    root = build_Tree(root);

    cout << heightOfBinaryTree(root);
}

