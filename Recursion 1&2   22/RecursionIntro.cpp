// when a function call itself (directly or indirectly) called recursion;
// Big / complex problem ka solution agar depend krta hai same type k chotti problem pe tb ham recursion ka use krte hai
// YE KRNA HI PADEGA AGAR RECURSION BANANA HAI TO :- Need two thing Base case(condition) and recursive relation;
// Base case me return dalna v jaruri hai

// // (important***) Understand recursion tree with the help of function call stack;

// Recursive function me agar base case nhi dalo to stack overfolw ho jata hai tb segment fault error show krta hai

// function call stack;(just know about it)

// Finding factorial ;

#include<iostream>
using namespace std;

int factorial(int n){
    // base case  // base case is mandatory;
    if(n==0)
    return 1;

    //int smallerProblem = factorial(n-1);
    //int biggerProblem = n * smallerProblem;

    return n * factorial(n-1);
}

int main(){
    int n;
    cin >> n;
    
    int ans = factorial(n);

    cout << ans << endl;
}