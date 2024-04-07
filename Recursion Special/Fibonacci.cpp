#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n == 1) return 0;
    if(n == 2) return 1;

    int m = fibonacci(n-1) + fibonacci(n-2);

    return m;
}

int main(){
    int n;
    cin >> n;
    cout << fibonacci(n);
}