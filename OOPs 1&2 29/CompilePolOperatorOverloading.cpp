#include<iostream>
using namespace std;

class B{
    public:
    int a , b;

    public:
    int add(){
        return a+b;
    }

    void operator+ (B &obj){
        int value1 = this->a;
        int value2 = obj.b;
        cout << "output " << value2 - value1 << endl;
    }
    void operator() (){
        cout << "mai operator hu " << this-> a << endl;
    }
};

int main(){
    B obj1 , obj2;
    obj1.a = 4;
    obj2.b = 5;

    obj1 + obj2;

    obj1();
}