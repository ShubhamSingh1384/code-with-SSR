// consider upper and lower case as same;
#include<iostream>
using namespace std;

char toLowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

int palindrom(string st){
    int s = 0;
    int e = st.size()-1;
    while(s<e){
        if(toLowerCase(st[s]) == toLowerCase(st[e])){
            s++;
            e--;
        }
        else {
            return 0;
        }
    }
    return 1;
}

int main(){
    string s;
    cin>>s;

    cout<<"Palindrom or not : "<<palindrom(s);
}