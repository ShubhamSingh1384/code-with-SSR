// ek baccha k do naam
// mtlb same memory block k do naam
// other naam of same block called reference variable;
#include<iostream>
using namespace std;

int main(){
    int i = 5;
    
    // create a ref variable;

    int& j = i;

    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
    cout << j << endl;

    return 0;
}