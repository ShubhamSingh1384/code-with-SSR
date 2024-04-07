// Insert the given element in the bottom of the stack
#include<iostream>
#include<stack>
using namespace std;

void InsertAtBottom(stack<int> s , int key){
    if(s.empty()){
        s.push(key);
        return ;
    }
    int n = s.top();
    s.pop();
    InsertAtBottom(s , key);
    s.push(n);
}

int main(){
    stack<int> s;
    int key = 9;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    InsertAtBottom(s , key);

    for(int i=0; i<s.size(); i++){
        cout << s.top() << " ";
        s.pop();
    }
    // Yaar kuch feel nhi aaya aur chahiye recursion ka training
    //(recursion nhi aata hai bhai);
}