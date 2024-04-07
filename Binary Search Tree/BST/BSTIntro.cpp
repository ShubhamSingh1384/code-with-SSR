// Time Complexity : inserttion O(log n)
// Space Complexity :inserttion O(n)


// InOrder of BST is Sorted;

// #include<bits/stdc++.h>
#include<iostream>
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

//---------------------------------------------------------------------------------------------

node* insertIntoBST(node* root , int data){
    if(root == NULL){
        root = new node(data);
        return root;
    }
    
    if(data < root->data)
    root->left = insertIntoBST(root->left , data);
    else if(data > root->data)
    root->right = insertIntoBST(root->right , data);
    

    return root;
}

void take_input(node* &root){
    int data;
    cin >> data;

    while(data != -1){
        root = insertIntoBST(root , data);
        cin >> data;
    }
}

//----------------------------------------------------------------------------------------------


void levelOrder(node* root){
    queue<node*> q;
    
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* front = q.front();
        q.pop();
        if(front == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
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

// inorder / preorder / postorder sabhi se triverse kr skte hai

int main(){
    node* root = NULL;
    take_input(root);
    levelOrder(root);

    // 10 8 7 9 17 16 18 -1
}