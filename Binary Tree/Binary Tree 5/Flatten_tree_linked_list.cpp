#include<iostream>
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
    node* temp = curr->left;
    while(temp->right)
    temp = temp -> right;

    return temp;
}

node* Flatten_tree_linked_list(node* root){
    node* curr = root;
    while(curr){
        if(curr->left){
            node* prev = find(curr);
            prev->right = curr->right;
            curr->right = curr->left;
            curr->left = NULL;
        }
        curr = curr->right;
    }
    return root;
}

void print(node* root){
    while(root){
        cout << root->data << " ";
        root = root -> right;
    }
}

int main(){
    node* root = build_tree(NULL);
    node* linkedList = Flatten_tree_linked_list(root);

    print(linkedList);

    // 1 2 3 -1 5 -1 -1 4 -1 -1 6 -1 7 -1 -1

}