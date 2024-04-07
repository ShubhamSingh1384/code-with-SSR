// Binary coefficient (nCr)
#include<iostream>
using namespace std;
int fact(int a){
    int fac = 1;
    while(a>0){
        fac *= a;
        a--;
    }
    return fac;
}

int main(){
    int n,r;
    cin>>n>>r;
    int ans = (fact(n))/(fact(n-r) * fact(r));
    cout<<ans;
    
}