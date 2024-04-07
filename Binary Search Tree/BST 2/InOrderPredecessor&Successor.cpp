// Use InOrder technique (becoz it print root->data in sorted order);

#include<iostream>
#include<queue>
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

//----------------------------------------------------------------------------------------
pair<int,int> findPreSuc(node* root , int key){
    node* temp = root;
    int pred = -1;
    int succ = -1;
    while(temp->data != key){
        if(temp->data > key){
            succ = temp->data;
            temp = temp->left;
        }
        else{
            pred = temp->data;
            temp = temp->right;
        }
    }

    // pred and suc

    // predecessor
    node* leftTree = temp->left;
    while(leftTree != NULL){
        pred = leftTree->data;
        leftTree = leftTree->right;
    }

    // successor
    node* rightTree = temp->right;
    while(rightTree != NULL){
        succ = rightTree->data;
        rightTree = rightTree->left;
    }

    pair<int,int> ans = make_pair(pred , succ);

    return ans;
}

//----------------------------------------------------------------------------------------

node* insertIntoBST(node* root , int data){
    if(root == NULL){
        root = new node(data);
        return root;
    }

    if(data < root->data){
        root->left = insertIntoBST(root->left , data);
    }
    else
    root->right = insertIntoBST(root->right , data);

    return root;
}

void input_taker(node*& root){
    int data ;
    cin >> data;
    while(data != -1){
        root = insertIntoBST(root , data);
        cin >> data;
    }
}


int main(){
    node* root = NULL;
    input_taker(root);
    

    // 
}
