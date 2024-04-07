// Find n == 2^x or not;

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number\n";
    cin>>n;
    int temp = n;
    for(int i=0; i<=31; i++){
        int y = pow(2 , i);
        if (y == temp){
            cout<<"it is power of 2";
            break;
        }
        
    }
}