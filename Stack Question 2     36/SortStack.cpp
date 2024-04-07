#include<iostream>
#include<stack>
using namespace std;

void sortedInsert(stack<int> &stack , int num){
    // base case
    if(stack.empty() ||(!stack.empty() && stack.top() < num)){
        stack.push(num);
        return;
    }
    int n = stack.top();
    stack.pop();
    sortedInsert(stack , num);

    stack.push(n);
}

void sortStack(stack<int> &stack){
    // base case
    if(stack.empty()){
        return ;
    }

    int num = stack.top();
    stack.pop();

    // recursion call
    sortStack(stack);

    sortedInsert(stack , num);
}

int main(){
    stack<int> s;
    s.push(4);
    s.push(-1);
    s.push(9);
    s.push(7);
    s.push(6);

    sortStack(s);

    // Bhai output pura kyo nhi aa rha
    for(int i=0; i<s.size(); i++){
        cout << s.top() << " ";
        s.pop();
    }
}