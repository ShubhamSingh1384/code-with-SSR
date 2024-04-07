#include<iostream>
using namespace std;

int peakMountain(int arr[] , int size){
    int s=0 , e = size-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
            ans = mid;
            break;
        }
        else if(arr[mid] > arr[mid-1] && arr[mid] < arr[mid+1]){
            s = mid + 1;
        }
        else
        e = mid - 1;

        mid = s+(e-s)/2;
    }
    return ans;
}

int main(){
    int arr[] = {1,4,5,12,7,6,5};
    cout << "Peak of the Mountain is at index : " << peakMountain(arr , 7);
}