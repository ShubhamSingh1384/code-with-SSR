/*

Understand the given startment carefully
    // Formula --> arr[i] = *(arr+i);
    // Imp --> arr[i] = i[arr];
    cout<<arr[3]<<endl;
    cout<<3[arr]<<endl;
    cout<<*(arr+3)<<endl;

    */
#include<iostream>
using namespace std;
int main(){
    int arr[10] = {23,122,41,67};

    cout<<"Address of arr[0] : "<<arr<<endl;
    cout<<"Value at arr[0] : "<<arr[0]<<endl;
    cout<<"Address of arr[0] : "<<&arr[0]<<endl;
    cout<<"Value of arr[0] : "<<*arr<<endl;
    cout<<"*arr+1 : "<<*arr+1<<endl;
    cout<<"*(arr+1) : "<<*(arr+1)<<endl;
    
    
    return 0;
}