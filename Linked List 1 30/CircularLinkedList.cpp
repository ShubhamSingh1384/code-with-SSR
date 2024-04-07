// circular me sirf tail pointer hota hai kyo ki ye circular hota hai
#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){ // what is the use of ~node here;
            delete next ;         // it is working too without desturctor;
            next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }
};

void insertNode(Node* &tail , int element , int data){
    // assuming that the element is preset in the list;

    //if list is empty
    if(tail == NULL){
        Node* newNode = new Node(data);
        tail = newNode;
        newNode -> next = newNode;
        return;
    }
    // non empty list;
    // asssuming that the element is present in the list
    Node* curr = tail;
    while(curr -> data != element){
        curr = curr -> next;
    }
    Node* temp = new Node(data);
    temp -> next = curr -> next;
    curr -> next = temp;
}

bool isCircularList(Node* head){
    // empty case
    if(head == NULL){
        return NULL;
    }
    Node* temp = head -> next;
    while(temp != NULL && temp != head){
        temp = temp -> next;
    }
    if(temp == NULL) return false;

    return true;
}

void deleteNode(Node* &tail , int value){
    // empty list
    if(tail == NULL){
        cout << " List is empty , please check again "  << endl;
        return ;
    }
    // non empty list
    Node* prev = tail;
    Node* curr = prev -> next;
     
    while(curr -> data != value){
        prev = curr;
        curr = curr -> next;
    }
    prev -> next = curr -> next;

    //1 Node linked list
    if(curr == prev){
        tail = NULL;
    }

    // >= 2 Node Linked list
    if(tail == curr){
        tail = prev;
    }

    curr -> next = NULL;
    delete curr;
}

bool detectloop(Node* head){
    if(head == NULL){
        return false;
    }
    Node* temp = head;
    map<Node* , bool> visited;

    while(temp != NULL){
        // cycle is present
        if(visited[temp] == true){
            return 1;
        }
        visited[temp] = true;
        temp = temp -> next;
    }
    return 0;
}


void print(Node* tail){
    Node* temp = tail;
    // if no node 
    if(tail == NULL){
        cout << "List is empty " << endl;
        return;
    }
    
    do{
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail != temp);

    cout << endl;
}

int main(){
    Node* tail = NULL;
    
    insertNode(tail , 0 , 3);
    print(tail);
    insertNode(tail , 3 , 5);
    print(tail);
    insertNode(tail , 5 , 6);
    print(tail);
    insertNode(tail , 6 , 7);
    print(tail);
    insertNode(tail , 3 , 4);
    print(tail);
    insertNode(tail , 7 , 8);
    print(tail);
    
    insertNode(tail , 8 , 2);
    print(tail);

    deleteNode(tail , 3);// take a look when you have only one node how to delete and print 
    print(tail);         // how to take care of tail;

    cout << "circular or not " << isCircularList(tail) << endl;
    cout << "circular or not " << detectloop(tail) << endl;
}