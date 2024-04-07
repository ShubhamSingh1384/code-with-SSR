// Construct a tree using Inorder(LNR) ans Preorder(NLR);
#include<iostream>
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

class Solution{
    private:
    // int findPosition(int in[] , int element , int n){
    //     for(int i=0; i<n; i++){
    //         if(in[i] == element)
    //         return i;
    //     }

    //     return -1;
    // }

    node* solve(int in[], int pre[] , int &index , int inorderStart , int inorderEnd ,
     int n , map<int,int> track){
        //base case
        if(index >= n || inorderStart > inorderEnd){
            return NULL;
        }

        int element = pre[index++];
        node* root = new node(element);
        // int position = findPosition(in , element , n);

        // using map to reduce time complexity;
        int position = track[element];

        // recursive call
        root->left = solve(in , pre , index , inorderStart , position-1 , n ,  track);
        root->right = solve(in , pre , index , position+1 , inorderEnd , n , track);

        return root;

    }
    public:
    node* buildTree(int in[] , int pre[] , int n){
        int preOrderIndex = 0;
        int inOrderstart = 0 , inOrderend = n-1;
        map<int,int> track;
        for(int i=0; i<n; i++){
            track[in[i]] = i;
        }
        node* ans = solve(in , pre , preOrderIndex , inOrderstart , inOrderend , n , track);

        return ans;
    }

};

void PostOrder(node* root){
    if(root == NULL)
    return ;

    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data << " ";
}

int main(){
    int inOrder[] = {3,1,4,0,5,2};
    int preOrder[] = {0,1,3,4,2,5};
    int size = 6;
    Solution s;
    node* root = s.buildTree(inOrder , preOrder , size);
    PostOrder(root);

}