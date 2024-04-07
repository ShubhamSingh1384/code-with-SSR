#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    
};

void insertAtHead(Node* &head, int d){
    // create new node
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail , int d){
    // create new node
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void insertAtPosition(Node* &tail , Node* &head , int position , int d){
    // starting case sambhal liya;
    if(position == 1){
        insertAtHead(head, d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }
    // inserting at last position
    if(temp -> next == NULL){
        insertAtTail(tail , d);
    }
    // creating a node for data;
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;

}

// -------------------------------------------

Node* DeleteDuplicatesSortedLL(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* temp = head;
    while(temp -> next != NULL){
        if(temp -> data == temp -> next -> data){
            Node* forward = temp -> next;
            temp -> next = forward -> next;
            forward = NULL;
            delete (forward);
        }
        else{
            temp = temp -> next;
        }
    }
    return head;
}

//----------------------------------------------------

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){
    // created a new node
    Node* node1 = new Node(10);
    // cout << head -> data << endl;
    // cout << head -> next << endl;

    // head pointed to node;
    Node* head = node1;
    Node* tail  = node1;
    insertAtTail(tail, 10);

    insertAtTail(tail, 12);

    insertAtHead(head , 8);
    insertAtTail(tail, 12);

    insertAtPosition(tail , head , 1 , 8);

    insertAtTail(tail, 13);

    insertAtTail(tail, 13);
    print(head);

    Node* UniqueNode = DeleteDuplicatesSortedLL(head);
    print(UniqueNode);

}