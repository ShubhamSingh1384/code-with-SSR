#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        data = d;
        left = right = NULL;
    }
};

void convertIntoSortedDLL(node* root , node* &head){
    if(root == NULL)
    return ;

    convertIntoSortedDLL(root->right , head);

    root->right = head;

    if(head != NULL)
    head->left = root;

    head = root;

    convertIntoSortedDLL(root->left , head);

}

node* mergeLL(node* head1 , node* head2){
    node* head = NULL;
    node* tail = NULL;

    while(head1 != NULL && head2 != NULL){
        if(head1->data < head2->data){
            if(head == NULL){
                head = head1;
                tail = head1;
            }
            else{
                tail->right = head1;
                head1->left = tail;
                tail = head1;
            }
            head1 = head1->right;
        }
        else{
            if(head == NULL){
                head = head2;
                tail = head2;
            }
            else{
                tail->right = head2;
                head2->left = tail;
                tail = head2;
            }
            head1 = head2->right;
        }
    }
    while(head1 != NULL){
        tail->right = head1;
        head1->left = tail;
        tail = head1;
        head1 = head1->right;
    }
    while(head2 != NULL){
        tail->right = head2;
        head2->left = tail;
        tail = head2;
        head1 = head2->right;
    }

    return head;
}

int countNodes(node* head){
    int cnt = 0;
    node* temp = head;
    while(temp != NULL){
        cnt++;
        temp = temp -> right;
    }

    return cnt;
}

node* SortedLL_BST(node* &head , int n){
    if(n <= 0 || head == NULL)
    return NULL;

    node* left = SortedLL_BST(head , n/2);

    node* root = head;
    root->left = left;

    root->right = SortedLL_BST(head , n-n/2-1);

    return root;
}

int main(){

}