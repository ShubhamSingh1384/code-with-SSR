//Time Complexity: Avg- O(log n); -> Wor- O(n);
// Space Complexity: O(H) ->recursively;
// Space Complexity: O(1) ->iteratively;


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

//-----------------------------------RECURSIVELY------------------------------------------------------------------------

bool X_presentOrNot(node* root , int x){
    if(root == NULL)
    return false;

    if(root->data == x)
    return true;

    bool leftAns = X_presentOrNot(root->left , x);
    bool rightAns = X_presentOrNot(root->right , x);

    if(leftAns || rightAns)
    return true;

    return false;
}

//--------------------------------------------ITERATIVELY---------------------------------------------------------------

bool x_is_present(node* root , int x){
    while(root != NULL){
        if(root->data == x)
        return true;

        if(x < root->data)
        root = root->left;
        else
        root = root->right;
    }

    return false;
}

//-----------------------------------------------------------------------------------------------------------


node* insertIntoBST(node* root , int data){
    if(root == NULL){
        root = new node(data);
        return root;
    }

    if(data < root->data)
    root->left = insertIntoBST(root->left , data);
    if(data > root->data)
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

int main(){
    node* root = NULL;
    take_input(root);
    int x = 98;
    // cout << X_presentOrNot(root , x);
    cout << x_is_present(root , x);

    // 10 8 7 9 17 16 18 -1
}