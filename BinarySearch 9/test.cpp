#include<iostream>
using namespace std;

int PIVOT(int *arr , int size){
    int start = 0 , end = size-1;
    int mid = start + (end-start)/2;
    while(start < end){
        if(arr[0] <= arr[mid]){
            start = mid + 1;
        }
        else
        end = mid ;

        mid = start + (end-start)/2;
    }
    // cout << start << endl;
    return start;
}

int findkey(int arr[] , int size , int key){
    int pivot = PIVOT(arr , size);
    int start , end ;
    if(arr[0] <= key){
        start = 0;
        end = pivot-1;
    }
    else{
        start = pivot;
        end = size-1;
    }
    int mid = start + (end-start)/2;
    int ans = -1;
    // cout << start << " " << end << endl;
    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            return ans;
        }
        else if(arr[mid] < key)
        start = mid + 1;
        else 
        end = mid - 1;

        mid = start + (end-start)/2;
    }
    return ans;
}

int main(){
    int key;
    cout<<"Enter key\n";
    cin>>key;
    int arr[6] = {23,24,25,11,12,13};
    
    cout<<findkey(arr , 6 , key);
    
}