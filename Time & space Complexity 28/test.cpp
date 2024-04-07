#include<bits/stdc++.h>
using namespace std;

int main() {

	// Your code here
    long long int a ,b;
    cin>>a>>b;
    int mini = min(a,b);
    int maxi= max(a,b);
    int ans = abs(mini-maxi);
    if(maxi%mini==0)
        ans=min(ans,1);
    else
        ans=min(ans,2);

        cout << ans;
    
	return 0;
}