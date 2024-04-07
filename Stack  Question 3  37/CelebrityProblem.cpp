// Time complexity : O(N);
#include<bits/stdc++.h>
using namespace std;

class Solution{
    bool knowns(vector<vector<int>> m , int a , int b , int n){
        if(m[a][b] == 1) return 1;

        return 0;
    }
    public:
    int celebrity(vector<vector<int>>& m, int n){
        stack<int> s;
        // step 1: push all element in stack;
        for(int i=0; i<n; i++){
            s.push(i);
        }
        // step 2: 

        while(s.size() > 1){
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();

            if(knowns(m,a,b,n)){
                s.push(b);
            }
            else{
                s.push(a);
            }
        }

        int candidate = s.top();

        for(int i=0; i<n; i++){
            if(m[candidate][i] == 1)
            return -1;
        }
        for(int i=0; i<n; i++){
            if(candidate == i) continue;
            if(m[i][candidate] == 0)
            return -1;
        }
        
        return candidate;
    }
};

int main(){
    Solution s;
    vector<vector<int>> vec = {{0,0,0}, {1,0,0}, {1,0,0}};

    cout << "Celebrity is : " << s.celebrity(vec, vec.size());
}