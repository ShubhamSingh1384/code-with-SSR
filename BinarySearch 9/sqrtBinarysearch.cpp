// find square root of given number using binary search;

// It is not correct approch -> it is only for perfect sqare;
#include<iostream>
using namespace std;

long long int findsqrt(int n){
    int start = 0 , end = n;
    long long int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end){
        long long int square = mid * mid;

        if(square == n){
            return mid;
        }
        else if(square < n){
            start = mid + 1;
            ans = mid;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
// int count (int n){
//     int ans;
//     for(int i=0; i<=n; i++){
//         ans = i;
//         int arr[i] = {ans};
//     }
// }

int main(){
    int n;
    cin >> n;
    cout << findsqrt(n);
}