#include<iostream>
using namespace std;
int main(){
    int n, i=1;
    cout<<"Enter any number\n";
    cin>>n;
    cout<<endl;
    while(i<=n){
        int j=1;
        while(j<=n){
            if(i==1 || i==n || j==1|| j==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            j++;
        }
        i++;
        cout<<endl;
    }

    return 0;
}