#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void reverse(string& st , int s , int e){
        
        while(s < e){
            swap(st[s] , st[e]);
            s++;
            e--;
        }
    }
    
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        int size = S.size()-1;
        reverse(S , 0 , size);
        
        int s = 0 , e = 0;
        cout << S;
        for(int i=0; i<=size+1; i++){
            if(S[i] == '.' || S[i] == '\0'){
                e = i-1;
                reverse(S , s , e);
                s = i+1;
            }
        }
        
        return S;
    } 
}st;

int main(){
    
    string s = "shubham.singh";
    
    cout << st.reverseWords(s);

   return 0;
}