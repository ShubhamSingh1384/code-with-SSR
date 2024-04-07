#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter any binary\n";
    cin>>n;
    int i =0, decimal = 0;
    while(n){
        int rem = n%2;

         decimal += rem * (pow(2,i));
        i++;
        n /= 10;
    }
    cout<<decimal;
}