// Queue follow FIFO(first in first out) like queue of student 
//                                       in school;
#include<iostream>
#include<queue>
using namespace std;

int main(){
    // create a queue

    queue<int> q;

    q.push(11);
    cout << "front of q is " << q.front() << endl;
    q.push(15);
    cout << "front of q is " << q.front() << endl;
    q.push(13);
    cout << "front of q is " << q.front() << endl;

    cout << "size of queue is : " << q.size() << endl;

    q.pop();
    cout << "front of q is " << q.front() << endl;
    q.pop();
    cout << "front of q is " << q.front() << endl;

    if(q.empty()){
        cout << "Queue is empty " << endl;
    }
    else{
        cout << "Queue is not empty" << endl;
    }
}