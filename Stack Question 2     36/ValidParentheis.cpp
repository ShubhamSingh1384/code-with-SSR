#include<iostream>
#include<stack>
using namespace std;

bool validParenthesis(string expression){
    stack <char> s;
    for(int i=0; i<expression.size(); i++){
        char ch = expression[i];
        if(ch == '(' || ch == '{' || ch == '['){
            s.push(ch);
        }
        else {
            if(s.empty()) return false;

            char top = s.top();
            if(top == '(' && ch == ')' || top == '{' && ch == '}' || 
            top == '[' && ch == ']'){
                s.pop();
            }
            else{
                return false;
            }
        }
    }

    if(!s.empty()) return false;

    return true;
}

int main(){
    string str = "(([{}])))";

    if(validParenthesis(str)){
        cout << "Given parenthesis is palindrome" << endl;
    }
    else{
        cout << "Not a parenthesis " << endl;
    }
}