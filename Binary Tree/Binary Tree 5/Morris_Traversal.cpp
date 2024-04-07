#include<iostream>
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

node* find(node* curr){
    node* temp = curr;
    temp = temp -> left;
    while(temp->right && temp->right != curr)
    temp = temp->right;

    return temp;
}

void Morris_Traversal(node* root){
    node* curr = root;
    
    while(curr){
        if(!curr->left){
            cout << curr->data << " ";
            curr = curr->right;
        }
        else{
            node* prev = find(curr);
            if(prev->right == NULL){
                prev->right = curr;
                curr = curr->left;
            }
            else{
                prev->right = NULL;
                cout << curr->data << " ";
                curr = curr->right;

            }
        }
    }
}

int main(){
    node* root = build_tree(NULL);
    Morris_Traversal(root);

    // 1 2 3 -1 5 -1 -1 4 -1 -1 6 -1 7 -1 -1
    
}