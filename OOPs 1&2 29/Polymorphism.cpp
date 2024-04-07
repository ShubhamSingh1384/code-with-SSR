//Polymorphism :- Existing in multiple form
// sirf return type change krne se nhi hoga argument change krna hoga
#include<iostream>
using namespace std;

class A{
    public:
    void sayhello(){
        cout << "Hello shubham" << endl;
    }

    void sayhello(string name){
        cout << "Hello " << name << endl;
    }

    // int sayhello(string name){
    //     cout << "hello " << name << endl;
    //     return -1;
    // }
};

int main(){
    A a;
    a.sayhello();
    a.sayhello("singham");
}