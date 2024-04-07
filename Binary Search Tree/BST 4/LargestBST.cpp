#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left ;
    node* right ;

    node(int d){
        data = d;
        left = right = NULL;
    }
};

node* insertIntoBST(node* root , int data){
    if(root == NULL){
        root = new node(data);
        return root;
    }

    if(data < root->data){
        root->left = insertIntoBST(root->left , data);
    }
    else{
        root->right = insertIntoBST(root->right , data);
    }

    return root;
}

void to_input(node* &root){
    int data;
    cin >> data;
    while(data != -1){
        root = insertIntoBST(root , data);
        cin >> data;
    }
}

bool CheckBST(node* root){
    if(root == NULL){
        return 1;
    }
    if(root->left == NULL && root->right == NULL){
        return 1;
    }
    if(root->left->data >= root->data || root->right->data <= root->data){
        return 0;
    }

    bool leftAns = CheckBST(root->left);
    bool rightAns = CheckBST(root->right);

    bool ans = leftAns && rightAns;
    
    
    return ans;
}

int CountBst(node* root){
    int count = 0;
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* front = q.front();
        q.pop();
        if(CheckBST(front))
        count++;
        
        if(front->left)
        q.push(front->left);
        if(front->right)
        q.push(front->right);
    }

    return count;
}

void inOrder(node* root){
    if(root == NULL)
    return ;

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

node* buildTree(node* root){
    int data;
    cin >> data;
    if(data == -1){
        return NULL;
    }
    root = new node(data);
    root->left = buildTree(root->left);
    root->right = buildTree(root->right);

    return root;
}

int main(){
    node* root = NULL;
    // to_input(root);
    root = buildTree(root);
    // inOrder(root);

    cout << CountBst(root);
    // 5 2 1 -1 -1 3 -1 -1 4 -1 -1

    // 13 5 6 14 7 89 65 32 -1
}