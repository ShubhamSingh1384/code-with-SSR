#include<iostream>
#include<queue>
#include<vector>
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

vector<int> verticalOrder(node* root){
    map<int, map<int,vector<int>>> nodes;
    queue<pair<node* , pair<int,int>>> q;
    vector<int> ans;

    if(root == NULL){
        return ans;
    }

    q.push(make_pair(root , make_pair(0,0)));

    while(!q.empty()){
        pair<node* , pair<int,int>> temp = q.front();
        node* frontNode = temp.first;
        q.pop();
        int hd = temp.second.first;
        int lvl = temp.second.second;

        nodes[hd][lvl].push_back(frontNode->data);

        if(frontNode->left)
        q.push(make_pair(frontNode->left, make_pair(hd-1, lvl+1)));

        if(frontNode->right)
        q.push(make_pair(frontNode->right , make_pair(hd+1 ,lvl+1)));
    }

    for(auto i:nodes){
        for(auto j:i.second){
            for(auto k:j.second){
                ans.push_back(k);
            }
        }
    }

    return ans;
    
}

int main(){
    node* root = NULL;
    root = build_tree(root);

    vector<int> ans = verticalOrder(root);

    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }

    // 1 2 4 -1 -1 5 -1 -1 3 6 -1 8 -1 -1 7 -1 9 -1 -1
}