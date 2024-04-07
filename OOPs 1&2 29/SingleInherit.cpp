// Single Inheritance :- Only one child of parent class
#include<iostream>
using namespace std;

class Animal{

    public:
    int age;
    int weight;

    public:
    void speak(){
        cout << "speaking " << endl;
    }
};

class Dog : public Animal{

};

int main(){
    Dog d;
    d.speak();
}