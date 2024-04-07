// Linked List :- It is a linear data structure (collection of nodes);
//(Nodes k andar ek data hota hai aur ek address hota hai);
// It is created in heap memory so that in every function fun(Node*->(a pointer which point an address in heap memory) &->(call by reference)name , int data)


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
    // ~Node(){
    //     int value = this -> data;   // what is need of desturctor (take help);
    //     //memory free
    //     if(this -> next != NULL){
    //         delete next ;
    //         this -> next = NULL;
    //     }
    //     cout << "destrector called " << value << endl;
    // }
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

void deleteNode(Node* &head , Node* &tail , int position){
    // deleting first or start node
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        // memory free start node;
        delete temp;
        return ;
    }

    Node* curr = head;
    Node* prev = NULL;
    int cnt = 1;
    while(cnt < position){
        prev = curr;
        curr = curr -> next;
        cnt++;
    }

    if(curr -> next == NULL) tail = prev;

    prev -> next = curr -> next;
    curr -> next = NULL;
    delete curr;
    
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}


void insertAtPosition(Node* &curr , int data){
    if(curr -> next == NULL){
        Node* temp = new Node(data);
        curr -> next = temp;
    }
    else{
        Node* temp = new Node(data);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}



Node *getListAfterAddingNodes(Node *head, int k){
    //	Write your code here.
    Node* temp = head;
    Node* curr = temp;
    while(temp != NULL){
        int n = k;
        int sum = 0;
        while(n--){
            if(temp == NULL) break;
            sum += temp -> data;
            curr = temp;
            if(k > 0)
            temp = temp -> next;
        }//
        insertAtPosition(curr , sum);
        //temp = temp -> next -> next;
        
    }
    return head;
}

Node* reverseLL(Node* head){
    Node* temp = head;
    Node* prev = NULL;
    Node* forward = NULL;
    while(temp != NULL){
        forward = temp -> next;
        temp -> next = prev;
        prev = temp;
        temp = forward;
    }
    return prev;
}
 

int main(){
    // created a new node
    Node* node1 = new Node(10);
    // cout << head -> data << endl;
    // cout << head -> next << endl;

    // head pointed to node;
    Node* head = node1;
    Node* tail  = node1;
    //print(head);
    insertAtTail(tail, 12);
    //print(head);

    insertAtTail(tail, 15);
    //print(head);

    insertAtHead(head , 8);
    //print(head);

    insertAtTail(tail, 18);
    insertAtTail(tail, 100);
    //print(head);

    insertAtPosition(tail , head , 1 , 1);
    //print(head);

    //cout << " head " << head -> data << endl;
    //cout << " tail " << tail -> data << endl;

    //insertAtTail(tail, 18);
    //print(head);

    insertAtTail(tail, 20);
    //print(head);
    insertAtTail(tail, 21);
    //print(head);
    insertAtTail(tail, 22);
    //print(head);

    print(head);
    cout << " head " << head -> data << endl;
    cout << " tail " << tail -> data << endl;

    Node* temp = reverseLL(head);
    print(temp);
}