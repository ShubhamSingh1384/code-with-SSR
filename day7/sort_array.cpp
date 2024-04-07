#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {12,11,32,21,10};
    sort(arr , arr+5);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}