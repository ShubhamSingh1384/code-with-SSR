// find first and last occurrence of key in array;
#include<bits/stdc++.h>
using namespace std;

int firstOcc(int arr[] , int size, int key){
    int start = 0, end = size - 1,ans = -1;
    int mid = start + (end - start)/2;
    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key){
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int lastOcc(int arr[] , int size , int key){
    int start = 0 , end = size - 1 , ans = -1;
    int mid = start + (end - start)/2;
    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main(){
    int arr[6] = {1,2,3,3,3,4};

    cout<<"First occurrence of 3 is at index "<<firstOcc(arr , 6 , 3)<<endl;
    cout<<"Last occurrence of 3 is at index "<<lastOcc(arr , 6 , 3)<<endl; 

    int total = (lastOcc(arr , 6 , 3) - firstOcc(arr , 6 , 3)) + 1;
    cout<<"The total number key is : "<<total<<endl;
}