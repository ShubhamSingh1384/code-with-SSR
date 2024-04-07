// Binary search using recursion;
#include<iostream>
using namespace std;

bool isPresent(int arr[], int start , int end , int key){
    // base case
    if(start > end){
        return false;
    }
    int mid = start + (end-start)/2;
    if(arr[mid] == key){
        return true;
    }
    else if(arr[mid] < key){
       return isPresent(arr , start+1, end, key);
    }
    else{
        return isPresent(arr , start , end-1, key);
    }
}

int main(){
    int arr[] = {11,22,33,44,56};
    int size = 5;
    int key = 44;

    bool ans = isPresent(arr , 0 , size-1 , key);
    if(ans){
        cout << "key is present" << endl;
    }
    else{
        cout << "key is not present" << endl;
    }
}