// sum of all element of array
#include<iostream>
using namespace std;
int addition (int arr[], int size){
    int sum = 0 ;
    for(int i = 0; i<size; i++){
        sum += arr[i];
    }
    return sum;
}
void display(int arr[] , int size){
    cout<<"sum of all element of array is = "<<addition(arr , size);
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    
    display(arr , 6);

}