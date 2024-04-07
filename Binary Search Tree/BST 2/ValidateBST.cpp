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

bool solve(node* root , int mini , int maxi){
    if(root == NULL)
    return true;

    if(root->data >= mini && root->data <= maxi){
        bool checkLeft = solve(root->left , mini , root->data);
        bool checkRight = solve(root->right , root->data , maxi);

        return checkLeft && checkRight;
    }
    else{
        return false;
    }

}

bool Is_Validate(node* root){
    
    return solve(root , INT_MIN , INT_MAX);
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
    cout << Is_Validate(root);

    // 
}
