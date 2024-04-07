#include<iostream>
using namespace std;
int main(){
    char ch[] = "abcde";
    char *p = &ch[2];
    cout << p  << " " << *p << endl;
}