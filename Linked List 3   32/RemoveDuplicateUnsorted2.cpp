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

//----------------------------------------------

Node* reverse(Node* head){
    Node* curr = head;
    Node* next = NULL;
    Node* prev = NULL;

    while(curr != NULL){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

Node* RemoveDuplicateUnsorted(Node* head){
    if(head == NULL && head -> next == NULL){
        return head;
    }

    Node* temp = head;

    //temp = reverse(temp);

    while(temp -> next != NULL){
        int data = temp -> data;
        Node* check = temp  -> next;
        if(check -> data == data){
        temp -> next = check -> next;
        continue;
        }
        while(check -> next != NULL){
            if(check -> next -> data == data){
                check -> next = check -> next -> next;
            }
            else{
                check = check -> next;
            }
        }

        temp = temp -> next;
    }
    //head = reverse(head);
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
    Node* node1 = new Node(5);
    // cout << head -> data << endl;
    // cout << head -> next << endl;

    // head pointed to node;
    Node* head = node1;
    Node* tail  = node1;
    insertAtTail(tail, 4);
    insertAtHead(head, 4);
    insertAtHead(head, 4);
    insertAtHead(head, 4);

    insertAtTail(tail, 2);

    //insertAtHead(head , 2);
    insertAtTail(tail, 2);

    insertAtPosition(tail , head , 1 , 4);

    insertAtTail(tail, 5);

    insertAtTail(tail, 5);
    insertAtTail(tail , 9);
    print(head);
    Node * rev1  = reverse(head);

    Node* UniqueNode = RemoveDuplicateUnsorted(rev1);
    //print(UniqueNode);

    Node* rev = reverse(UniqueNode);
    print(rev);

}