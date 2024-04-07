#include<iostream>
#include<queue>
#include<map>
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



vector<int> Top_View(node* root){
    vector<int> ans;
    if(root == NULL){
        return ans;
    }

    map<int,int> topNode;
    queue<pair<node* , int>> q;
    int hd = 0;
    q.push(make_pair(root , hd));

    while(!q.empty()){
        pair<node*,int> temp = q.front();
        q.pop();
        node* frontNode = temp.first;
        int hd = temp.second;

        //if one value is present for a HD , then do this
        if(topNode.find(hd) == topNode.end()){   // if hd is not avilable in map then it return topNode.end();
            topNode[hd] = frontNode->data;
        }

        if(frontNode->left)
        q.push(make_pair(frontNode->left , hd-1));

        if(frontNode->right)
        q.push(make_pair(frontNode->right , hd+1));
    }

    for(auto i:topNode){
        ans.push_back(i.second);
    }

    return ans;
}

int main(){

    // 1 2 4 -1 -1 5 -1 -1 3 6 8 -1 -1 -1 7 -1 -1

    node* root = NULL;
    root = build_tree(root);

    vector<int> topView = Top_View(root);

    for(int i=0; i<topView.size(); i++){
        cout << topView[i] << " ";
    }

}