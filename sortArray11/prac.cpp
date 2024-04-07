#include<iostream>
using namespace std;

void insertionSort(int *arr , int size){
    for(int i=1; i<size; i++){
        int temp = arr[i];
        int j = i-1;
        while(j >= 0){
            if(arr[j] > temp)
            arr[j+1] = arr[j];
            else 
            break;
            j--;
        }
        arr[j+1] = temp;
    }
}

int main(){
    int arr[] = {8,7,6,5,4};
    insertionSort(arr , 5);
    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
}