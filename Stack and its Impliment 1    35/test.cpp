#include<iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int data){
        if(size - top > 1){
            top++;
            arr[top] = data;
        }
        else{
            cout << "Stack overflow" << endl;
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
        if(top >= 0){
            return arr[top];
        }
        else{
            cout << "No data avilable " ;
            return -1;
        }
    }

    bool isEmpty(){
        if(top >= 0){
            return false;
        }
        
        return true;
    }

};

int main(){
    Stack st(5);
    st.push(4);
    st.push(56);
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    if(st.isEmpty()){
        cout << "Stack is empty" << endl;
    }
    else{
        cout << "Stack is not empty" << endl;
    }
    st.push(85);

    if(st.isEmpty()){
        cout << "Stack is empty" << endl;
    }
    else{
        cout << "Stack is not empty" << endl;
    }

}