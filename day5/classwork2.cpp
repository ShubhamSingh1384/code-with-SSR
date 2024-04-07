// check wether n is pow(2, x);
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n, ans = 1;
    cin>>n;
    int temp = n;
    if (n == 0){
        cout<<"1";
    }
    else{
    while(sqrt(n) >= 1){
        ans *= 2;
        if(ans == temp){
            cout<<"Yes it is in the for of pow(2,x)";
        }
    }
    }
}