#include<iostream>
using namespace std;

void update(int **p2){
    // kuch change hoga ??// Thora clarify chahiye
    //p2 = p2 + 1; // NO -> change in update function only not in main function so that there is no change in before and after

    // kuch change hoga ??
    //*p2 = *p2 + 1;  // YES -> it will change the address of 'p' in main function

    // kuch change hoga ??
    **p2 = **p2 + 1; // YES -> it will change the value of 'i' in the main function
}

int main(){
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << "before " << i << endl;
    cout << "before " << p << endl;
    cout << "before " << p2 << endl;
    update(p2);
    cout << "after " << i << endl;
    cout << "after " << p << endl;
    cout << "after " << p2 << endl;


}