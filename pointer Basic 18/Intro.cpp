#include<iostream>
using namespace std;
int main(){
    int num = 5;
    cout<< sizeof(num) << endl;

    // address of operator - &

    cout<< "address of num is "<< &num << endl;

    int *ptr = &num;
    cout<<"value is : "<<*ptr<<endl;
    cout<<"address is : "<<ptr<<endl;

    double d = 4.3;
    double *p2 = &d;

    cout<<"Address is "<<p2<<endl;
    cout<<"value of d is : "<<*p2<<endl;

    cout<<"size of "<<sizeof(*ptr)<<endl;
    cout<<"size of "<<sizeof(ptr)<<endl;

    int *p = 0;
    p = &num;

    cout<<"value of p is : "<<*p<<endl;
    cout<<"address of p is : "<<p<<endl;

    // copying pointer
    int num1 = 4;
    int *p3 = &num1;
    int *q = p3;
    cout<< p3 <<"-"<<q<<endl;
    cout<<*p3<<"-"<<*q<<endl;

    // Important concept
    int i = 3;
    int *t = &i;
    //cout<<(*t)++<<endl;-> i does not increase;
    *t = *t + 1; // -> use this to increase
    cout<<*t<<endl;

    cout<<"Before t "<<t<<endl;
    t = t+1;
    cout<<"After t "<<t<<endl;// it increase a/q to given datatype

    cout << *t << endl;

    

    return 0;
} 