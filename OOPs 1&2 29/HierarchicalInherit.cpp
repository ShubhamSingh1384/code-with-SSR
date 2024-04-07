// Hierarchicalln Inheritance :- One class serve as Parent class for more than 1 class 
// Parent class jo parent hai more than one child class k liye
#include<iostream>
using namespace std;

class A{
    public:
    void func1(){
        cout << "Inside function 1" << endl;
    }
};

class B : public A{
    public:
    void func2(){
        cout << "inside function 2" << endl;
    }
};

class C : public A{
    public:
    void func3(){
        cout << "Inside function 3" << endl;
    }
};


int main(){
    A a;
    a.func1();
    cout << endl;
    B b;
    b.func1();
    b.func2();
    C c;
    cout << endl;
    c.func1();
    c.func3();
}