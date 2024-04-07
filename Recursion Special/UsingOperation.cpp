#include<iostream>
using namespace std;

int add(int n){
    if(n == 1) return 1;

    int left_part = add(n-1);

    return n * left_part;
}

int sum_digits(int n){
    if(n == 0) return 0;
    int last_digit = n % 10;
    int remaining = n / 10;
    int sum = sum_digits(remaining);

    return n%10 + sum;
}

int main(){
    // cout << add(5);
    cout << sum_digits(987);
}