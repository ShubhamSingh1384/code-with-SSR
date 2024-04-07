#include<iostream>
using namespace std;
int main(){
    int n, a[100],i=0;
    cout<<"Enter any decimal\n";
    cin>>n;
    while(n){
        int binary = n%2;
        i++;
        a[i] = binary;
        n /= 2;
        
    }
    cout<<i<<endl;
    for(int j =i; j>0; j--){
        cout<<a[j];
    }
}