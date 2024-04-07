#include<iostream>
#include<climits>
using namespace std;

int largestRowSum(int arr[][3], int row, int col){
     int maxi = INT_MIN;
     int rowIndex = -1;

     for(int row=0; row<3; row++){
         int sum = 0;
         for(int col=0; col<3; col++){
             sum += arr[row][col];
         }
         if(sum>maxi){
             maxi = sum;
             rowIndex = row;
         }
     }
     cout<<"the maximum sum is "<<maxi<<endl;
     cout<<"max row at index ";
     return rowIndex;
}

int main(){
    int arr[3][3] = {3,4,11,2,12,1,7,8,7};
    cout<<largestRowSum(arr, 3,3);
}