#include<iostream>
using namespace std;
int main() {
	// your code goes here
	      long n;
	      int count = 0;
	      cin>>n;
	      if(n==1){
	            cout<<"No"<<endl;
	      }
	      for(int i=1; i<=n; i++){
	            if(n%i == 0){
	                  count++;
	            }
	      }
	      if(count == 2){
	            cout<<"yes"<<endl;
	      }
	      else{
	            cout<<"No"<<endl;
	      }
	
	return 0;
}
