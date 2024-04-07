#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> NextGreaterElement(vector<int> &vec , int n){
    vector<int> ans(n);
    stack<int> s;
    
    for(int i=n-1; i>=0; i--){
        int curr = vec[i];
        if(s.empty()){
            ans[i] = -1;
            s.push(vec[i]);
        }
        else{
            while(!s.empty() && s.top() <= curr){
                s.pop();
            }
            if(s.empty()){
                ans[i] = -1;
            }
            else{
                ans[i] = s.top();
            }
            s.push(vec[i]);
        }
    }
    return ans;
}

int main(){
    vector<int> vec = {1,2,3,4,5};

    vector<int> ans = NextGreaterElement(vec , vec.size());

    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
}