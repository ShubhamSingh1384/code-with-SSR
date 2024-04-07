// Stack implementation means creating your own stack using class

#include<iostream>
using namespace std;

class Stack{
    // property
    public:
        int *arr;
        int top;
        int size;
    //behaviour
    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout << "Stack Overflow" << endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout << "Stack underflow" << endl;
        }
    }

    int peek(){
        if(top >= 0 && top < size)
        return arr[top];
        else{
            cout << "Stack is Empty : ";
        }
        return -1;
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }

};

int main(){
    Stack st(5);
    cout << "Element at the peek : " << st.peek() << endl;
    st.push(2);
    st.push(4);
    st.push(6);
    cout << "Element at the peek : " << st.peek() << endl;

    st.pop();
    st.pop();

    cout << "Element at the peek : " << st.peek() << endl;

    if(st.isEmpty()){
        cout << "Stack is empty " << endl;
    }
    else{
        cout << "Stack is not empty " << endl;
    }
    st.pop();

    if(st.isEmpty()){
        cout << "Stack is empty " << endl;
    }
    else{
        cout << "Stack is not empty " << endl;
    }

}