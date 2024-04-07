#include<iostream>
using namespace std;

class Human{
    public:
    
    int height;
    int weight;
    int age;
    
    public:
    
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight = w;
    }

};

class Male: public Human{
    public:
    int size;
    string colour;
    Male(int n){
        this->size = n;
    }
    void sleep(){
        cout << "male sleeping" << endl;
    }
};

int main(){
    Male object1(5);
    object1.sleep();
    object1.setWeight(55);
    cout << object1.getAge()<< endl;
    cout << object1.age << endl;
    cout << object1.weight << endl;
    cout << object1.height << endl;
}