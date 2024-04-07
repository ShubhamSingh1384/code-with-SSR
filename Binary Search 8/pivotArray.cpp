// Pivot Array :- Index which have smallest value; arr[] = {2,3,4,34,54,1}; Pivot is 6;
#include<iostream>
using namespace std;
int searchPivot(int arr[] , int size){
    int start = 0 ;
    int end = size - 1;
    int mid = start + (end - start)/2;
    while(start < end){
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

int main(){
    int arr[6] = {23,24,25,6,7,8};
    cout<<"Pivot is : "<<searchPivot(arr , 6);
}