#include<iostream>
using namespace std;
int main(){
    int i=1, n,count =0;
    cout<<"enter any number\n";
    cin>>n;
    while(i<=n){
        int j=n;
        while(j>=i){
            cout<<" ";
            j--;
        }
        int k=1;
        while(k<=i){
            count++;
            cout<<"* " ;
            k++;

        }
        i++;
        cout<<endl;
    }

    return 0;
}