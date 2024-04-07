/*
    Push_back(push in rear);
    Push_front(push in front);
    Pop_back(pop from rear);
    Pop_front(pop from front);
*/

#include<iostream>
using namespace std;

class DoublyEnded{
    int* arr;
    int front;
    int rear;
    int size;

    public:

    DoublyEnded(){
        size = 100000;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    bool push_front(int x){
        if((front == 0 && rear == size - 1) || (rear == (rear-1)%(size-1))){
            cout << "Queue is full";
            return false;
        }
        else if(front == -1){
            front = rear = 0;
        }
        else if(front == 0 && rear != size - 1){
            front = size - 1;
        }
        else{
            front--;
        }
        arr[front] = x;
        return true;
    }

    bool push_rear(int x){
        if((front == 0 && rear == size -1) || (rear == (front-1)%(size-1))){
            cout << "Queue is full " << endl;
            return false;
        }
        else if(rear == -1){
            front = rear = 0;
        }
        else if(rear == size - 1 && front != 0){
            rear = 0;
        }
        else{
            rear++;
        }

        arr[rear] = x;
        return true;
    }

    int pop_front(){
        if(front == -1){
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;

        if(front == rear){
            front = rear = -1;
        }
        else if(front == size -1){
            front = 0; // to maintain cyclin nature
        }
        else{
            front++;
        }
        return ans;
    }

    int pop_rear(){
        if(rear == -1){
            return -1;
        }
        int ans = arr[rear];
        arr[rear] = -1;
        if(front == rear){
            front = rear = -1;
        }
        else if(rear == 0 && front != 0){
            rear = size - 1;
        }
        else{
            rear--;
        }
        return ans;
    }

    int get_front(){
        if(isEmpty()){
            return -1;
        }
        return arr[front];
    }

    int get_rear(){
        if(isEmpty()){
            return -1;
        }
        return arr[rear];
    }

    bool isEmpty(){
        return front == -1;
    }

    bool isFull(){
        if((front == 0 && rear == size - 1) ||
         (front != 0 && rear == (front-1)%(size-1))){
            //(front != 0) ye baat samaj nhi aaya;
            return true;
         }
        return false;
    }
};

int main(){

}