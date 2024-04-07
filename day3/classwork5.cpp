//binary to decimal
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter any binary number\n";
    cin>>n;
    int ans =0, i=0;
    while(n != 0){
        int digit = n%10;
        if(digit == 1){
            ans = ans + pow(2,i);
        }
        i++;
        n = n/10;
    }
    cout<<ans<<endl;
}