// Check Palindrome string using i or j;

#include<iostream>
using namespace std;

bool checkPalindrome(string str, int i, int size){
    // base case
    if(i > size/2) return true;

    if(str[i] != str[size-i]){
        return false;
    }
    else{
        return checkPalindrome(str, i+1, size);
    }
}

int main(){
    string name = "boolloob";

    bool isPalindrome = checkPalindrome(name, 0, name.size()-1);

    if(isPalindrome) cout << "Its a palindrome";

    else cout << "Not a palindrome";

}