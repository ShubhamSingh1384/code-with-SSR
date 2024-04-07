// Local variable -> a variable whose scope in under a block ;
// global variable -> a variable whose scope in all over the program;
// using of global variable is a bad practice because it can be modify from anywhere in the program so that it will affect all the program
// It is come under bad practice;

#include<iostream>
using namespace std;

int score = 88;// global variable -> bad practice;

void a(int i){
    int v = ++i;
    cout << v << endl;
    cout << score++ << endl;
}

void b(int i){
    int s = i++; //local variable
    cout << s << endl;
    cout << score++ << endl;
}

int main(){
    int i = 5;
    a(i);
    b(i);
    {
       int i = 4;//local variable
        cout << i << endl;
    }
    cout << i << endl;
    cout << score++ << endl;
}