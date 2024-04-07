// in function it is compulary to add int size because we cann't find the particular size of array ;
#include<iostream>
using namespace std;
void printarray(int arr[] , int size){
    cout<<"printing the array"<<endl;
    for(int i = 0 ; i<size; i++){
        cout<< arr[i] <<" ";
    }
    cout<<"\nprinting done";
}
int main(){
    int first[] = {4,3,45,6,43};
    printarray(first , 5);
    
}