// Find the number of key present in given array;
#include<iostream>
using namespace std;

int firstOcc(int arr[] , int size , int key){
    int start = 0, end = size - 1, mid = start + ((end - start)/2);
    int ans = -1;
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
        mid = start + ((end - start)/2);
    }
    return ans;
}

int lastOcc(int arr[] , int size , int key){
    int start = 0, end = size - 1, mid = start + ((end - start)/2);
    int ans = -1;
    while(start <= end){
        if(arr[mid] == key){
            start = mid + 1;
            ans = mid;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + ((end - start)/2);
    }
    return ans ;
}

int main(){
    int arr[5] = {2,2,2,2,2};

    int first = firstOcc(arr , 5 , 2);
    int last = lastOcc(arr , 5 , 2);
    int total_key = (last - first) + 1;
    cout<<"The total number of key in array is : "<<total_key<<endl;

    return 0;
}