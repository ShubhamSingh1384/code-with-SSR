#include<iostream>
#include<stack>
using namespace std;


void count(int num){
    if(num == 10) return;

    count(num + 1);
    cout << num << " ";
}

int main(){
    count(0);

    stack <char> s;
    s.push('c');
    cout << s.top();
}