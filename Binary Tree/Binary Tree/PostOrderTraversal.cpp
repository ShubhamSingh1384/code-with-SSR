// ----------------POST-ORDER TRAVERSAL ----------
// Left ---> Right ---> Node

#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
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

//---------------------------------------------------------------------------

void postOrderTraversal(node* root){
    // base case 
    if(root == NULL){
        return ;
    }

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}

// void leverOrderTraversal(node* root){
//     queue<node*> q;
//     q.push(root);
//     q.push(NULL);

//     while(!q.empty()){
//         node*temp = q.front();
//         q.pop();

//         if(temp == NULL){
//             cout << endl;
//             if(!q.empty())
//             q.push(NULL);
//         }
//         else{
//             cout << temp->data << " ";
//             if(temp->left)
//             q.push(temp->left);
//             if(temp->right)
//             q.push(temp->right);
//         }
//     }
// }


int main(){
    node*root = NULL;
    
    root = build_Tree(root);
    // leverOrderTraversal(root);

    postOrderTraversal(root);
}