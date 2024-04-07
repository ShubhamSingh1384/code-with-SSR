// lecture 75
// KthSmallest k liye maxheap use kiye 
// KthLargest k liye minheap use krte

// find TC 

#include<iostream>
#include<queue>
using namespace std;

int kthSmallest(int arr[] , int size , int k){
    priority_queue<int> pq;
    
    //step1
    for(int i=0; i<k; i++){
        pq.push(arr[i]);
    }
    
    //step2:
    for(int i=k; i<size; i++){
        if(arr[i] < pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }

        // ans = pq.top();
    }

    int ans = pq.top();
    return ans;

}

int main(){
    int arr[] = {2,3,1,9,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << kthSmallest(arr , size , 5);
}