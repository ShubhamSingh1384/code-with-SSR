// Linear Search
#include<iostream>
using namespace std;
bool search(int arr[] , int size , int key){
    for(int i=0; i<size; i++){
        int y = arr[i];
        if(y == key){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[10] = {5,7,-2,10,22,-2,0,5,22,1};
    int key;
    cout<<"Enter key\n";
    cin>>key;
    bool found = search(arr, 10, key);
    if(found){
        cout<<"Key is present\n";
    }
    else{
        cout<<"Key is absent\n";
    }
}