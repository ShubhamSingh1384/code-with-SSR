// very less use ful -> even love babber does not use it in his coding journey;
// default argument -> main() func. me argument dena hai to do nahi to mere paas pahle se hai;
// default argument are given to rightmost argument(important);
// any number of argument can be default even can all ;

#include<iostream>
using namespace std;

void print(int arr[] , int n, int start = 0){ // default argument start form rightmost argument 
    for(int i=start; i<n; i++){
        cout << arr[i] << endl;
    }
}

int main(){
    int arr[5] = {1,4,7,8,9};
    int size = 5;

    print(arr, size); // it run due to defalut argument;
    cout << endl;
    print(arr , 5, 2);
}