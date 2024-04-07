/* Bhaiya clone linked list me ek aishe linked list ko copy krna hota hai jisme 
    (according to question) -> ek data aur do pointer hai jis me se next pointer agle node ko point kr rha hai
    aur dushra kisi random node ko ussi list me se ya NULL ko..
*/

/* Es question ko yaha pura to solve nhi kiya ja sakta ham sirf code likh rhe hai baad me quesion GFG pe dekh lena 

  LECTURE 51 KA HAI

*/

/* ------------------------------------------------------------------------------
    pahle linked list ka ek clone bna lo 
    phir ek unordered map me original LL aur clone LL ko map kr do (unordered_map <Node* , Node*> map_name ;
    phir data set krdo 
                    clone -> random = map_name[original -> random];


//-------------------------------------------------------------------------------

/*
    void insertAtTail(Node* &head , Node* &tail , int d){
        Node* newNode = new Node(d);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail -> next = newNode;
        tail = newNode;
    }

    Node* copyList(Node* head){
        // step 1 : create a clone list

        Node* cloneHead = NULL;
        Node* cloneTail = NULL;

        Node* temp = head;

        while(temp != NULL){
            insertAtTail(cloneHead , cloneTail , temp -> data);
            temp = temp -> next;
        }

        //step 2 : create a map
        unordered_map<Node* , Node*> oldToNewNode;

        Node* originalNode = head;
        Node* cloneNode = cloneHead;
        while(originalNode != NULL){
            oldToNewNode[originalNode] = cloneNode;
            originalNode = originalNode -> next;
            cloneNode = cloneNode -> next;
        }

        originalNode = head;
        cloneNode = cloneHead;

        while(originalNode != NULL){
            cloneNode -> random = oldToNewNode[originalNode -> random];
            originalNode = originalNode -> next;
            cloneNode = cloneNode -> next;
        }

        return cloneHead;
    }


*/