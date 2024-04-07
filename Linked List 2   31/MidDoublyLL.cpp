#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head , Node* &tail , int data){
    // if No node present
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
        return;
    }

    // >= 2 node
    Node* temp = new Node(data);
    head -> prev = temp;
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &head , Node* &tail , int data){
    // if No node present
    if(tail == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
        return ;
    }

    Node* temp = new Node(data);
    tail -> next = temp;
    temp -> prev = head;
    tail = temp;
}

void insertPosition(Node* &head , Node* &tail , int position , int data){
    if(position == 1){
        insertAtHead(head , tail , data);
        return;
    }
    int cnt = 1;
    Node* curr = head;
    while(cnt < position - 1){
        curr = curr -> next;
        cnt++;
    }
    if(curr -> next == NULL){
        insertAtTail(head , tail , data);
        return;
    }
    Node* temp = new Node(data);
    temp -> prev = curr;
    temp -> next = curr -> next;
    curr -> next = temp;

}



void print(Node* head){
    if(head == NULL){
        cout << "no node present "<< endl;
        return;
    }
    do{
        cout << head -> data << " " ;
        head = head -> next;
    }while(head != NULL);

    cout << endl;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    print(head);

    insertAtHead(head , tail , 5);
    print(head);
    insertAtHead(head , tail , 4);
    print(head);
    insertAtHead(head , tail , 2);
    print(head);

    insertAtTail(head , tail , 7);
    print(head);
    insertAtTail(head , tail , 9);
    print(head);
    insertAtTail(head , tail , 11);
    print(head);

    insertPosition(head , tail , 1 , 55);
    print(head);
    insertPosition(head , tail , 4 , 55);
    print(head);
    insertPosition(head , tail , 9 , 55);
    print(head);

}