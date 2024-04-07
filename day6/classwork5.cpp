#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    int arr[]= {1,3,6,-3,4};
    for(int i = 0; i<5; i++){
          sum += arr[i];
    }
    cout<<"Sum of all element of array is = "<<sum;
}