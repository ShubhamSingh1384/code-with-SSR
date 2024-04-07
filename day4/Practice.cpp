#include<iostream>
using namespace std;
int main(){
    int t , n;
    cin>>t;
    while(t){
        int ans =0;
      cin>>n;
      while(n){
        int digit = n%10;
        ans = ans+ digit;
        n /= 10;
      }
      cout<<ans<<endl;
      t--;
    }
    
    
    return 0;
}