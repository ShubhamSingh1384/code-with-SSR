#include<iostream>
#include<array>
using namespace std;
int main(){

    int b[4] = {1,2,3,4};

    array<int,4> a = {1,2,3,4};

    int size = a.size();

    cout<<"Size of array --> "<<size<<endl;

    for(int i=0; i<size; i++){
        cout<<a[i]<<endl;
    }

    cout<<"Element at 2nd Index --> "<<a.at(2)<<endl;

    cout<<"Empty or not --> "<<a.empty()<<endl;

    cout<<"first Element --> "<<a.front()<<endl;
    cout<<"Last Element --> "<<a.back()<<endl;

}