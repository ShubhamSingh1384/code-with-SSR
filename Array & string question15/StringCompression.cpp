//code help love babber lecture 22 last question
#include<iostream>
#include<vector>
using namespace std;
class solution{
public:
    int compress (vector<char>& chars){
        int i = 0;
        int ansIndex = 0;
        int n = chars.size();
        while(i<n){
            int j = i+1;
            while(j<n && chars[i] == chars[j]){
                j++;
            }
            //yaha kab aaoge
            //ya toh vector poora traverse krdia
            //ya fer new/different characcter encounter hia hai

            //oldChar store karlo 
            chars[ansIndex++] = chars[i];

            int count = j-i;
            if(count>1){
                //converting counting into single digit ans saving in answer
                string cnt = to_string(count);
                for(char ch: cnt){
                    chars[ansIndex++] = ch;
                }
            }
            //moving to new/different character
            i=j;
        }
        return ansIndex;
    }
};

int main(){
    vector<char> chars ;
}