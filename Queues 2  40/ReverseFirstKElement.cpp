// Time complexity : O(n);
// space complexity : pta nhi

#include<iostream>
#include<queue>
#include<stack>
using namespace std;

queue<int> ModifyQueue(queue<int> q , int k){
    stack<int> s;
    // step 1 : pop first k from q and put in to stack
    for(int i=0; i<k; i++){
        s.push(q.front());
        q.pop();
    }
    // stem 2 : fetch from stack ans push into q;
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    // step 3: fetch first (n-k) element from q and push back;
    int t = q.size()-k;

    while(t--){
        s.push(q.front());
        q.pop();
        q.push(s.top());
        s.pop();
    }

    return q;
}

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    queue<int> ans = ModifyQueue(q , 3);

    while(!ans.empty()){
        cout << ans.front() << " ";
        ans.pop();
    }

}