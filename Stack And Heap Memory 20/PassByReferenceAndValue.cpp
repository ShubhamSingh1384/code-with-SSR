#include<iostream>
using namespace std;

// // Pass by value -> In this case 'i' is copy in a new space so it does not effect main function
// void update(int n){
//     n++;
// }

// pass by reference -> In this case 'i' is reference by a new name but it can modify main function
void update2(int& n){
    n++;
}

int main(){
    int i = 5;
    //update(i);
    update2(i);
    cout << i << endl;
}
 