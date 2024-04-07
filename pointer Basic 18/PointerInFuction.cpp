// passing pointer in function
// do not practise char *c = "abcde"; its very risky (lecture 26 35 to 45)
#include<iostream>
using namespace std;

void print(int *p){
    cout<<*p<<endl;
}

void updata(int *p){  //Pointer ki value update kr skte hai pr us ka address nhi;
//     p = p+1;
//    cout<<"inside "<<p<<endl;
   //to update value 
   *p = *p + 1;
}

int main(){
    int value = 5;
    int *p = &value;
    //print(p); // function prototype me address dalna hai

    cout<<"Befor  "<<*p<<endl;
    //update(p); // lecture 26 -  52minn me problem;
    //update(p); // why it is throw an error;
    cout<<"After  "<<*p<<endl; 

    return 0;  
}