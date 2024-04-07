#include<iostream>
using namespace std;
int main(){
    int a,n,count =0;
    cout<<"Enter any binary\n";
    cin>>a;
    while(a>0){
        int rem = a%10;
        if(rem == 1){
            count++;
        } 
        a /= 10;
    }
    cout<<count;
}