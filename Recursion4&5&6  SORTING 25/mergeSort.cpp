//  story :- find mid again and again using recusion 
// (to sort left and right part using recursion) 
// and split each element and start sorting using merge function

#include<iostream>
using namespace std;

void merge(int *arr, int s, int e){
    int mid = s+(e-s)/2;
    int len1 = mid - s + 1;
    int len2 = e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copying array in new array
    int mainArrayIndex = s;
    for(int i=0; i<len1; i++){
        first[i] = arr[mainArrayIndex++];
    }
    mainArrayIndex = mid + 1;  // mid + 1 krne ka koi jarurat hai ya aishe yuuuu he.
    for(int i=0; i<len2; i++){
        second[i] = arr[mainArrayIndex++];
    }

    //merge both array
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;
    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }

    }
    while(index1 < len1){
        arr[mainArrayIndex++] = first[index1++];
    }
    while(index2 < len2){
        arr[mainArrayIndex++] = second[index2++];
    }

    delete [] first;
    delete [] second;
}

void mergeSort(int *arr, int s, int e){
    if(s>=e) return ;

    int mid = s+(e-s)/2;

    // //left part sort karna h
    // cout << "pahle" << endl;
    // cout << s <<" "<< e << endl; // --> Step by step how it pass value
    mergeSort(arr, s, mid);
    
    // // right part sort karna h
    // cout << "dushra" << endl;
    // cout << s << " " << e << endl; // --> step by step how it pass value
    mergeSort(arr, mid+1, e);

    // //merge
    // cout << "tishra" << endl;
    // cout << s <<" "<< e << endl; // --> Step by step how it merge
    merge(arr, s, e);
}

int main(){
    int arr[9] = {3,2,1,0};
    
    mergeSort(arr , 0, 3);

    for(int i=0; i<4; i++){
        cout << arr[i] << " ";
    }
}