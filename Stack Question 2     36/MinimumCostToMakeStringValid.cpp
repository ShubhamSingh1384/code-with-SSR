#include<iostream>
#include<stack>
using namespace std;

int FindMinimumCost(string str){
    // odd condition
    if(str.size()%2 == 1){ 
        return -1;
    }

    stack<char> s;

    // removing all valid bracket

    for(int i=0; i<str.size(); i++){
        char ch = str[i];
        if(ch == '{'){
            s.push(ch);
        }
        else{
            // ch is close brace
            if(!s.empty() && s.top() == '{'){
                s.pop();
            }
            else{
                s.push(ch);
            }
        }
    }

    // stack contain invalid expression now;
    int a = 0 , b = 0;

    while(!s.empty()){
        if(s.top() == '{') a++;
        else b++;

        s.pop();
    }

    int ans = (a+1)/2 + (b+1)/2;

    return ans;
}

int main(){
    string str = "{{}}}{";

    cout << "Minimum cost to make string valid : " << FindMinimumCost(str);
}