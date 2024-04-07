#include<iostream>
#include<queue>
// #include<vector>   // es k bina kaishe run ho rha hai ;
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        data = d;
        left = right = NULL;
    }
};

node* build_tree(node* root){
    int data;
    cin >> data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }

    root->left = build_tree(root->left);
    root->right = build_tree(root->right);

    return root;

}

void leftNode(node* root , vector<int>& ans){
    if(root == NULL || (root->left == NULL && root->right == NULL)){
        return ;
    }

    ans.push_back(root->data);
    
    if(root->left)
    leftNode(root->left , ans);
    else
    leftNode(root->right , ans);    
}

void leafNode(node* root , vector<int>& ans){
    if(root == NULL){
        return ;
    }

    if(root->left == NULL && root->right == NULL){
        ans.push_back(root->data);
        return ;
    }

    leafNode(root->left , ans);
    leafNode(root->right , ans);
}

void rightNoderev(node* root , vector<int>& ans){
    if(root == NULL || (root->right == NULL && root->left == NULL)){
        return ;
    }

    if(root->right){
        rightNoderev(root->right , ans);
    }
    else{
        rightNoderev(root->left , ans);
    }

    ans.push_back(root->data);

}

vector<int> BoundaryTraversal(node* root){
    vector<int> ans; 
    ans.push_back(root->data);
    leftNode(root->left , ans);
    leafNode(root->left , ans);
    leafNode(root->right, ans);
    rightNoderev(root->right,ans);

    return ans;

}

int main(){
    node* root = NULL;
    root =  build_tree(root);
    vector<int> ans = BoundaryTraversal(root);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    // 1 2 4 8 -1 13 -1 -1 -1 5 11 -1 -1 12 -1 -1 3 6 -1 -1 7 9 -1 -1 10 -1 -1
}
