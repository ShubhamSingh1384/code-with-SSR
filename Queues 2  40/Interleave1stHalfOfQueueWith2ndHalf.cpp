// solve again without using of stack not extra queue;
#include<iostream>
#include<queue>
using namespace std;

queue<int> Interleave2HalfInQueue(queue<int> q){
    queue<int> first;
    queue<int> second;
    int size = q.size();
    int firstHalf = (size+1)/2;
    int secondHalf = firstHalf + 1;

    for(int i=1; i<=firstHalf; i++){
        first.push(q.front());
        q.pop();
    }

    for(int i=secondHalf; i<=size; i++){
        second.push(q.front());
        q.pop();
    }

    while(!first.empty() && !second.empty()){
        q.push(first.front());
        q.push(second.front());
        first.pop();
        second.pop();
    }

    while(!first.empty()){
        q.push(first.front());
        first.pop();
    }

    return q;
}

int main(){
    queue<int> q;

    for(int i=11; i<=19; i++){
        q.push(i);
    }

    queue<int> ans = Interleave2HalfInQueue(q);

    while(!ans.empty()){
        cout << ans.front() << " ";
        ans.pop();
    }
    
}