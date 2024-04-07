// it work like standing in queue first in first out;
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;

    q.push("love");
    q.push("Babber");
    q.push("kumar");

    cout<<"First element : "<<q.front()<<endl;

    cout<<"size before pop : "<<q.size()<<endl;

    q.pop();
    cout<<"First Element : "<<q.front()<<endl;
    
    cout<<"Size after pop : "<<q.size()<<endl;
}