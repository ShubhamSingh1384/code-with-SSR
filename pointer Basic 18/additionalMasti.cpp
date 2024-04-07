// Symobl table cannot be change (int arr[10]; -> arr = arr+1 -> error throw )
// array ka address badal nhi skte 
// us ko badal ne k liye pointer ka help lena hoga 
#include<iostream>
using namespace std;
int main(){
    int arr[10] = {1,2};
    //ERROR
    // arr = arr+1;
    
    // To change address of any index(it is not posssible) point it in a pointer and change the address of pointer;
    int *ptr = &arr[0];
    cout << ptr << endl;
    ptr = ptr + 1;
    cout << ptr << endl;

    return 0;
}