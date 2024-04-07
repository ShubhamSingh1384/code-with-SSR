// custom compare thik se samajh lo
// TC : O(N*Klog(K))
// SC : O(N*K)
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    int i;
    int j;
    node(int data , int row , int col){
        this->data = data;
        i = row;
        j = col;
    }
};

class compare{
    public:
    bool operator()(node* a , node* b){
        return a->data > b->data;
    }
};

vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k){
    priority_queue<node*, vector<node*> , compare> minHeap;

    // step1: saare arrays k first element insert h
    for(int i=0; i<k; i++){
        node* tmp = new node(kArrays[i][0] , i , 0);
        minHeap.push(tmp);
    }
    vector<int> res;
    // step2:
    while(minHeap.size() > 0){
        node* tmp = minHeap.top(); // top me minimum element hai
        minHeap.pop();
        res.push_back(tmp->data);
        int i = tmp->i;
        int j = tmp->j;
        if(j+1 < kArrays[i].size()){
            node* next = new node(kArrays[i][j+1] , i , j+1);
            minHeap.push(next);
        }
    }
    return res;
}

int main(){
    vector<vector<int>> vec = {{1,2,3,4},{2,5,6,7},{3,8,9,10},{4,11,12,13}};
    vector<int> sortedMerge = mergeKSortedArrays(vec, 4);
    for(auto i:sortedMerge)
    cout << i << " ";
    cout << endl;
}