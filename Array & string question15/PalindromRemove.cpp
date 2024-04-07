// Remove all character rather than alphabet and number;
#include<iostream>
using namespace std;

class solution{
    private:
    bool valid(char ch){
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
            return 1;
        }
        return 0;
    }

    char toLowerCase(char ch){
        if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
            return ch;
        }
        else{
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }

    bool checkPalindrom(string st){
        int s = 0;
        int e = st.length() - 1;
        while(s<=e){
            if(st[s] != st[e]){
                return 0;
            }
            else{
                s++;
                e--;
            }
        }
        return 1;
    }
    public:
    bool isPalindrome(string s){
        // faltu character hatado
        string temp = "";

        for(int j=0; j<s.length(); j++){
            if(valid(s[j])){
                temp.push_back(s[j]);
            }
        }
        // lowercase me kardo

        for(int j=0; j<temp.length(); j++){
            temp[j] = toLowerCase(temp[j]);
        }
        // check palindrom
        return checkPalindrom(temp);
    }

};

int main(){
    solution s;
    string st = "A man, a plan, a canal: Panama";
    string str = "race a car";

    cout<<s.isPalindrome(st)<<endl;
    cout<<s.isPalindrome(str)<<endl;
    cout << st << " " << str ;
}