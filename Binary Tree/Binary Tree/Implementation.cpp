// Non linear data structure

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

node* buildTree(node* root){
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout << "Enter data for inserting in left " << endl;
    root -> left = buildTree(root->left);
    cout << "Enter data for inserting in right " << endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTrivalsal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout << endl;
            if(!q.empty())
            q.push(NULL);
        }
        else{
            cout << temp -> data << " ";
            if(temp -> left){
                q.push(temp -> left);
            }

            if(temp -> right){
                q.push(temp -> right);
            }
        }
    }
}

int main(){
    node* root = NULL;

    //creating a tree
    root = buildTree(root);

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    // level order
    cout << "Printing level order Trivalsal" << endl;
    levelOrderTrivalsal(root);

}