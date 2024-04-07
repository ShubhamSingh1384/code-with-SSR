#include<iostream>
using namespace std;
int gcd(int a , int b){
      int ans,i;
      int s = min(a,b);
      for( i=s; i>=1; i--){
            if(a%i == 0 && b%i == 0){
                  ans = i;
            }
      }
      return ans;
}
int main(){
    cout<<gcd(67,89);
}