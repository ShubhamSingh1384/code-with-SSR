// Minimum and maximum find kr lo khud se

// find Inorder Predecessor and Inorder Successor

#include<iostream>
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

//--------------------------------------------------------------------------

int minVal(Node* root){
    int ans;
    while(root != NULL){
        ans = root->data;
        root = root->left;
    }
    return ans;
}

Node* deleteFromBST(Node* root , int val){
    if(root == NULL)
    return root;

    if(root->data == val){
        // 0 child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        // 1 child
        if(root->left != NULL && root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        else if(root->left == NULL && root->right != NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }

        // 2 children
        if(root->left != NULL && root->right != NULL){
            int mini = minVal(root->right);
            root->data = mini;
            root->right = deleteFromBST(root->right , mini);
            return root;
        }
    }

    else if(root->data > val){
        root->left = deleteFromBST(root->left , val);
    }
    else{
        root->right = deleteFromBST(root->right , val);
    }

    return root;
}

//--------------------------------------------------------------------------

Node* insertIntoBST(Node* root , int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }

    if(data < root->data)
    root->left = insertIntoBST(root->left , data);
    else
    root->right = insertIntoBST(root->right , data);

    return root;
}

void take_input(Node* &root){
    int data;
    cin >> data;
    while(data != -1){
        root = insertIntoBST(root , data);
        // cout << root->data << " ";
        cin >> data;
    }
}

void inOrder(Node* root){
    if(root == NULL)
    return;

    inOrder(root->left);
    cout << root -> data << " ";
    inOrder(root->right);
}

int main(){
    Node* root = NULL;
    take_input(root);
    inOrder(root);
    deleteFromBST(root , 8);
    cout << endl;
    inOrder(root);

    // 10 8 7 11 -1
}