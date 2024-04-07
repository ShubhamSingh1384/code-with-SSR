#include<iostream>
using namespace std;

int getSum(int *arr, int n){ // arr[] ya *arr dono he arr[0] ka address store krte hai kuch v do ek hi baat hai 
    cout << endl << "Size : " << sizeof(arr)<<endl;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    cout << "sum is : " ;
    return sum;
}

int main(){
    int arr[6] = {1,2,3,4,5,6};

    cout<< getSum(arr , 6) << endl ;
    // prototype is basically a pointer which can be modify according to update;
    cout<< getSum(arr+3, 3) << endl ;
}