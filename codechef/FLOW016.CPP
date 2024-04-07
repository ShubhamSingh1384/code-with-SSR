// find gcd/ hcf and lcm
#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    long long int a,b;
    cin>>a>>b;
cout<<min(a,b)<<endl;
cout<<max(a,b)<<endl;
cout<<__gcd(a,b)<<" "<<((a*b)/__gcd(a,b))<<endl;
// lcm = (a*b)/hcf;
    
}