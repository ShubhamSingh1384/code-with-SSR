// lecture 51
/*
    // step 1 -> clone the linked list;

    void insertAtTail(Node* head , Node* tail , int data){
        Node* newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }

        tail -> next = newNode;
        tail = newNode;
    }

    Node* copyList(Node* head){

        // step 1 :- create clone linked list

        Node* originalHead = head;
        Node* temp = originalHead;
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        while(temp != NULL){
            insertAtTail(cloneHead , cloneTail , temp -> data);
            temp = temp -> next;
        }
        
        // step 2 -> map original node to clone node in real (using pointer);

        Node* originalNode = originalHead;
        Node* cloneNode = cloneHead;
        while(originalNode != NULL){
            Node* originalNext = originalNode -> next;
            originalNode -> next = cloneNode;
            originalNode = originalNext;
            
            Node* cloneNext = cloneNode -> next;
            cloneNode -> next = originalNode;
            coloneNode = cloneNext;
        }

        // step 3 -> random pointer copy ;         // copy k bare me sochne me problem ho rha hai

        // originalNode = originalHead;
        // cloneNode = cloneHead;

        // while(cloneNode != NULL && clone -> next != NULL){
        //     cloneNode -> random = original -> random -> next;
        //      
        //      if(cloneNode -> next != NULL)
        //          cloneNode = cloneNode -> next -> next;
        //      else 
        //          cloneNode = cloneNode -> next;
        //
        //     original = original -> next -> next;
        // }

        temp = head;

        while(temp != NULL){
            if(temp -> next != NULL){
                temp -> next -> random = temp -> random ? temp -> random -> next : temp -> random;
            }
            // if(temp -> radom != NULL){
            //     temp -> next -> random = temp -> random -> next;
            // }
            // else{
            //     temp -> next = tem -> random;
            // }
            temp = temp -> next -> next;
        }

        // step 4 -> step 2 ke modification ko normal krna hai;

        originalNode = originalHead;
        cloneNode = cloneHead;

        while(originalNode != NULL){
            originalNode -> next = cloneNode -> next;
            originalNode = originalNode -> next;

            if(originalNode != NULL)
            cloneNode -> next = originalNode -> next;

            cloneNode = cloneNode -> next;
        }
        // step 5 -> return ans;

        return cloneHead;

    }


*/