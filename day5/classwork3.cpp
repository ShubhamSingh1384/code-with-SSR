 #include<iostream>
 using namespace std;
 int main(){
     int t, n[7], i=0 ;
     cin>>t;
     int m = t;
     while(t){
         cin>>n[i];
         cout<<endl;
         t--;
         i++;
     }
     while(m--){
         cout<<n[m]<<endl;
     }
 }