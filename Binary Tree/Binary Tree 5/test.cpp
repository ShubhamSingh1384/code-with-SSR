// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        data = d;
        left = right = NULL;
    }
};

int findkey(int inOrder[] ,int n , int key){
    for(int i=0; i<n; i++){
        if (inOrder[i] == key)
        return i;
    }
    return -1;
}

Node* solve(int inOrder[] , int preOrder[] , int &index , int ins , int ine , int n){
    if(index >= n || ins > ine){
        return NULL;
    }

    int element = preOrder[index++];
    int position = findkey(inOrder , n , element);
    Node* root = new Node(element);
    cout << "left call: " << index << endl;
    root->left = solve(inOrder , preOrder , index , ins , position-1 , n);
    cout << "right call: " << index << endl;
    root->right = solve(inOrder , preOrder , index , position+1 , ine , n);

    return root;

}

Node* build_tree(int inOrder[] , int preOrder[] , int n){
    int preO = 0;
    int inOs = 0 , inOe = n-1;
    Node* root = solve(inOrder , preOrder , preO , inOs , inOe , n);

    return root;
}

void PostOrder(Node* root){
    if(root == NULL)
    return ;

    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data << " ";
}


vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int> ans;
    int level = 0;
    map<int,vector<int>> m;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    
    
    while(!q.empty()){
        int size = q.size();
        vector<int> in(size-1);
        
        for(int i=0; i<size; i++){
            Node* front = q.front();
            q.pop();
            if(front == NULL){
                m[level] = in;
                level++;
                if(!q.empty())
                q.push(NULL);
            }
            else{
                in[i] = front->data;
                if(front->left)
                q.push(front->left);
                
                if(front->right)
                q.push(front->right);
            }
        }
    }
    while(level >= 0){
        int size = m[level].size();
        for(int i=0; i<size; i++){
            ans.push_back(m[level][i]);
        }
        level--;
    }
    return ans;
}

Node* build_tree(Node* root){
    int data ;
    cin >> data;
    if(data == -1)
    return NULL;
    root = new Node(data);
    root->left = build_tree(root->left);
    root->right = build_tree(root->right);

    return root;
}


class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    
    void solve(Node* root , map<int,int> &ans , int level){
        if(root == NULL)
        return ;
        
        if(ans.find(level) != ans.end())
        ans[level] = root->data;
        
        solve(root->left , ans , level-1);
        solve(root->right , ans , level+1);
    }
    
    vector<int> topView(Node *root)
    {
        //Your code here
        vector<int> ans;
        map<int,int> m;
        solve(root , m , 0);
        
        for(auto i:m){
            ans.push_back(i.second);
        }
        
        return ans;
    }

};

int main(){
    // int inOrder[] = {3,1,4,0,5,2};
    // int preOrder[] = {0,1,3,4,2,5};
    // int size = 6;
    // Node* root = build_tree(inOrder , preOrder , size);
    // PostOrder(root);

    Node* root = build_tree(NULL);
    vector<int> ans = reverseLevelOrder(root);
    for(auto i:ans){
        cout << i << " ";
    }

    // 10 20 40 -1 -1 50 -1 -1 30 -1 -1

}