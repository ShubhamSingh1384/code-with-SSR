/* 
    Maping TC = O(log(n));
    some it depends on keys like string having a large character

    Erase TC = O(log(n));

*/


/*
    Given N string print unique string in lexiographical order
    with their frequency
    N <= 10^5
    |s| <= 100;
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string , int> m;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        m[s]++;   // frequency k liye es ko use kiye samajh nhi aaya
    }

    for(auto it : m){
        cout << it.first << " " << it.second << endl;
    }
}