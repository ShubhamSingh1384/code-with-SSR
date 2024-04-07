// Book Allocation using recursion;
#include<iostream>
using namespace std;

bool isPossible(int arr[], int book, int student, int mid){
    int studentCount = 1;
    int pageSum = 0;
    for(int i=0; i<book; i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if((studentCount > student) || (arr[i] > mid)){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int BookAllocation(int arr[] , int book , int student, int start, int end){
    int mid = start + (end-start)/2;
    // base case
    if(start == end){
        return mid;
    }
        if(isPossible(arr, book, student, mid)){
            return BookAllocation(arr, book, student, start, end-1);
        }
        else{
            return BookAllocation(arr, book, student, mid+1, end);
        }
        
}

int main(){
    int arr[] = {12,13,14,23};
    int book = 4;
    int student = 2;
    int start = 0;
    int sum = 0;
    for(int i=0; i<book; i++){
        sum += arr[i];
    }
    int end = sum;
    int ans = -1;
    int mid = start + (end-start)/2;

    cout << BookAllocation(arr, book, student, start, end);

}