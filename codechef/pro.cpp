#include <iostream>
using namespace std;
int gcd(int a , int b){
      int ans,i;
      int s = min(a,b);
      for( i=s; i>=1; i--){
            if(a%i == 0 && b%i == 0){
                  ans = i;
                  break;
            }
      }
      return ans;
}

int lcm(int a, int b){
      int s = max(a,b);
      int ans , i;
      for( i=s; i<=(a*b); i++){
            if(i%a == 0 && i%b == 0){
                  ans = i;
                  break;
            }
      }
      return ans;
}
int main(){
     cout<<gcd(12,18);
return 0;
}
     