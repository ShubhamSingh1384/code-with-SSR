// When we use stack memory it is called static memory allocation
// When we use heap memory it is called dynamic memory allocation
// To create a memory in heap memory use a keyword 'new';
// Heap memory cannot be indetity by a name ; it can be taken as address and can be store in pointer variable;

// // Creating a heap memory
// #include<iostream>
// using namespace std;
// int main(){
//     int *p = new int; // It will form a memory in heap memory and store in pointer p;

// }

#include<iostream>
using namespace std;

int FindSum(int *arr, int size){ // arr[i] = *(arr + i);
    int sum = 0;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    // to create array in heap memory;
    int *arr = new int[5];
    // total memory pointer 8byte (mere me sayed 4byte doubt) aur heap me 5*4 total memory is 28 (20 hona chahiye sayed galat likhe hai)

    int n;
    cin >> n;
    //variable size of  array
    int* arr2 = new int[n]; // -> This variable n in the array can be use in heap memory only (In stack memory it is a bad practice);

    // taking input in array
    for(int i=0; i<n; i++){
        cin >> arr2[i];
    }

    int ans = FindSum(arr2, n);

    cout << "answer is " << ans << endl;

    return 0;
}