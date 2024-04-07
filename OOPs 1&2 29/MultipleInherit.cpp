// Multiple Inheritance :- More than one parent class having one or more chid class;

#include<iostream>
using namespace std;

class Animal{

    public:
    int age;
    int weight;

    public:
    void bark(){
        cout << "barking " << endl;
    }
};

class Human{
    public:
    string color;
    public:
    void speak(){
        cout << "Speaking " << endl;
    }
};

// multiple Inheritance;
class Hybrid : public Animal , public Human{

};

int main(){
    Hybrid H;
    H.speak();
    H.bark();

}