#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number\n";
    cin>>n;
    int i=0;
    while(n){
        int j=1;
        i++;
        int l=n;
        while(j<=n){
            cout<<" ";
            j++;
        }
       // int star1 = i-1;
       int star1 = (i-1)*2;
        while(star1){
            cout<<"*";
            star1--;
        }
        /*int star2 = i-1;
        while(star2){
            cout<<"*";
            star2--;
        }*/
        
        while(l){
        cout<<l;
        l--;

        }
        n--;
        cout<<endl;
    }

    return 0;
}