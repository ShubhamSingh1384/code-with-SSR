// Kadane's Algorithm
// to find the largest subarray sum;
#include<iostream>
#include<algorithm>

using namespace std;

int maxSubArray(int nums[] , int size){
    int sum = 0;
    int maxi = nums[0];

    for(int i=0; i<size; i++){
        sum += nums[i];
        maxi = max(maxi , sum);
        
        if(sum < 0){
            sum = 0;
        }
    }
    return maxi;
}

int main(){
    int arr[9] = {-2,1,-3,4,-1,2,1,-5,4};
    
    cout << maxSubArray(arr , 9);

}