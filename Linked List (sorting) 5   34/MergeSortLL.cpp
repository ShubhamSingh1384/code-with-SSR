/*
    ---------------KAHANI------------
    --> linked list ka mid nikal na hai 
    --> left part aur right part me batna hai
    --> recursion k help se dono part ko sort krna hai 
    --> phir dono sorted part ko sorting krte hue merge krna hai 
*/

// time complexity :- O(nlog n);
// space complexity :- O(log n);

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

//--------------------------------------------------------------------

Node* middle(Node* head){
    Node* slow = head;
    Node* fast = head -> next;
    while(fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
}

Node* merge(Node* left , Node* right){
    if(left == NULL) return right;
    if(right == NULL) return left;

    Node* ans = new Node(-1);
    Node* temp = ans;
    while(left != NULL && right != NULL){
        if(left -> data < right -> data){
            temp -> next = left;
            left = left -> next;
        }
        else{
            temp -> next = right;
            right = right -> next;
        }
        temp = temp -> next;
    }
    while(left != NULL){
        temp -> next = left;
        left = left -> next;
        temp = temp -> next;
    }
    while(right != NULL){
        temp -> next = right;
        right = right -> next;
        temp = temp -> next;
    }
    ans = ans -> next ;
    
    return ans;
}


Node* mergeSort(Node* head){
    if(head == NULL || head -> next == NULL){
        return head;
    }
    
    Node* temp = head;
    // finding mid 
    Node* mid = middle(temp);

    // crating left and right part;
    Node* left = head;
    Node* right = mid -> next;
    mid -> next = NULL;

    // sorting left part
    left = mergeSort(left);

    // sorting right part
    right = mergeSort(right);

    // merge left and right
    Node* ans = merge(left , right);

    return ans;
}

//--------------------------------------------------------------------


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
    insertAtTail(tail, 15);
    insertAtPosition(tail , head , 1 , 1);
    insertAtTail(tail, 2);
    insertAtTail(tail, 18);
    insertAtHead(head , 8);
    print(head);

    Node* sortedLL = mergeSort(head);
    print(sortedLL);
    
}