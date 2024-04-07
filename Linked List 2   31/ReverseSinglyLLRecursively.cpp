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

void insertAtHead(Node* &head , Node* &tail , int data){
    // if no node present;
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;

}

void insertAtTail(Node* &tail , Node* &head , int data){
    // if no node find
    if(tail == NULL){
        Node* newNode = new Node(data);
        tail = newNode;
        head = newNode;
        return;
    }

    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head , Node* &tail , int position , int data){
    if(position == 1){
        insertAtHead(head , tail , data);
        return;
    }
    Node* curr = head;
    int cnt = 1;
    while(cnt < position-1){
        curr = curr -> next;
        cnt++;
    }

    if(curr -> next == NULL){
        insertAtTail(tail , head , data);
        return;
    }

    Node* temp = new Node(data);
    temp -> next = curr -> next;
    curr -> next = temp;
}

//--------------------------------------------------------------------------------------------------------

void ReverseLL(Node* &head , Node* curr , Node* prev){
    if(curr == NULL){
        head = prev;
        return ;
    }
    Node* forward = curr -> next;
    curr -> next = prev; // hamko ye samajh aa rha hai
    // prev = curr;
    // curr = forward;
    ReverseLL(head , forward , curr);
    //curr -> next = prev; // ye line uper v sahi hai aur niche v kaishe???
    //cout << prev << endl;
}

Node* reverseLinkList(Node* head){
    if(head == NULL || head -> next == NULL){
        return head;
    }
    Node* curr = head;
    Node* prev = NULL;
    ReverseLL(head , curr , prev);
    return head;
}

//--------------------------------------------------------------------------------------------------------

void print(Node* head){
    if(head == NULL){
        cout << "No node found " << endl;
        return;
    }

    while(head != NULL){
        cout << head -> data << " ";
        head = head -> next;
    }
    cout << endl;
}

int main(){
    Node* node1 = NULL;
    
    Node* head = NULL;
    Node* tail = NULL;
    print(head);
    print(tail);
    
    insertAtHead(head , tail , 5);
    print(head);
    insertAtHead(head , tail , 3);
    print(head);
    insertAtHead(head , tail , 1);
    print(head);

    insertAtTail(tail , head , 7);
    print(head);
    insertAtTail(tail , head , 9);
    print(head);
    insertAtTail(tail , head , 11);
    print(head);

    insertAtPosition(head , tail , 1 , 0);
    print(head);
    insertAtPosition(head , tail , 3 , 2);
    print(head);
    insertAtPosition(head , tail , 9 , 12);
    print(head);

    Node* reverse = reverseLinkList(head);
    print(reverse);
    
}