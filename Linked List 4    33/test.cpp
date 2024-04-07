#include <iostream>
using namespace std;

template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }
    };

Node<int>* reverse(Node<int>* head){
    Node<int>* curr = head;
    Node<int>* prev = NULL;
    Node<int>* next = NULL;
    while(curr != NULL){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void insertAtTail(Node<int>* &ansHead , Node<int>* &ansTail , int data){
    Node<int>* temp = new Node<int>(data);
    if(ansHead == NULL){
        ansHead = temp;
        ansTail = temp;
        return;
    }
    
    ansTail -> next = temp;
    ansTail = temp;
}

void print(Node<int>* Head){
    while(Head != NULL){
        cout << Head -> data << " ";
        Head = Head -> next;
    }
}

int main(){
    Node<int>* Head = NULL;
    Node<int>* Tail = NULL;
    insertAtTail(Head , Tail , 5);
    insertAtTail(Head , Tail , 3);
    insertAtTail(Head , Tail , 2);
    insertAtTail(Head , Tail , 1);
    Head = reverse(Head);
    print(Head);
}