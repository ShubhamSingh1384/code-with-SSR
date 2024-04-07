#include<bits/stdc++.h>
using namespace std;

int firstOcc(int arr[] , int size , int key){
    int s=0 , e=size-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s <= e){
        if(arr[mid] == key){
            ans = mid;
            e = mid -1;
        }
        else if(arr[mid] > key)
        e = mid - 1;
        else 
        s = mid + 1;

        mid = (s+e)/2;
    }
    return ans;
}

int lastOcc(int arr[] , int size , int key){
    int s=0 , e=size-1;
    int mid = (s+e)/2, ans=-1;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            s = mid+1;
        }
        else if(arr[mid] > key)
        e = mid-1;
        else
        s = mid+1;

        mid = (s+e)/2;
    }
    return ans;
}

int main(){
    int arr[6] = {3,3,3,3,3,3};

    cout<<"First occurrence of 3 is at index "<<firstOcc(arr , 6 , 3)<<endl;
    cout<<"Last occurrence of 3 is at index "<<lastOcc(arr , 6 , 3)<<endl; 

    int total = (lastOcc(arr , 6 , 3) - firstOcc(arr , 6 , 3)) + 1;
    cout<<"The total number key is : "<<total<<endl;
}