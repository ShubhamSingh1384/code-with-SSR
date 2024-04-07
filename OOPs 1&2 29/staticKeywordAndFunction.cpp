/* static function :- object create ki need nahi hai
                      this keyword (cannot be use)-> because this point to current object and it has no object
                      static mimber ko hi access kr skte hai
                       
*/
#include<iostream>
using namespace std;

class hero{
    int health;
    public:
    int level;
    static int timeToComplete;

    static int random(){
        return timeToComplete ;
    }

    hero(){
        cout << "constructor called" << endl;
    }

    ~hero(){
        cout << "destructor called" << endl;
    }
};

int hero :: timeToComplete = 5;

int main(){

    cout << hero::random() << endl;


    // cout << hero :: timeToComplete << endl; // access static data member in this manner

    // hero a ;
    // cout << a.timeToComplete << endl;  // not in this manner

    // hero b;
    // b.timeToComplete = 10;  // update kisi k duwara karo update dono class me hoga 
    // cout << a.timeToComplete << endl;
    // cout << b.timeToComplete << endl;
}