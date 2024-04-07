// Heap :- It is a CBT(complete Binary Tree) that comes with a heap order property
// CBT :- every level is completely filled except the last level
//      -> nodes always added from the left (or lean toward left);


// Some basic term for 1 indexing array

//     Node -> ith index
//     left Child -> 2*i th index
//     right Child -> (2*i+1)th index
//     parent = (i/2)th index 

// Some basic term for 0 indexing array

//     Node -> ith index
//     left Child -> (2*i)+1 th index
//     right Child -> (2*i+2)th index
//     parent = (i/2)th index 


// Time Complexity :- in insertion and deletion {O(log n)}

#include<iostream>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;

    heap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int val){
        size++;
        int index = size;
        arr[index] = val;
        while(index > 1){
            int parent = index/2;

            if(arr[parent] < arr[index]){
                swap(arr[parent] , arr[index]);
                index = parent;
            }
            else{
                return ;
            }
        }
    }

    void deletefromHeap(){
        if(size == 0){
            cout << "nothing to delete" << endl;
            return ;
        }
        arr[1] = arr[size];
        size--;

        // take root node to its correct position
        int i=1;
        while(i < size){
            int leftIndex = 2*i;
            int rightIndex = 2*i+1;
            if(leftIndex < size && arr[i] < arr[leftIndex]){
                swap(arr[i] , arr[leftIndex]);
                i = leftIndex;
            }
            else if(rightIndex < size && arr[i] < arr[rightIndex]){
                swap(arr[i] , arr[rightIndex]);
                i = rightIndex;
            }
            else{
                return;
            }
        }
    }

    void print(){
        for(int i=1; i<=size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    heap h;
    // Insertion in heap

    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    h.deletefromHeap();
    h.print();
}