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

//----------------------------------------------------------------------------------------------

vector<int> Zig_Zag_Traversal(node* root){
    vector<int> result;
    if(root == NULL)
        return result;

    queue<node*> q;
    q.push(root);
    // q.push(NULL);
    bool leftToRight = true;
    while(!q.empty()){
        int size = q.size();
        vector<int> ans(size);
        //Level Process
        for(int i=0; i<size; i++){
            node* frontNode = q.front();
            q.pop();

            int index = leftToRight ? i : size-i-1;
            ans[index] = frontNode->data;

            //normal inset or reverse insert
            if(frontNode->left)
            q.push(frontNode->left);

            if(frontNode->right)
            q.push(frontNode->right);
        }
        // direction change karni hai
        leftToRight = !leftToRight;


        for(auto i:ans){
            result.push_back(i);
        } 
    }
    return result;
}

//------------------------------------------------------------------------------------------------------

int main(){
    node* root = NULL;
    root = build_tree(root);

    vector<int>reverse = Zig_Zag_Traversal(root);

    for(int i=0; i<reverse.size(); i++){
        cout << reverse[i] << " ";
    }
}