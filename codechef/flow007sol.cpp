#include<iostream>
using namespace std;
int main(){
    int number, ans = 0;
    cin>>number;
    while(number){
        int rem = number % 10;
        ans = (ans * 10) + rem;
        number /= 10;

    }
    cout<<ans;

}