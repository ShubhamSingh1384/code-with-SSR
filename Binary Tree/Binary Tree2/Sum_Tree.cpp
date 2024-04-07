#include<iostream>
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

node* build_tree(node* root){
    int data;
    cout << "Enter data" << endl;
    cin >> data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout << "Enter data in left of  " << data << endl;
    node* left = build_tree(root->left);
    cout << "Enter data in right of " << data << endl;
    node* right = build_tree(root->right);
    
    return root;
}

pair<bool,int> isSum_tree(node* root){
    if(root == NULL){
        pair<bool,int> p = make_pair(true,0);
        return p;
    }

    if(root->left == NULL && root->right == NULL){
        pair<bool,int> p = make_pair(true,root->data);
        return p;
    }

    pair<bool,int> left = isSum_tree(root->left);
    pair<bool,int> right = isSum_tree(root->right);

    bool condn = root->data == left.second + right.second;

    

    pair<bool,int> ans;
    if(left.first && right.first && condn){
        ans.first = true;
        // ans.second = root->data + left.second + right.second ;
        ans.second = 2*root->data;
    }
    else{
        ans.first = false;
        ans.second = 2*root->data;
    }

    return ans;
}

bool check_sumTree(node* root){

    return isSum_tree(root).first;
}

int main(){
    node* root = NULL;
    root = build_tree(root);

    cout << "Tree is sum tree or not " << check_sumTree(root) << endl;

    // 70 20 10 -1 -1 10 -1 -1 30 -1 -1
}