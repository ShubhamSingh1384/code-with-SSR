// Diameter Of Binary Tree :- Longest path can be cover on nodes

#include <iostream>
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
    cout << "Enter data" << endl;
    int data;
    cin >> data;
    root = new node(data);

    if(data == -1)
    return NULL;

    cout << "Enter data in left of " << data << endl;
    root->left = build_Tree(root->left);
    cout << "Enter data in right of " << data << endl;
    root->right = build_Tree(root->right);

    return root;
}

int height(node* root){
    if(root == NULL){
        return 0;
    }

    int left = height(root->left);
    int right = height(root->right);
    
    int ans = max(left , right) + 1;

    return ans;
}

// --------------------------------------------------------------------------------------------

// Time Complexity : O(n^2);

int diameterOfTree(node* root){
    if(root == NULL){
        return 0;
    }

    int op1 = diameterOfTree(root->left);    // length of left part (when node only in left part)
    int op2 = diameterOfTree(root->right);  // length of right part (when node only in right part)
    int op3 = height(root->left) + height(root->right) + 1; // length of both left and right (when node in both left and right part)

    int ans = max(op1 , max(op2,op3));

    return ans;
}

//---------------------------------------------------------------------------------------

//---------------------------------------------------------------------------------------

// Time Complexity : O(n);

pair<int,int> diameterFast(node* root){  
    if(root == NULL){
        pair<int,int> p = make_pair(0,0);
        return p;
    }

    pair<int,int> left = diameterFast(root->left);
    pair<int,int> right = diameterFast(root->right);

    int op1 = left.first;  // diameter of left part (when node is in left part only)
    int op2 = right.first; // diameter of right part (when node is in right part only)
    int op3 = left.second + right.second + 1;  // length of both left and right (when node in both left and right part)

    pair<int,int> ans;     // ans.first for diameter and p.second for height
    ans.first = max(op1 , max(op2,op3));  // diameter store kr rhe hai
    ans.second = max(left.second , right.second) + 1;  // height store ke rhe hai

    return ans;
}

//----------------------------------------------------------------------------------------------------


int main(){
    node* root = NULL;

    root = build_Tree(root);

    // cout << "Diameter of tree is " << diameterOfTree(root);
    cout << "Diameter of tree is " << diameterFast(root).first;
}