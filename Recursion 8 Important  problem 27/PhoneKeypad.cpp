#include<iostream>
#include<vector>
using namespace std;

void solve(string digit, string output, int index, vector<string>& ans, string mapping[]){
    //base case
    if(index >= digit.length()){
        ans.push_back(output);
        return;
    }

    int number = digit[index] - '0';// is se input number nikal rha hai(jaishe 23 ka 2 pahle) 
                                    // koi v integer ek ASCII k form me hota hai to us k original form k liye 0 se minus krna parta hai
    string value = mapping[number]; // number k corresponding value nikale (jaishe 2 me "abc") 
                                    // line 12 or 13 singal alphaber nikalne k liye use kiye

    for(int i=0; i<value.length(); i++){
        output.push_back(value[i]);
        solve(digit, output, index+1, ans, mapping);
        output.pop_back();
    }
}

vector<string> letterCombinations(string digits){
    vector<string> ans;
    if(digits.size() == 0)
    return ans;

    string output = "";
    int index = 0;
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(digits, output, index, ans, mapping);
    return ans;
}

int main(){
    string s = "23";

    vector<string> ans = letterCombinations(s);

    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
}