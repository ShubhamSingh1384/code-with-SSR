// Q1> Add 2 number repersented by a linked list
// Q2> Add 1 to a number represented by a linked list;

// Slove for 1;

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

void insertAthead(Node* &head , int data){
    Node* temp = new Node(data);
    temp ->  next = head;
    head = temp;
}

void print(Node* head){
    while(head != NULL){
        cout << head -> data << " ";
        head = head -> next;
    }
    cout << endl;
}

//-------------------------------------------------------

Node* reverse(Node* head){
    if(head == NULL || head -> next == NULL){
        return head;
    }
    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;
    while(curr != NULL){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void insertAtTail(Node* &head, Node* &tail , int data){
    Node* temp = new Node(data);
    if(head == NULL){
        head = temp;
        tail = temp;
        
        return;
    }
    tail -> next = temp;
    tail = temp;
}

Node* add(Node* first , Node* second){
    int carry = 0;

    Node* ansHead = NULL;
    Node* ansTail = NULL;

    while(first != NULL && second != NULL){
        int sum = first -> data + second -> data + carry;
        int digit = sum % 10;
        insertAtTail(ansHead , ansTail , digit);
        carry = sum / 10;

        first = first -> next;
        second = second -> next;
    }

    while(first != NULL){
        int sum = first -> data + carry;
        int digit = sum % 10;
        insertAtTail(ansHead , ansTail , digit);
        carry = sum / 10;
        first = first -> next;
    }

    while(second != NULL){
        int sum = second -> data + carry;
        int digit = sum % 10;
        insertAtTail(ansHead , ansTail , digit);
        carry = sum / 10;
        second = first -> next;
    }

    while(carry != 0){
        int sum = carry;
        int digit = sum % 10;
        insertAtTail(ansHead , ansTail , digit);
        carry = sum / 10;
    }

    return ansHead;
}

Node* addTwoNumber(Node* first , Node* second){
    if(first == NULL ){
        return second;
    }
    if(second == NULL){
        return first;
    }

    first = reverse(first);
    second = reverse(second);

    Node* ans = add(first , second);
    ans = reverse(ans);
    return ans;
}

//----------------------------------------------------------



int main(){
    Node* node1 = new Node(1);
    // insertAthead(node1 , 2);
    // insertAthead(node1 , 3);
    print(node1);

    Node* node2 = new Node(9);
    // insertAthead(node2 , 2);
    print(node2);

    Node* sum = addTwoNumber(node1 , node2);
    print(sum);
}