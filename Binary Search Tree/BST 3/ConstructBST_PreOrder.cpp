// do aur tarike hai 
// 1) normal jaishe BST construct krte hai thora socho (T.C O(n*n)); 
// 2) preOrder ko sort kr k inOrder nikal le phir BST bna le (T.C O(n*logn))

#include<iostream>
#include<climits>
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

node* solve(int arr[] , int size , int mini , int maxi , int &i){
    if(i >= size)
    return NULL;

    int data = arr[i];
    if(data < mini || data > maxi)
    return NULL;

    i++;
    node* root = new node(data);
    // cout << root->data << " ";

    root->left  = solve(arr , size , mini , data , i);
    root->right = solve(arr , size , data , maxi , i);
    

    return root;
}

node* tree_PreOrderTraversal(int arr[] , int size){
    node* root = NULL;
    int i=0;
    int mini = INT_MIN , maxi = INT_MAX;
    root = solve(arr , size , mini , maxi , i);

    return root;
}

void inOrder(node* root){
    if(root == NULL)
    return;

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);

}

int main(){
    int arr[] = {20,10,5,15,13,35,30,42};
    int size = 8;
    node* root = tree_PreOrderTraversal(arr , size);
    inOrder(root);
}