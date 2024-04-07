#include<iostream>
using namespace std;

int maxSubArray(int arr[] , int size){
    int maxi = arr[0];
    int sum = 0 , cnt = 0;
    for(int i=0; i<size; i++){
        sum += arr[i];
        maxi = max(maxi , sum);
        if(sum < 0)
        sum = 0;
    }

    return maxi;
}

int main(){
    int arr[9] = {-1,-2,-3,-4};
    
    cout << maxSubArray(arr , 4);

}