 // #define pi 3.14 -> Here 'pi' is macro (macro mean a piece of code in a program that is replaced by value of macro);
 // marco koi space nahi leta hai issiliye ye jyada optmize hai;
 
 #include<iostream>
 using namespace std;

#define pi 3.14 // Here pi is called macro, it cannot be modify , can be change only ;

 int main(){
    int r = 5;
    //double pi = 3.14;

    double area = pi * r * r ;

    cout << "Area is : " << area << endl;

 }