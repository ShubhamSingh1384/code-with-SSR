// Fibonacci Series
#include<iostream>
using namespace std;
int main(){
    int n ,a=0,b=1;
    cout<<"Enter any number\n";
    cin>>n;
    cout<<a<<" "<<b<<" ";
    while(n--){
       int nxterm = a+b;
       cout<<nxterm<<" ";
       a = b;
       b = nxterm;
      
    }

}