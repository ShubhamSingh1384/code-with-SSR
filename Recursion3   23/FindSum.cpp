// return kaishe krta hai is pe thora dhiyan dijiye bhai ..
// Find sum of array using recursion
#include<iostream>
using namespace std;

int findSum(int arr[] , int size){
    
    
    // base case
    if(size == 1){
        return arr[0];
    }
    else{
        return arr[0] + findSum(arr+1, size-1);
    }
}

int main(){
    int arr[] = {11,22,33,44,55};
    int size = 5;

    cout << "Sum is : " << findSum(arr , size) << endl;
}