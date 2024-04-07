// https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1

#include<iostream>
#include<unordered_map>
#include<queue>
using namespace std;

class Solution{
    public:

    string FirstNonRepeatingChar(string A){
        unordered_map<char , int> count;
        queue<int> q;
        string ans = "";
        
        for(int i=0; i<A.size(); i++){
            char ch = A[i];

            //increase count;
            count[ch]++;

            // queue me push karo
            q.push(ch);

            while(!q.empty()){
                if(count[q.front()] > 1){
                    // repeating character
                    q.pop();
                }
                else{
                    // non - repeating character me lg gya;
                    ans.push_back(q.front());
                    break;
                }
            }

            if(q.empty()){
                ans.push_back('#');
            }
        }
        return ans;
    }
};

int main(){
    string a = "aabbcbaac";

    Solution s;

    cout << s.FirstNonRepeatingChar(a);
}