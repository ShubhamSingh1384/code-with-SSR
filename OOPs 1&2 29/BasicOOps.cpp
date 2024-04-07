#include<iostream>
using namespace std;

class hero{
    // properties
    private:
    int health;
    public:
    char level;

    void print(){
        cout << level << endl;
    }

    int getHealth(){
        return health;
    }

    char getlevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setlevel(char ch){
        level = ch;
    }
};

int main(){

    // static allocation
    hero a;
    a.setHealth(80);
    a.setlevel('B');
    cout << "level is " << a.level << endl;
    cout << "health is " << a.getHealth() << endl;

    // dynamically 
    hero *b = new hero;
    (*b). setlevel('A');
    b-> setHealth(70);
    cout << "level is " << (*b).level << endl;  // Either use (.) operator or (->) operator to excess;
    cout << "health is " << b->getHealth() << endl;





    // creating of object;
    // hero ramesh;
    // cout << "size of ramesh is " << sizeof(ramesh) << endl;

    // cout << "Ramesh health is " << ramesh.getHealth() << endl;
    // // use setter 
    // ramesh.setHealth(70);
    // ramesh.level = 'A';

    // cout << "health is " << ramesh.getHealth() << endl;
    // cout << "level is : " << ramesh.level << endl;

    // //cout << "size " << sizeof(h1) << end;

}