#include<iostream>
using namespace std;
int main(){
    int n,count =0;
    cout<<"Enter any number\n";
    cin>>n;
       for(int j =1; j<=n;j++){
           if(n%j == 0){
               count += 1;
           }
       }
    
    if(count ==2){
        cout<<"Prime number";
    }
    else{
        cout<<"Non prime number";
    }
    return 0;
}