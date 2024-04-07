// int *ptr = &value -> simple pointer
// int **ptr2 = &ptr -> double pointer
// jis v value k crossponding hame pointer banana hoga us k datatype(exact likh k * lga dena hai) k saath '*' laga denge.
#include<iostream>
using namespace std;

int main(){
    int i = 5; 
    // int* p ya int *p me koi antar nahi hai

    int* p = &i;
    int** p2 = &p;

    cout<< "printing p : " << p << endl;
    cout<< "address of p : " << &p << endl;

    cout<< "value at p2 : " << *p2 << endl;

    cout <<"print i : "<< i << endl;
    cout <<"print *p : "<< *p << endl;
    cout <<"print **p2 : "<< **p2 << endl;

    cout <<"address i : "<< &i << endl;
    cout <<"address i : "<< p << endl;
    cout <<"address i : "<< *p2 << endl;

    return 0;
}