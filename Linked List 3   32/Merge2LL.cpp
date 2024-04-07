// sort linked list 0s , 1s, 2s;
// using merge sorting;

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtTail(Node* &tail , int data){
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;
}

//-----------------------------------------------------

void insertAttail(Node* &tail , Node* curr){
    tail -> next = curr;
    tail = curr;
}

Node* sortList(Node* head){
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    Node* curr = head;

    // create seperate 0s , 1s and 2s linked list;
    while(curr != NULL){

        int value = curr -> data;
        if(value == 0)
        insertAttail(zeroTail , curr);
        
        else if(value == 1)
        insertAttail(oneTail , curr);

        else if(value == 2)
        insertAttail(twoTail , curr);

        curr = curr -> next;

    }
    // merge 3 sublist 
    if(oneHead -> next != NULL){
        zeroTail -> next = oneHead -> next;
    }

    else{
        //1s list -> empty
        zeroTail -> next = twoHead -> next;
    }

    oneTail -> next = twoHead -> next;
    twoTail -> next = NULL;

    // setup head
    head = zeroHead -> next;
    
    // delete dummy nodes;
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;
}

//-----------------------------------------------------

void print(Node* head){
    while(head != NULL){
        cout << head -> data << " ";
        head = head -> next;
    }
    cout << endl;
}

int main(){
    Node* head = new Node(2);
    Node* tail = head;
    insertAtTail(tail , 0);
    insertAtTail(tail , 1);
    insertAtTail(tail , 0);
    insertAtTail(tail , 1);
    insertAtTail(tail , 0);
    insertAtTail(tail , 1);
    insertAtTail(tail , 2);
    insertAtTail(tail , 2);
    print(head);

    Node* Sorted = sortList(head);
    print(Sorted);

}