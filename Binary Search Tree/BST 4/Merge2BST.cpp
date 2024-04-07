#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int d){
        data = d;
        left = right = NULL;
    }
};

void inOrder(TreeNode* root , vector<int>& vec){
    if(root == NULL)
    return;

    inOrder(root->left , vec);
    vec.push_back(root->data);
    inOrder(root->right, vec);
}

void mergeVector(vector<int>& merge , vector<int> vec1 , vector<int> vec2){
    int i=0 , j=0;
    while(i < vec1.size() && j < vec2.size()){
        if(vec1[i] < vec2[j]){
            merge.push_back(vec1[i]);
            i++;
        }
        else{
            merge.push_back(vec2[j]);
            j++;
        }

    }

    while(i < vec1.size())
    merge.push_back(vec1[i++]);

    while(j < vec2.size())
    merge.push_back(vec2[j++]);

}

TreeNode* construct_BST(vector<int> &merge , int s , int e){
    if(s > e){
        return NULL;
    }

    int mid = (s+e)/2;
    int data = merge[mid];
    TreeNode* root = new TreeNode(data);
    root->left = construct_BST(merge , s , mid-1);
    root->right = construct_BST(merge , mid+1 , e);

    return root;
}


vector<int> mergeBST(TreeNode *root1, TreeNode *root2)
{
    // Write your code here.
    vector<int> r1;
    vector<int> r2;
    vector<int> merge;
    inOrder(root1 , r1);
    inOrder(root2 , r2);

    mergeVector(merge , r1 , r2);
    int s =  0 , e = merge.size()-1;
    TreeNode* root = construct_BST(merge , s , e);

    vector<int> ans;

    inOrder(root , ans);

    return ans;

}