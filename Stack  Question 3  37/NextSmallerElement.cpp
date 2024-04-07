#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> NextSmallerElement(vector<int> vec , int n){
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for(int i=n-1; i>=0; i--){
        int curr = vec[i];
        while(!s.empty() && s.top() >= curr){
            s.pop();
        }
        // ans is stack ka top
        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
}

int main(){
    vector<int> vec = {2,3,1};

    vector<int> ans = NextSmallerElement(vec , vec.size());

    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl << "the end";
}