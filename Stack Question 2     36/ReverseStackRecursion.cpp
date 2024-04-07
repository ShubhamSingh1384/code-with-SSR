// Reverse stack using recursion 
// time cl

#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &s , int element){
    // base
    if(s.empty()){
        s.push(element);
        return;
    }

    int n = s.top();
    s.pop();
    insertAtBottom(s , element);
    s.push(n);
}

void reverseStack(stack<int> s){
    if(s.empty()){
        return;
    }

    int num = s.top();
    s.pop();

    //recursive call
    reverseStack(s);

    insertAtBottom(s , num);
}

int main(){
    stack<int> s;
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(9);

    reverseStack(s);
    
    for(int i=0; i<s.size(); i++){  // print kaishe krwaye
        cout << s.top() << " ";
        s.pop();
    }
}