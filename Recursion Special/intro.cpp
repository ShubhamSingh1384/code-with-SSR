// Trust the function -> RECURSIVE LEAP OF FAITH


#include <iostream>
using namespace std;

void printcount(int n){
    if(n == 0) return ;
    cout << n << endl;
    printcount(n-1);   // fell the different
    cout << n << endl;
}

int main(){
    int n = 6;
    printcount(10);
}