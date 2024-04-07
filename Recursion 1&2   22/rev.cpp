#include <iostream>
using namespace std;

void Saydigit(int num  , string *arr){
    if(num == 0)
    return;

    int d = num%10;
    Saydigit(num/10 , arr);

    cout << arr[d] << " ";
}

int main(){
    string arr[10] = {"zero", "one", "two", "three",
                        "four", "five", "six",
                       "seven", "eight", "nine"};
    int n;
    cin >> n;
    
    Saydigit(n , arr);

   return 0;
}