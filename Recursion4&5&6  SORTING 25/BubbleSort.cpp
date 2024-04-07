// Sort Array using bubble method .

// KAHANI :- pichhe se sort hote aata hai OK Ji;

#include<iostream>
using namespace std;

void sortArray(int arr[], int size){
    // basse case
    if(size == 0 || size == 1) return ;

    for(int i=0; i<size-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i] , arr[i+1]);
        }
    }
    // recursive call
    sortArray(arr, size-1);
}

int main(){
    int arr[] = {9,7,4,2};
    int size = 4;
    sortArray(arr , size);

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}