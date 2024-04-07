#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int Pivot(int arr[] , int n){
    int s = 0 , e=n-1;
    int mid = (s+e)/2;
    while(s<e){
        if(arr[mid] >= arr[0]){
            s = mid+1;
        }
        else
        e = mid;
    }
    return s;
}

int main() {
    //Write your code here
    int arr[] = {4,5,1,2,3};
    cout << Pivot(arr , 5);
}