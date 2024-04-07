// Multilevel Inheritance :- A parent class having multilevel child class;
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

class GermanShepherd : public Dog{

};

int main(){
    GermanShepherd g;
    g.speak();

}