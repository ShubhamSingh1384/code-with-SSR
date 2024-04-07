// Painter Partition --> It is similar to book allocation problem
#include<iostream>
using namespace std;

bool Ispossible(int arr[] , int room , int painter , int mid){
    int painterCount = 1;
    int roomSum = 0;
    for(int i=0 ; i<room ; i++){
        if(roomSum + arr[i] <= mid){
            roomSum += arr[i] ;
        }
        else{
            painterCount++;
            if(painterCount > painter || arr[i] > mid){
                return false;
            }
            roomSum = arr[i];
        }
    }
    return true;
}

int PainterPartition(int arr[] , int room , int painter){
    int start = 0;
    int sum = 0; 
    for(int i=0; i<room; i++){
        sum += arr[i];
    }
    int end = sum;
    int ans = -1;
    int mid = start + (end - start)/2;
    while(start <= end){
        if(Ispossible(arr , room , painter , mid)){
            ans = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main(){
    int arr[] = {5,5,5,5};
    cout<<"Minimum time taken by the painter is "<<PainterPartition(arr , 4 , 2)<<" unit";
}