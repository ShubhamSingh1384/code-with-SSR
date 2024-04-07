#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    while(n--)
    {
        float a,b,c;
        cin>>a;
        
        if(a<1500)
        {
           b = a*0.1;
           c = a*0.9;
           cout<<fixed<<setprecision(2)<<a+b+c<<endl;
        }
        else
        {
            b = 500;
            c = a*0.98;
            cout<<fixed<<setprecision(2)<<a+b+c<<endl;
        }
    }
	// your code goes here
	return 0;
}
