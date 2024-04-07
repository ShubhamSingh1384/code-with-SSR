// agar aap khud se constructor banate hai to default constructor mar jata hai phir wo call nhi hota hai
// default copy constructor shallow copy 
// different between shallow and deep copy;
// static allocation -> destructor invok automatically 
// dynamycally allocation -> destructor invok manually;
#include<iostream>
#include<cstring>
using namespace std;

class hero{
    // properties
    private:
    int health;
    public:
    char *name;
    char level;
    static int timeToComplete;

    hero(){ //constructor invoked automatically while making object of class
        cout << "consturctor called" << endl;
        name = new char[100];
    }

    hero(int health){
        this->health = health; // store the address of current object; --> pointer of current object
    }

    hero (int health , char level){
        this -> health = health;
        this -> level = level;
       // cout << health << " " << level << endl;
    }

    //copy constructor
    hero(hero& temp){

        char *ch = new char[strlen(temp.name) + 1]; // Deep copy procedure
        strcpy(ch , temp.name);
        this->name = ch;

        cout << "copy constructo called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    // destructor
    ~hero(){
        cout << "destructor bhai called" << endl;
    }
    
    int gethealth(int health){
        return health;
    }

    char getlevel(char level){
        return level;
    }

    int sethealth(int h){
        health = h;
        return health;
    }

    int setlevel(int l){
        level = l;
        return level;
    }

    void print(){
        cout << endl;
        cout << "Name: " << this->name << " ,";
        cout << "health " <<  this->health << " ,";
        cout << "level " <<  this->level << endl;

    }

    void setName(char name[]){
        strcpy(this->name, name);
    }
};

int hero :: timeToComplete = 5;

int main(){

    cout << hero :: timeToComplete << endl; // access static data member in this manner

    hero a ;
    cout << a.timeToComplete << endl;  // not in this manner

    hero b;
    b.timeToComplete = 10;  // update kisi k duwara karo update dono class me hoga 
    cout << a.timeToComplete << endl;
    cout << b.timeToComplete << endl;


    // hero a ;

    // // dynamic
    // hero *b = new hero();
    // delete b;




    // hero hero1;
    // hero1.sethealth(12);
    // hero1.setlevel('D');
    // char name[7] = "Babbar";
    // hero1.setName(name);

    // //hero1.print();

    // // use default copy constructor (it uses shallow copy concept);

    // hero hero2(hero1); // Ya hero hero2 = hero1;
    // hero2.name[0] = 'G';
    // hero2.print();

    // hero1.print();

    // // copy asignment operator
    // hero1 = hero2;
    // hero1.print();
    // hero2.print();







    // hero suresh (70 , 'B');
    // // suresh.sethealth(70);
    // // suresh.setlevel('B');

    // suresh.print();

    // //copy constructor
    // hero ritesh(suresh);

    // ritesh.print();






    // //hero h2;

    // // object created statically (parameteried)
    // hero h1(15);   // current object;

    // cout << h1.sethealth() << endl;

    // // dynamically 
    // hero *h = new hero(11);
    // cout << h->sethealth(); // same ans for cout << (*h).sethealth();
}