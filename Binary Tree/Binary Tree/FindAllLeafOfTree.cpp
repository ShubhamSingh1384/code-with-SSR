#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data = data;
        this->left = left;
        this->right = right;
    }
};

node* build_Tree(node* root){
    int data;
    cout << "Enter data" << endl;
    cin >> data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }

    cout << "Enter data in left of " << data << endl;
    root->left = build_Tree(root->left);

    cout << "Enter data in right of " << data << endl;
    root->right = build_Tree(root->right);

    return root;
}

//-------------------------------------------------------------------------------------------

void countByLNR(node* root , int& cnt){
    if(root == NULL){
        return ;
    }

    countByLNR(root->left , cnt);
    if(root->left == NULL && root->right == NULL)
    cnt++;

    countByLNR(root->right , cnt);
}

int allLeaf_tree(node* root){
    int cnt = 0;
    countByLNR(root, cnt);

    return cnt;
}

//------------------------------------------------------------------------------------------------

int main(){
    node* root = NULL;
    root = build_Tree(root);

    cout << "Total number of leaf in the tree : " << allLeaf_tree(root); 
}