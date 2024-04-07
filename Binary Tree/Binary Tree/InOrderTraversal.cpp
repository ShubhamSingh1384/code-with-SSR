//  ----------- INORDER TRAVERSAL ---------
// Left  --> Node --> Right

#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;
    
    node(int data){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};


node* build_Tree(node* root){
    int data;
    cout << "Enter data" << endl;
    cin >> data;

    root = new node(data);

    if(data == -1)
    return NULL;

    cout << "Enter data in the left of " << data << endl;
    root->left = build_Tree(root->left);

    cout << "Enter data in the right of " << data << endl;
    root->right = build_Tree(root->right);

    return root ;
}

//-----------------------------------------------------------------------------

void InorderTraversal(node* root){
    // base case
    if(root == NULL){
        return ;
    }

    InorderTraversal(root->left);
    cout << root->data << " ";
    InorderTraversal(root->right);
}

//---------------------------------------------------------------------

// void levelOrderTraversal(node* root){
//     queue<node*>q;
//     q.push(root);
//     q.push(NULL);

//     while(!q.empty()){
//         node* temp = q.front();
//         q.pop();

//         if(temp == NULL){
//             cout << endl;
//             if(!q.empty())
//             q.push(NULL);
//         }
//         else{
//             cout << temp -> data << " ";
//             if(temp->left){
//                 q.push(temp->left);
//             }
//             if(temp->right){
//                 q.push(temp->right);
//             }
//         }
//     }

// }


int main(){

    node* root = NULL;

    root = build_Tree(root);

    // cout << "printing level order traversal" << endl;
    // levelOrderTraversal(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    InorderTraversal(root);
}