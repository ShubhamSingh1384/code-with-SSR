// Reverse the number; 123 into 321;
// if reverse value is more than int max range return 0;
#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int n, ans =0;
    cout<<"Enter any integer\n";
    cin>>n;
    while(n != 0){
        int digit = n%10;
        if((ans > INT_MAX)|| (ans < INT_MIN)){
            return 0;
        }
        ans = (ans * 10) + digit;
        n /= 10;
        
    }

    cout << ans << endl;
}