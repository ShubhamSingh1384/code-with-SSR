#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cstdlib>
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

    cout << "Enter data in left of " << data << endl;
    root->left = build_tree(root->left);
    cout << "Enter data in right of " << data << endl;
    root->right = build_tree(root->right);

    return root;
}

//--------------------------------------------------------------------------------------------------

int height(node* root){
    if(root == NULL){
        return 0;
    }

    int left = height(root->left);
    int right = height(root->right);

    int ans = max(left , right) + 1;

    return ans;
}

//---------------------------------------------------------------------------

// Time Complexity : O(n^2); n-> number of nodes;

bool check_balanced(node* root){
    if(root == NULL){
        return true;
    }

    bool left = check_balanced(root->left);
    bool right = check_balanced(root->right);

    bool diff = abs(height(root->left) - height(root->right)) <= 1;

    if(left && right && diff) return true;
    else
    return false;
}

//------------------------------------------------------------------------------------------------------

// Time Complexity : O(n);

pair<bool,int> is_balance_Fast(node* root){
    if(root == NULL){
        pair<bool,int> p = make_pair(true,0);
        return p;
    }

    pair<int,int> left = is_balance_Fast(root->left);
    pair<int,int> right = is_balance_Fast(root->right);

    bool op1 = left.first;
    bool op2 = right.first;
    bool op3 = abs (left.second - right.second) <= 1;

    pair<bool,int> ans ;
    ans.second = max(left.second , right.second) + 1;

    if(op1 && op2 && op3){
        ans.first = true;
    }
    else
    ans.first = false;

    return ans;
}

int main(){

    node* root = NULL;
    root = build_tree(root);

    cout << "first " << check_balanced(root) << endl;
    cout << "Balanced or not : " << is_balance_Fast(root).first;
}
