#include<iostream>
#include<stack>
using namespace std;

bool findRedundantBrackets(string &str){
    stack<char> s;
    for(int i=0; i<str.size(); i++){
        char ch = str[i];
        if(ch == '(' ||ch == '+' || 
        ch == '-' || ch == '*' || ch == '/'){
            s.push(ch);
        }
        else{
            // ch ya to ')' hai ya koi alphabet hai
            if(ch == ')'){
                bool isRedundant = true;

                while(s.top() != '('){
                    char top = s.top();
                    if(top == '+' || top == '-' || top == '*' || top == '/'){
                        isRedundant = false;
                    }
                    s.pop();
                }
                if(isRedundant == true) return true;
            }
        }
    }
    return false;
}

int main(){
    string str = "(a+(a+b)*8)";

    cout << "string is Redundant or not : " << findRedundantBrackets(str);

}