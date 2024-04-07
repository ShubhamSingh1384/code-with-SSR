// Heapify Algorithm is use to arrange data of array in maxHeap or MinHeap order

// HW :- Build O(n) me kaishe hua;

#include<iostream>
using namespace std;


void heapify(int arr[] , int size , int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i + 1;

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

int main(){
    int arr[] = {-1,1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=n/2; i>0; i--){
        heapify(arr , n-1 , i);
    }

    cout << "printing the array now" << endl;

    for(int i=1; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
