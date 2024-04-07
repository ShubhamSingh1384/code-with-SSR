// Find first and last Occurance element using recursion
#include<iostream>
using namespace std;

int leftOcc(int arr[] , int s, int e, int key, int ans = -1){
    int mid = s + (e-s)/2;
    // base case
    if(s>e) return ans;

    if(arr[mid] == key){
        ans = mid;
        return leftOcc(arr, s, mid-1, key, ans);
    }
    else if(arr[mid] < key){
        return leftOcc(arr, mid+1, e, key, ans);
    }
    else {
        return leftOcc(arr, s, mid-1, key, ans);
    }

}

int rightOcc(int arr[], int s, int e, int key, int ans= -1){
    int mid = s + (e-s)/2;
    // base case
    if(s>e) return ans;

    if(arr[mid] == key){
       ans = mid;
        return rightOcc(arr, mid+1, e, key, ans);
    }
    else if(arr[mid] > key){
        return rightOcc(arr, s, mid-1, key, ans);
    }
    else{
        return rightOcc(arr, mid+1, e, key, ans);
    }
}

int main(){
    int arr[] = {3,4,4,4,4,4,7,8};
    int size = 8;
    int key = 4;

    int count = rightOcc(arr, 0, size-1, key) - leftOcc(arr , 0 , size-1, key) + 1;

    cout << "The first and last occurance of element is : " << leftOcc(arr , 0 , size-1, key) << " " << rightOcc(arr, 0, size-1, key) << endl;

    cout << "total element present in array is : " << count << endl;
}