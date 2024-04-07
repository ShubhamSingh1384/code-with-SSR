#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    // constructor
    Node(int data){
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    }
    // Destructor k bina v chal ja rha hai 
    // phir v destructor k use kyo kr rhe hai
    ~Node(){        // why it is necessary;
        int value = this -> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data " << value << endl;
    }
};

// insert at head;
void insertAtHead(Node* &head , Node* &tail , int data){
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(data);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
}

// insert at tail
void insertAtTail(Node* &head , Node* &tail , int data){  //agar ham node ko call by reference nhi kr rhe hai phir v ek last me 
    if(tail == NULL){                                     // insert ho ja rha hai (hai aisha kyo be juba sa ye jaha hai );
        Node* temp = new Node(data);
        tail = temp;
        head = temp;
    }
    Node* temp = new Node(data);            
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}

// insert at any position
void insertAtPosition(Node* &head , Node* &tail , int position , int data){
    if(position == 1){
        insertAtHead(head , tail , data);
        return ;
    }

    int cnt = 1;
    Node* temp = head;
    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }
    if(temp -> next == NULL){
        insertAtTail(head , tail , data);
        return;
    }
    Node* NodeToInsert = new Node(data);
    NodeToInsert -> next = temp -> next;//// value main ke head me updata kaishe hua;
    temp -> next -> prev = NodeToInsert;//// jb ki head ko temp me copy kr liye the phir temp pe khele (head me kaishe gya);
    temp -> next = NodeToInsert;
    NodeToInsert -> prev = temp;      
}


// To find the length of linked list;
int getLeangth(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}

void deleteNode(Node* &head , Node* &tail , int position){
    if(position == 1){
        Node* temp = head;
        //cout << temp -> next -> prev << endl;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;

        return;
    }
    
    Node* temp = head;
    int cnt = 1;
    Node* curr = head;
    Node* pre = head;
    while(cnt < position){
        pre = curr;
        curr = curr -> next;
        cnt++;
    }

    if(curr -> next == NULL) tail = pre;

    curr -> prev = NULL;
    pre -> next = curr -> next;
    curr -> next = NULL;

    delete curr;

    // ham aishe kiye the thik he hai sayed check krwa lo kisi se;
    // if(curr -> next == NULL){
    //     curr -> prev = NULL;
    //     pre -> next = curr -> next;
    //     delete curr;
    //     return ;
    // }

    // curr -> next -> prev = pre -> next;
    // pre -> next = curr -> next;
    // curr -> next = NULL;
    // curr -> prev = NULL;

    // delete curr;
    
    // temp -> prev -> next = temp -> next;
    // temp -> next -> prev = temp -> prev;   // kya ye galat hai 
    // temp -> prev = NULL;                   // uper thora change hua hai
    // temp -> next = NULL;
    //delete temp;

}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " " ;
        temp = temp -> next;
    }
    cout << endl;
}

int main(){
    //Node* node1 = new Node(10);

    // Node* head = node1;
    // Node* tail = node1;
    //print(head);

    Node* head = NULL;
    Node* tail = NULL;

   //cout << getLeangth(head);

   insertAtHead(head , tail , 9);
   print(head);
   insertAtHead(head , tail , 8);
   print(head);
   insertAtHead(head , tail , 7);
   print(head);

   insertAtTail(head , tail , 11);
   print(head);
   insertAtTail(head , tail , 12);
   print(head);
   insertAtTail(head , tail , 15);
   print(head);

   insertAtPosition(head , tail , 1 , 6);
   print(head);
   insertAtPosition(head , tail , 7 , 13);
   print(head);
   insertAtPosition(head , tail , 9 , 17);
   print(head);

   deleteNode(head , tail , 1);
   print(head);
   deleteNode(head , tail , 4);
   print(head);
   deleteNode(head , tail , 7);
   print(head);

    cout << tail -> data << endl;
   insertAtTail(head , tail , 66);
   print(head);
   cout << tail -> data << endl;

   insertAtTail(head , tail , 67);
   print(head);

   cout << tail -> data << endl;

   insertAtHead(head , tail , 1);
   print(head);

   cout << "head " << head -> data << endl;
   cout << "tail " << tail -> data << endl;
}