// first check CBT (Complete Binary Tree)
// Satisfy Heap Order (maxheap or minheap)

// TC = O(n)
// SC = O(n)

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left ;
    Node* right;
    Node(int d){
        data = d;
        left = right = NULL;
    }
};

//-----------------------------------------------------------------------------------------------------

int countNode(Node* root){
    if(root == NULL)
    return 0;

    int ans = 1 + countNode(root->left) + countNode(root->right);
    return ans;
}

bool isCBT(Node* root , int index , int cnt){
    if(root == NULL)
    return true;

    if(index >= cnt)
    return false;
    else{
        bool left = isCBT(root->left , 2*index+1,cnt);
        bool right = isCBT(root->right , 2*index+2 , cnt);
        return (left && right);
    }
}

bool isMaxOrder(Node* root){
    //left node
    if(root->left == NULL && root->left == NULL){
        return true;
    }

    if(root->right == NULL){
        return (root->data > root->left->data);
    }
    else{
        bool left = isMaxOrder(root->left);
        bool right = isMaxOrder(root->right);

        return (left && right &&
        (root->data > root->left->data && root->data > root->right->data));
    }
}

bool isHeap(struct Node* root){
    int index = 0;
    int totalCount = countNode(root);
    if(isCBT(root , index , totalCount) && isMaxOrder(root))
    return true;
    else
    return false;
}

//----------------------------------------------------------------------------------------------------

