// Linear search using recursion
#include<iostream>
using namespace std;

bool isPresent(int arr[] , int size, int key){
    // base case
    if(size==0) return false;
    
    if(arr[0] == key){
        return true;
    }
    else{
        int remainPart = isPresent(arr+1, size-1, key);
        return remainPart;    // Is me remainPart kya return krta hai ya store krta hai 
    }
}

int main(){
    int arr[] = {5,4,6,7,9,3};
    int size = 6;
    int key = 9;

    bool ans =  isPresent(arr , size, key);   

    if(ans){
        cout << "key is present" << endl;
    }
    else{
        cout << "key is not present" << endl;
    }
}