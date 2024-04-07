// Merge two sorted linked list;

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

void insertAthead1(Node* &head1, int d){
    // create new node
    Node* temp = new Node(d);
    temp -> next = head1;
    head1 = temp;
}

void insertAttail1(Node* &tail1 , int d){
    // create new node
    Node* temp = new Node(d);
    tail1 -> next = temp;
    tail1 = temp;
}

void insertAtPosition(Node* &tail1 , Node* &head1 , int position , int d){
    // starting case sambhal liya;
    if(position == 1){
        insertAthead1(head1, d);
        return;
    }
    Node* temp = head1;
    int cnt = 1;
    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }
    // inserting at last position
    if(temp -> next == NULL){
        insertAttail1(tail1 , d);
    }
    // creating a node for data;
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;

}

//---------------------------------------------------------

Node* solve(Node* first , Node* second){

    // only one element present in first line
    if(first -> next == NULL){
        first -> next = second;
        return first;
    }

    Node* prev = first;
    Node* curr = prev -> next;
    Node* temp = second;
    Node* tempNext = temp -> next;

    while(curr != NULL && temp != NULL){
        if(temp -> data >= prev -> data && temp -> data <= curr -> data){
            prev -> next = temp;
            tempNext = temp -> next;
            temp -> next = curr;
            prev = temp;
            temp = tempNext;
        }
        else{
            prev = prev -> next;
            curr = curr -> next;

            if(curr == NULL){
                prev -> next = tempNext;
                return first;
            }
        }
    }
    return first;
}

Node* Merge2SortedLL(Node* head1 , Node* head2){
    if(head1 == NULL)
    return head2;

    if(head2 == NULL)
    return head1;

    if(head1 -> data <= head2 -> data){
        return solve(head1 , head2);
    }
    else{
        return solve(head2 , head1);
    }

}

//----------------------------------------------------------

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
    Node* node1 = new Node(3);
    Node* node2 = new Node(2);
    // cout << head1 -> data << endl;
    // cout << head1 -> next << endl;

    // head1 pointed to node;
    Node* head1 = node1;
    Node* tail1  = node1;

    Node* head2 = node2;
    Node* tail2 = node2;

    insertAttail1(tail1, 12);
    insertAttail1(tail1, 15);
    insertAthead1(head1 , 3);
    insertAttail1(tail1, 18);
    insertAtPosition(tail1 , head1 , 1 , 1);
    print(head1);

    insertAttail1(tail2, 3);
    insertAttail1(tail2, 9);
    insertAthead1(head2,1);
    insertAttail1(tail2, 17);
    insertAtPosition(tail2 , head2 , 1 , 0);
    insertAttail1(tail2, 20);
    insertAttail1(tail2, 21);
    print(head2);

    Node* sorted = Merge2SortedLL(head1 , head2);
    print(sorted);

}