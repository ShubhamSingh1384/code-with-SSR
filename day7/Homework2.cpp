#include<iostream>
using namespace std;

void duplicate(int arr[] , int size){
    int ans = 0;
    for(int i = 0; i<size; i++){
        ans = ans ^ arr[i];
        cout << ans << " ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,6};
    duplicate(arr , 7);

    
}