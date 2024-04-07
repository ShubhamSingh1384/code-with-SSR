// pahla tarika vector bna k sb Node k data ko dal do phir vector ko check kr lo ki wo palindrome hai ya nhi

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

Node* getMid(Node* &head){
    Node* temp = head;
    Node* slow = temp;
    Node* fast = slow -> next;

    while(fast != NULL && fast -> next != NULL){
        fast = fast -> next -> next;
        slow = slow -> next;

    }
    return slow;
}

Node* reverse(Node* head){
    Node* curr = head;
    Node* prev = NULL;
    while(curr != NULL){
        Node* forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    
    return prev;
}

bool isPalindrome(Node* head){
    if(head -> next == NULL){
        return true;
    }

    // stemp 1 -> find middle
    Node* middle = getMid(head);

    //step 2 -> reverse list after middle
    Node* temp = middle -> next;
    middle -> next = reverse(temp);

    //step3 -> compare both halves;
    Node* head1 = head;
    Node* head2 = middle -> next;

    while(head2 != NULL){
        if(head1 -> data != head2 -> data){
            return false;
        }
        head1 = head1 -> next;
        head2 = head2 -> next;
    }

    // step 4 -> repeat step 2;
    temp = middle -> next;
    middle -> next = reverse(temp);

    return true;
}

//----------------------------------------------------------



int main(){
    Node* node1 = new Node(1);
    insertAthead(node1 , 2);
    insertAthead(node1 , 3);
    insertAthead(node1 , 2);
    insertAthead(node1 , 1);
    print(node1);

    cout << "palindrome or not " << isPalindrome(node1) << endl;

    print(node1);

}