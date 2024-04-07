#include<iostream>
using namespace std;

void update(int arr[] , int size){
    cout<<"Inside the function\n";

}

int main(){
    int arr[] = {1,2,3};
    update(arr , 3);
    for(int i=0; i<3; i++){
        cout<< arr[i] << " ";
    }
    return 0;
}