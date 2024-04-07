#include<iostream>
using namespace std;

class Hero{
    private:
    public:
    int health;
    char *name;
    int level;

    Hero(){
        cout << "simple constur called" << endl;
        name = new char[100];
    }


    void setdata(int &health , char name[] , int &level){
        this->health = health;
        this->name = name;
        this->level = level;
    }

    void print(){
        cout << health << endl;
        cout << name << endl;
        cout << level << endl;
    }

};

int main(){
    Hero h1;
    int level = 70;
    int health = 80;
    char name[] = "shubham";
    // char n[] = "Anjali";
    h1.setdata(health , name , level);
    Hero h2(h1);
    int l = 100;
    int h = 143;
    h2.name[0] = 'A';
    
    h2.print();
    h1.print();


}