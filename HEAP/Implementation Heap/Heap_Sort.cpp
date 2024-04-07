// TC: O(nlog n)

#include<iostream>
using namespace std;

void heapify(int arr[] , int size , int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;
    if(left <= size && arr[largest] < arr[left]){
        largest = left;
    }
    if(right <= size && arr[largest] < arr[right]){
        largest = right;
    }

    if(largest != i){
        swap(arr[largest] , arr[i]);
        heapify(arr , size , largest);
    }
}

void heapSort(int arr[] , int n){
    int size = n;
    while( size > 1){
        swap(arr[1],arr[size]);
        size--;
        heapify(arr , size , 1);

    }
}

int main(){
    int arr[] = {-1,54,53,55,52,50};
    int size = 6;
    for(int i=size/2; i>0; i--){
        heapify(arr , size , i);
    }

    heapSort(arr , size-1);

    for(int i=1; i<size; i++){
        cout << arr[i] << " ";
    }
}