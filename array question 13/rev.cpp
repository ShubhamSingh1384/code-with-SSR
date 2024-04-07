#include<iostream>
using namespace std;

void mergearray(int arr[] , int size , int arr1[] , int size1 , int Merge[]){
    int j=0;
    int mini = min(size , size1) , l=0 , k=0, i;
    while(l<size && k<size1){
        if(arr[l] < arr1[k]){
            Merge[j++] = arr[l++];
        }
        else{
            Merge[j++] = arr1[k++];
        }
    }
    while(l < size){
        Merge[j++] = arr[l++];
    }
    while(k < size1){
        Merge[j++] = arr1[k++];
    }

}

int main(){
    int arr[] = {1,3,5,7,9};
    int arr1[] = {2,4,6};
    int Merge[8] = {}; 
    mergearray(arr , 5 , arr1 , 3 , Merge);

    for(int i=0; i<8; i++){
        cout << Merge[i] << " ";
    }
}