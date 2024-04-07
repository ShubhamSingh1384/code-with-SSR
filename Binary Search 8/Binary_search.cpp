// Binary Search --> is only valid for monotonic function (means array should be in ascecding or desending order)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int search_binary(int arr[] , int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + ((end - start)/2);
    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + ((end - start)/2);
    }
    return -1;
}
int main(){
    int evenarr[6] = {2,4,5,6,78,8};
    int oddarr[5] = {9,8,7,6,5};
    sort(oddarr , oddarr + 5);     // it is used unnecessarily because 
    sort(evenarr , evenarr + 6);   //           binary search is only valid for monotonic function;
    
    cout<<"Key is avilable in index : "<<search_binary(evenarr , 6 , 8)<<endl;
    cout<<"Key is avilable in index : "<<search_binary(oddarr , 5 , 8)<<endl;

    return 0;
}