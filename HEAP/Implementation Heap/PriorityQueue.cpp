#include<iostream>
using namespace std;
#include<queue>

int main(){
    // by default it is a max heap
    priority_queue<int> pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.push(5);

    cout << "Top element : " << pq.top() << endl;
    pq.pop();
    cout << "Top element : " << pq.top() << endl;

    priority_queue<int , vector<int> , greater<int>> minheap;

    minheap.push(5);
    minheap.push(4);
    minheap.push(3);
    minheap.push(2);
    minheap.push(1);

    cout << "Top element : " << minheap.top() << endl;
    minheap.pop();
    cout << "Top element : " << minheap.top() << endl;

    // Banki aur sb same hai queue k tarah

}