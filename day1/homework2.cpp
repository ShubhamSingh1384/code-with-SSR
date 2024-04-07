#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cout<<"enter any number\n";
    cin>>n;
    while(i<=n){
        int j=n;
        int k=1;
        int l=i-1;
        while(j>=i){
            cout<<" ";
            j--;
        }
        while(k<=i){
            cout<<k;
            k++;
        }
        while(l){
            cout<<l;
            l--;
        }
      
        i++;
        cout<<endl;
    }
    return 0;
}