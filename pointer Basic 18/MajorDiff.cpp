// Different between array and pointer
// Symobl table cannot be change (int arr[10]; -> arr = arr+1 -> error throw )
#include<iostream>
using namespace std;
int main(){
    int arr[10] = {1,2};

    cout<<"Size of array is : "<<sizeof(arr)<<endl;
    cout<<"Size of arr[0] : "<<sizeof(*arr)<<endl;
    cout<<"Size of address at arr[0]  : "<<sizeof(&arr)<<endl;
    cout<<endl;

    int *ptr =  &arr[0];

    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;

    int a[20] = {1,3,4,5};
    int *p = &a[0];
    cout<<endl;
    cout<<"Address of 'p' is different from address of 'a' \n"<<&a<<" != "<<&p<<endl;


    return 0;
}