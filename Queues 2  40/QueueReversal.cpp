#include<iostream>
#include<queue>
#include<stack>
using namespace std;

queue<int> QueueReversal(queue<int> q){
    stack<int> s;
    queue<int> ans;
    // copying queue in stack
    while(!q.empty()){  // for loop lga k kya nahi hota hai
        s.push(q.front());
        q.pop();
    }

    while(!s.empty()){
        ans.push(s.top());
        s.pop();
    }
    
    return ans;
}

int main(){
    queue<int> q;
    q.push(4);
    q.push(3);
    q.push(1);
    q.push(10);
    q.push(2);
    q.push(6);

    queue<int> ans = QueueReversal(q);

    while(!ans.empty()){  // for loop se output kyo nhi aa rha 💔🤍💔
        cout << ans.front() << " ";
        ans.pop();
    }


}