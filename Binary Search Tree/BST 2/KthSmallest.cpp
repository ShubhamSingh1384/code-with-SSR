// Time Complexity : O(N);
// Space Complexity : O(H);

// Solve same question with the help of morris traversal to reduce space complexity;

#include<iostream>
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

//------------------------------------------------------------------

int solve(node* root , int i , int k){
    if(root == NULL)
    return -1;

    int leftPart = solve(root->left , i , k);
    if(leftPart != -1)
    return leftPart;

    i++;
    if(i == k){
        return root->data;
    }

    return solve(root->right , i , k);
}

int KthSmallest(node* root , int k){
    int i=0;
    int ans = solve(root , i , k);

    return ans;
}

//------------------------------------------------------------------

node* insertIntoBST(node* root , int data){
    if(root == NULL){
        root = new node(data);
        return root;
    }

    if(data < root->data)
    root->left = insertIntoBST(root->left , data);
    else
    root->right = insertIntoBST(root->right , data);

    return root;
}

void take_input(node*& root ){
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
}