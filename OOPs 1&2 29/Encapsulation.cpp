/*Encapsulation :- wrapping up data member and function;
                   Information hiding / data hiding;
// Fully encapsulated class :- all data member jb private ho;(same class me he access kr paenge);
Adv :- 1> data hide -> security increases
       2> if we want , we can make class read only;
       3> code reusability
       4> 
*/

#include<iostream>
using namespace std;
class student{
    private :
        string name ;
        int age; 
        int height;

    public:
    int getAge(){
        return this->age;
    }
};

int main(){
    student s;
    cout << "sb sahi chal rha hai ";
}