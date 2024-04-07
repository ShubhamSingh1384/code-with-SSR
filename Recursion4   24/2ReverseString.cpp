// Reverse string using i or j;
#include<iostream>
using namespace std;

void reverse(string& str, int i, int size){
    //base case
    if(i == size/2) return ;

    swap(str[i], str[size-i]);

    reverse(str, i+1, size);

}

int main(){
    string name = "shubham";

    reverse(name, 0, name.length()-1);

    cout << name ;
}