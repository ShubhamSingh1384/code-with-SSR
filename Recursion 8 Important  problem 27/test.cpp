#include<iostream>
#include<vector>
using namespace std;

void solve(string digits, string output, int index, string mapping[], vector<string>& ans){
    // base case
    if(index >= digits.length()){
        ans.push_back(output);
        return;
    }

    int number = digits[index] - '0';
    string value = mapping[number];

    for(int i=0; i<value.length(); i++){
        output.push_back(value[i]);
        solve(digits, output, index+1, mapping, ans);
        output.pop_back();
    }

}

vector<string> phonekey(string digits){
    vector<string> ans ;
    string output = "";
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    int index = 0;
    solve(digits, output, index, mapping, ans);

    return ans;
}

int main(){
    string digits = "79";
    
    vector<string> ans = phonekey(digits);

    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
}