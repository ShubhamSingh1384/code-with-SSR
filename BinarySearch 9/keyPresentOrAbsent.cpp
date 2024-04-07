// Check whether key is present or absent in rotated sorted array ;
#include<iostream>
using namespace std;

int pivot(int arr[] , int size ){
    int start = 0 , end = size - 1;
    int mid = start + (end - start)/2;
    while(start<end){
        if(arr[0] <= arr[mid]){
            start = mid + 1;
        }
        else {
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}

int binarysearch(int arr[] , int s , int e , int key){
    int start = s , end = e;
    int mid = start + (end - start)/2;
    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int findkey(int arr[] , int size , int key){
    int Pivot = pivot(arr , size);
    if(key >= arr[Pivot] && key <= arr[size - 1]){
        return binarysearch(arr , Pivot , size-1 , key);
    }
    else{
        return binarysearch(arr , 0 , Pivot - 1 , key);
    }
}

int main(){
    int key;
    cout<<"Enter key\n";
    cin>>key;
    int arr[6] = {23,24,25,11,12,13};
    
    cout<<findkey(arr , 6 , key);
    
}