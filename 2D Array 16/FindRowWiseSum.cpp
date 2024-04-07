#include<iostream>
using namespace std;

// to print row wise sum
void sumRow(int arr[][3], int row, int col){
    for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<3; j++){
            sum += arr[i][j];
        }
        cout<<sum<<" ";
    }
}
//to print col wise sum
void sumCol(int arr[][3], int row, int col){
    for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<3; j++){
            sum += arr[j][i];
        }
        cout<<sum<<" ";
    }
}

int main(){
    int arr[][3] = {3,6,9,4,8,2,1,3,6};
    sumRow(arr, 3, 3);
    cout<<endl;
    sumCol(arr, 3, 3);
    cout<<endl;
}