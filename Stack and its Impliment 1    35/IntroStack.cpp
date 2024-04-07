// LIFO -> last in first out;
/*
 1> // create
    -> stack <int> s;
2> // some operator
    -> push , pop , top , empty;
*/

#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack <int> s;
    // push operator
    s.push(2);
    s.push(3);
    s.push(4);

    cout << "top operator : " << s.top() << endl;
    
    if(s.empty()){
        cout << "stack is empty  " << endl;
    }
    else{
        cout << "stack is not empty " << endl;
    }

    cout << "size of stack before pop " << s.size() << endl;
    s.pop();
    cout << "size of stack after pop " << s.size() << endl;

    return 0;
}