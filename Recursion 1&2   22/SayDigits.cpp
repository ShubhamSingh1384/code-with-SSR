#include<iostream>
using namespace std;

void Saydigit(int n, string arr[]){
    // base case
    if(n==0){
        return ;
    }
    // processing 
    int digit = n%10;
    n /= 10;
    string letter = arr[digit];

    // recursion relation
    Saydigit(n, arr);

    cout << letter << " " ;

}

int main(){
    string arr[10] = {"zero", "one", "two", "three",
                        "four", "five", "six",
                       "seven", "eight", "nine"};
    int n;
    cin >> n;
    
    Saydigit(n , arr);
}