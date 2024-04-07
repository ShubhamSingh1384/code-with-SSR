// Inline function are used to reduce the function calls overhead;
// Tersery operator :- condition ? a:b ; (if else condition in one line);
// Inline function :- function change with function body;
//            Jb body of function 1 line ka ho to compiler definitely function ko inline function bna dega;
//            agar function 2 se 3 line ka ho to compiler inline function bna v skta hai ya nhi us k mn pe hai 
//            agar function 3 line se bda hai to compiler definitely inline function nhi bna ye ga;
// Inline function Befinit :- No extra space , No function again and again;(it replace function with function body);

#include<iostream>
using namespace std;

inline int getMax(int& a , int& b){
    return (a<b) ? b:a;
}

int main(){
    int i = 5, j = 7;

    // if(i<j){
    //     cout << j << endl;
    // }
    // else{
    //     cout << i << endl;
    // }
    // Instead of using if else statement use tersery operator;
    // condition ? a:b;

    //int ans = (i<j) ? j:i;
    int ans = getMax(i,j);
    cout << ans << endl;

    i += 5;
    j += 2;

    ans = getMax(i,j);
    cout << ans << endl;

}