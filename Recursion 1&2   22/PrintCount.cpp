// print counting ;

//   ---RECURSION ROCK---

// Thora sa samajhna hai ki void fuction bina return kiye niche ya uper kaishe jata hai print krte hue (dono fuction dekho)


#include<iostream>
using namespace std;
// // to print n to 1;
// void count(int n){
//     // base case
//     if(n==0){
//         return ;
//     }
//     //processing
//     cout << n << " " ; 
//     // recursive relation  // TAIL RECURSION
//     count(n-1);
// }

//     LINE 35 :-  FELL THE WORKING MACHANISM BETWEEN TAIL RECURSION ANS HEAD RECURSION

// to print 1 to n;
void count (int n){
    //base case
    if(n==0){
        return;
    }
    //recursive relation // HEAD RECURSION
    count(n-1);
    //processing
    cout << n << " ";

    // return ; // void function me likho ya nhi last me return hota hai jiske madad se function bari bari se return hota hai
}

int main(){
    int n ;
    cin >> n;
    count(n);
    
}