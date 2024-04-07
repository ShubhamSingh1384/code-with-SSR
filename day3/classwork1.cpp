#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number\n";
    cin>>n;
    while(n){
        int rev = n%10;
        cout<<rev;
        n /= 10;
    }
}