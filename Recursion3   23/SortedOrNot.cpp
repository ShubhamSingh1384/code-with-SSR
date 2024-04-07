// Check sorted or not
#include<iostream>
using namespace std;

bool isSorted(int arr[] , int size){
    // base case
    if(size == 0 || size == 1){ // size 0 aur 1 dono k liye kyo ????
        return 1;
    }
    if(*arr > *(arr+1)){
        return false;
    }
    else{
        int remainPart = isSorted(arr+1 , size-1);
        return remainPart;
    }
}

int main(){
    int arr[] = {2,3,4,5,6};
    int size = 5;

    int ans = isSorted(arr , size);

    if(ans) cout << "Array is sorted " << endl;
    else cout << "Array is not sorted " << endl;
}