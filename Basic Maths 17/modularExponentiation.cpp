//You are given a three integers 'x','N' and 'm'. Your task is to find (x to the power N)%M; 
//A^B is defined as A raised to power B and A % C is the remainder when A is divided by c.

#include<iostream>
using namespace std;

int modularExponentiation(int x, int n, int m){
    int res = 1;
    while(n>0){
        if(n&1){ // &1 odd batata hai
            //odd
            res = (1LL * (res)*(x)%m)%m;
        }
        x = (1LL * (x)%m * (x)%m)%m;
        n = n>>1; // right shift 1 se divide by 2 hota hai
    }
    return res;
}

int main(){
    int x,n,m;
    cin>>x>>n>>m;
    cout<<modularExponentiation(x,n,m);
}