// Check Palindrome using recursion

#include<iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j){
    // base case
    if(i>j) return true;

    if(str[i] != str[j]){
        return false;
    }
    else{
        return checkPalindrome(str, i+1, j-1);
    }
}

int main(){
    string name = "book";

    bool isPalindrome = checkPalindrome(name , 0, name.size()-1);
    if(isPalindrome){
        cout << "Its a palindrome" << endl;
    }
    else{
        cout << "Not a palindrome" << endl;
    }

}