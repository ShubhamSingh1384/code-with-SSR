#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cin>>n;
    cout<<endl;
    while(i<=n){
        int j =1;
        while(j<=n){
            cout<<j << " ";
            j=j+1;
        }
        i++;
        cout<<endl;
    }
    return 0;
}