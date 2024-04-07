#include<iostream>
#include<map>
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
    if(data == -1)
    return NULL;
    root = new node(data);
    root->left = build_tree(root->left);
    root->right = build_tree(root->right);

    return root;
}

node* createParentMapping(node* root , int target , map<node*,node*>& mapping){
    node* res = NULL;
    queue<node*> q;
    q.push(root);
    mapping[root] = NULL;
    while(!q.empty()){
        node* front = q.front();
        q.pop();
        if(front->data == target){
            res = front;
        }
        if(front->left){
            mapping[front->left] = front;
            q.push(front->left);
        }
        if(front->right){
            mapping[front->right] = front;
            q.push(front->right);
        }
    }
    return res;
}

int burn_tree(node* target , map<node*,node*> &nodeToParent){
    int time = 0;
    map<node*,bool> visited;
    visited[target] = 1;
    queue<node*> q;
    q.push(target);
    while(!q.empty()){
        int size = q.size();
        bool flag = 0;
        for(int i=0; i<size; i++){
            node* front = q.front();
            q.pop();

            if(front->left && !visited[front->left]){
                flag = 1;
                q.push(front->left);
                visited[front->left] = 1;
            }

            if(front->right && !visited[front->right]){
                flag = 1;
                q.push(front->right);
                visited[front->right] = 1;
            }

            if(nodeToParent[front] && !visited[nodeToParent[front]]){
                flag = 1;
                q.push(nodeToParent[front]);
                visited[nodeToParent[front]] = 1;
            }

        }

        if(flag){
            time++;
        }

    }
    return time;
}

int minTime(node* root , int target){
    //step 1: create nodeToParent mapping
    //step 2: find target node
    //step 3: burn the tree in min time

    
    map<node*,node*> nodeToParent;
    node* tar = createParentMapping(root , target , nodeToParent);
    // map<int,bool> visited;
    int ans = burn_tree(tar , nodeToParent);

    return ans;
}

int main(){
    node* root = build_tree(NULL);
    int target = 8;
    cout << "Total time to burn whole tree : " << minTime(root , target) << endl;

    // 1 2 4 -1 -1 5 7 -1 -1 8 -1 -1 3 -1 6 -1 9 -1 10 -1 -1

}