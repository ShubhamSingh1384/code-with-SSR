#include<iostream>
#include<limits.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        data = d;
        left = right = NULL;
    }
};

Node* build_tree(Node* root){
    int data;
    cin >> data;
    root = new Node(data);
    if(data == -1){
        return NULL;
    }
    root->left = build_tree(root->left);
    root->right = build_tree(root->right);

    return root;
}

Node* solve(Node* root , int &k , int node){
    if(root == NULL) return NULL;
    if(root->data == node)
    return root;

    Node* leftAns = solve(root->left , k , node);
    Node* rightAns = solve(root->right , k , node);

    if(leftAns == NULL && rightAns != NULL){
        k--;
        if(k <= 0){
            k = INT_MAX;
            return root;
        }
        return rightAns;
    }
    if(rightAns == NULL && leftAns != NULL){
        k--;
        if(k <= 0){
            k = INT_MAX;
            return root;
        }
        return leftAns;
    }

    return NULL;
}


int KthAncestor(Node* root , int k , int node){
    Node* ans = solve(root , k , node);
    if(ans == NULL || ans->data == node){
        return -1;
    }

    return ans->data;
}

int main(){
    Node* root = NULL;
    root = build_tree(root);

    cout << "Kth Ancestor of node is " << KthAncestor(root , 3 , 7);

    // 1 2 3 6 -1 -1 7 -1 -1 -1 4 -1 5 8 -1 -1 9 -1 -1
}