// rear == (front - 1) %(size - 1);
#include<iostream>
using namespace std;

class CircularQueue{
    int* arr;
    int size;
    int front;
    int rear;
    public:

    CircularQueue(){
        size = 100000;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    bool enqueue(int value){
        // to check wheter queue is full
        if((front == 0 && rear == size-1) || (rear == (front-1) % (size-1))){
            cout << "Queue is full ";
            return false;
        }
        else if(front == -1){ //first element to push
            front = rear = 0;
        }
        else if(rear == size-1 && front != 0){
            rear = 0;// to maintain cyclic nature
        }
        else{ // normal flow
            rear++;
        }

        arr[rear] = value;
        return true;
    }

    int dequeue(){
        if(front == -1){
            cout << "Queue is empty " << endl;
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;
        if(front == rear){ // single element is present
            front = rear = -1;
        }
        else if(front == size -1){ //to maintain cyclic nature
            front = 0;
        }
        else{
            front++;
        }

        return ans;
    }
};

int main(){
    CircularQueue q;
    q.enqueue(5);
    cout << q.dequeue();
}