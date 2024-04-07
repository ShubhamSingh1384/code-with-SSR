// find pivot element using recursion
#include<iostream>
using namespace std;

int findPivot(int arr[] , int s , int e){

    int mid = s + (e-s)/2;
    // base case
    if(s>e) return mid;

    if(arr[mid] >= arr[0]){
        return findPivot(arr, mid+1, e);
    }
    else{
        return findPivot(arr, s, mid-1);
    }

     
}

int main(){
    int arr[] = {5,6,7,8,9,4};
    int size = 6;
    cout << findPivot(arr , 0 , size-1);
}