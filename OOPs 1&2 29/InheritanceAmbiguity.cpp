// Inheritance Ambiguity :- Agar do parent class me same name se koi function ho to us 
//                          us ko scope resolution k use se pahchan karte hai
#include<iostream>
using namespace std;

class A{
    public:
    void func(){
        cout << "I am A " << endl;
    }
};

class B {
    public:
    void func(){
        cout << "I am B " << endl;
    }
};

class C : public A , public B{

};

int main(){
    C c;
    // c.func();  --> connot call like this
    c.A :: func();
    c.B :: func();
}