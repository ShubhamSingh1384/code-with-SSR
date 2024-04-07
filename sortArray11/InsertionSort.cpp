//  -------KAHANI------
/*
   do pointer lo ek ko 1 pe rakho aur dushre ko 0 pe
   -> aage wale pointer k value se piche wale sare value ko 
    compare karo 
    -> phir swap krne ka tarika dekh lo code me se bs 
    -----------HO GYA---------
*/

#include<iostream>
using namespace std;
int main(){
    int arr[] = {8,7,6,5};
    int n = 4;
    
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
            j--;
        }
        arr[j+1] = temp;
    //     for(int i=0; i<n; i++){
    //     cout<<arr[i] <<" " ;
    //    }
    //    cout<<endl;
    }
    
        for(int i=0; i<n; i++){
        cout<<arr[i] <<" " ;
       }
       cout<<endl;
}